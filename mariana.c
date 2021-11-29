#include<unistd.h>
#include"cardápio.h"
#include"paciente.h"
#include"receita.h"



//////
////// Assisnaturas das funções
//////

char telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);



//////
////// Programa principal
//////

int main(void) {
  char opcao;
  
  do {
     opcao = telaPrincipal();
     switch(opcao) {
         case '1':   moduloCardápio();
                     break;
         case '2':   moduloPaciente();
                     break;
         case '3':   moduloReceita();
                     break;
         case '4':   // Módulo Relatórios
                     break;
         case '5':   telaSobre();
                     tela Principal();
                     break;
     }
  } while (opcao != '0');
  
  return 0;
}



//////
////// Funções do Módulo Principal
//////



char telaPrincipal(void) {
