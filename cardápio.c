#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"
#include "biblioteca.h"

void moduloCardápio(void) {
    char opção;
    do {
         opção = menuCardápio();
         switch(opção) {
             case '1':  telaCadastrarCardápio();
                        break;
             case '2':  telaPesquisarCardápio();
                        break;
             case '3':  telaAlterarCardápio();
                        break;
             case '4':  telaExcluircCardápio();
                        break;
         }
    }while (opcao != '0');
}



void cadastrarCardápio(void) {
        // função ainda em desenvolvimento
        // exibe a tela apenas para testes
        telaCadastrarCardápio();
}


void pesquisarCardápio(void) {
        // função ainda em desenvolvimento
        // exibe a tela apenas para testes
        telaPesquisarCardápio();
}


void alterarCardápio(void) {
        // função ainda em desenvolvimento
        // exibe a tela apenas para testes
        telaAlterarCardápio();
}


void excluirCardápio(void) {
        // função ainda em desenvolvimento
        // exibe a tela apenas para testes
        void telaExcluirCardápio();
}


char menuCardápio(void) {
        char op;
    sistema("clear||cls");
        printf("\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                               ///\n");
        printf("///                 = = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
        printf("///               = = = = = = = = = = Menu Cardápio = = = = = = = = = =           ///\n");
        printf("///                = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
        printf("///               = = = = = = = = = = Menu Cardápio = = = = = = = = = =           ///\n");
        printf("///                = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
        printf("///                                                                               ///\n");
        printf("///                1. Cadastrar um novo Cardápio                                  ///\n");
        printf("///                2. Pesquisar a numeração de um Cardápio                        ///\n");
        printf("///                3. Atualizar o cadastro do Cardápio                            ///\n");
        printf("///                4. Excluir um Cardápio do sistema                              ///\n");
        printf("///                0. Voltar ao menu anterior                                     ///\n");
        printf("///                                                                               ///\n");
        printf("///                Escolha a opção desejada: 
        scanf("%c", &op);
        getchar(); 
        printf("///                                                                               ///\n");
        printf("///                                                                               ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        delay(1);
        return op;
}

           
 
void telaCadastrarCardápio(void) {
        char num[12];
        char criação[11];
    
    sistema("clear||cls");
        printf("\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                               ///\n");
        printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
        printf("///                = = = = = = = = = Cadastrar Cardápio = = = = = = = =           ///\n");
        printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
        printf("///                                                                               ///\n");
    do {
            printf("///               Numeração (apenas números): ");  
        scanf("%[^\n]", num);
        getchar();
    } while (!validaNum(num));
    } while (!validarNum(num));
        printf("///                  Data da Criação (dd/mm/aaaa): ");
        scanf("%[0-9]", criação);
        getchar();
    do {
        printf("///                                                                               ///\n");
        printf("///                                                                               ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        delay(1);
}

           
           
void telaPesquisarCardápio(void) {
    char num[12];
    
    sistema("clear||cls");
        printf("\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                               ///\n");
        printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
        printf("///               = = = = = = = = Pesquisar Cardápio = = = = = = = =              ///\n");
        printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
        printf("///                                                                               ///\n");
        printf("///                 Informe a numeração (apenas números): 
        scanf("%[0-9]", num);
        getchar();
        printf("///                                                                               ///\n");
        printf("///                                                                               ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        delay(1);
}       
           

           
void telaAlterarCardápio(void) {
    char num[12];
    
    sistema("clear||cls");
        printf("\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                               ///\n");
        printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
        printf("///                = = = = = = = = Alterar Cardápio = = = = = = = = =             ///\n");
        printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
        printf("///                                                                               ///\n");
        printf("///                  Informe a numeração(apenas números): 
        scanf("%[0-9]", num);
        getchar();
        printf("///                                                                               ///\n");
        printf("///                                                                               ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        delay(1);
}       



void telaExcluirCardápio(void) {
    char num[12];
    
    sistema("clear||cls");
        printf("\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                               ///\n");
        printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
        printf("///               = = = = = = = = Excluir Cardápio = = = = = = = = =              ///\n");
        printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
        printf("///                                                                               ///\n");
        printf("///                 Informe a numeração (apenas números): 
        scanf("%[0-9]", num);
        getchar();
        printf("///                                                                               ///\n");
        printf("///                                                                               ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        delay(1);
}       
 
               
             
///
/// Funções de validação - serão transferidas posteriormente para o módulo biblioteca.c
///

int validaNome(char nome[]) {

}




               
 int validaEmail(char email[]) {

}


int validaCPF(char cpf[]) {
    int tam;
    
    tam = strlen(cpf);
    if (tam != 11) {
        return 0;
    }
    for (int i = 0; i < tam; i++) {
        if (!ehDigito(cpf[i])) {
            return 0;
        }
    }
    return 1;
}   

               
int validaData(char data[]) {

}


int validaCelular(char cel[]) {
    int tam;

    tam = strlen(cel);
    if (tam != 11) {
        return 0;
    }
    for (int i = 0; i < tam; i++) {
        if (!ehDigito(cel[i])) {
            return 0;
        }
    }
    return 1;
}   

             
int validaNum(char num[]) {
    int tam;

    tam = strlen(num);
    if (tam < 1000 || tam > 1001) {
        return 0;
    }
    for (int i = 0; i < tam; i++) {
        if (!ehDigito(num[i])) {
            return 0;
        }
    }
    return 1;
}
