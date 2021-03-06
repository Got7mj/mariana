#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"cardapio.h"
#include"paciente.h"
#include"receita.h"
#include"biblioteca.h"
#include"relatorio.h"



//////
////// Assisnaturas das funções
//////

char telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);



void moduloRelatorios(void);
void delay(int);



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
    char op;
  
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                             ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte                   ///\n");
    printf("///               Centro de Ensino Superior do Seridó                           ///\n");
    printf("///               Departamento de Computação e Tecnologia                       ///\n");
    printf("///               Disciplina DCT1106 - Programação                              ///\n");
    printf("///               Projeto Sistema de Planejamento de Dieta                      ///\n");
    printf("///               Desenvolvido por mariana                                      ///\n");
    printf("///                                                                             ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                             ///\n");
    printf("///             = = = = = Sistema de Planejamento de Dieta = = = = =            ///\n");
    printf("///                                                                             ///\n");
    printf("///               1. Módulo Cardápio                                            ///\n");
    printf("///               2. Módulo Paciente                                            ///\n");
    printf("///               3. Módulo Receitas                                            ///\n");
    printf("///               4. Módulo Relatórios                                          ///\n");
    printf("///               5. Módulo Sobre                                               ///\n");
    printf("///               0. Sair                                                       ///\n");
    printf("///                                                                             ///\n");
    printf("///               Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                             ///\n");
    printf("///                                                                             ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return op;
}




void telaSobre(void) {
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    Universidade Federal do Rio Grande do Norte                    ///\n");
    printf("///                    Centro de Ensino Superior do Seridó                            ///\n");
    printf("///                    Departamento de Computação e Tecnologia                        ///\n");
    printf("///                    Disciplina DCT1106 - Programação                               ///\n");
    printf("///                    Projeto Sistema de Planejamento de Dieta                       ///\n");
    printf("///                    Desenvolvido por mariana - 2021.2                              ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///            = = = = = = = = Sistema de Planejamento de Dieta = = = = = = = =       ///\n");
    printf("///                                                                                   ///\n");
    printf("///          Programa  utilizado na disciplina DCT1106 - Programação, para fins       ///\n");
    printf("///          avaliativo no Semestre 2021.2. O programa contém os principais módulos   ///\n");
    printf("///          e funcionalidades que serão exigidos ao longo da disciplina.             ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaEquipe(void) {
    sistema("limpar||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   Universidade Federal do Rio Grande do Norte                     ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                             ///\n");
    printf("///                   Departamento de Computação e Tecnologia                         ///\n");
    printf("///                   Disciplina DCT1106 - Programação                                ///\n");
    printf("///                   Projeto Sistema de Planejamento de Dieta                        ///\n");
    printf("///                   Desenvolvido por mariana - 2021.2                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///             = = = = = = Sistema de Planejamento de Dieta = = = = = =              ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Este projeto exemplo foi desenvolvido por:                            ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Mariana Araújo de Medeiros                                            ///\n");
    printf("///             E-mail: mariana.medeiros.017@ufrn.edu.br                              ///\n");
    printf("///             Repositório: https://github.com/ Got7mj/mariana                       ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void moduloRelatorio(void) {
	// modulo em desenvolvimento

}
