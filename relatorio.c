#include <stdio.h>
#include <stdlib.h>
#include "relatorio.h"
#include "biblioteca.h"

void moduloRelatorio(void) {
    char opção;
    do {
         opção = menuRelatorio();
         switch(opção) {
             case '1':  Paciente();
                        break;
             case '2':  Avaliacaoclinica();
                        break;
             case '3':  Avaliacaonutricional();
                        break;
             case '4':  Dieta();
                        break;
         }
    }while (opcao != '0');
}


void Paciente(void) {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaPaciente();
}


void Avaliacaoclinica(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaAvaliacaoclinica();
}


void Avaliacaonutricional(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaAvaliacaonutricional();
}


void Dieta(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaDieta();
}



char menuRelatorio(void) {
    char op;
    
    system("clear||cls")
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                         ///\n");
    printf("///                       = = = = = = = = = = = = = = = = = = = = = =                       ///\n");
    printf("///                     = = = = = = = = Menu Relatório = = = = = = = =                      ///\n");
    printf("///                       = = = = = = = = = = = = = = = = = = = = = =                       ///\n");
    printf("///                     = = = = = = = = = Menu Relatório = = = = = = = =                    ///\n");
    printf("///                      = = = = = = = = = = = = = = = = = = = = = = =                      ///\n");
    printf("///                                                                                         ///\n");
    printf("///                1. Desenvolvimento apresentado pelo paciente ao decorrer da dieta        ///\n");
    printf("///                2. Avaliação clinica                                                     ///\n");
    printf("///                3. Avaliação nutricional                                                 ///\n");
    printf("///                4. Resultados da Dieta                                                   ///\n");
    printf("///                0. Voltar ao menu anterior                                               ///\n");
    printf("///                                                                                         ///\n");
    printf("///                Escolha a opção desejada: 
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                                         ///\n");
    printf("///                                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1)
    return op;
}


           
 void telaSobre(void) {
    system("clear||cls");
    printf("\n");
    printf("////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                  ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte                        ///\n");
    printf("///               Centro de Ensino Superior do Seridó                                ///\n");
    printf("///               Departamento de Computação e Tecnologia                            ///\n");
    printf("///               Disciplina DCT1106 - Programação                                   ///\n");
    printf("///               Projeto Sistema de Planejamento de Dieta                           ///\n");
    printf("///               Desenvolvido por mariana - Nov, 2021                               ///\n");
    printf("///                                                                                  ///\n");
    printf("////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                  ///\n");
    printf("///       = = = = = = = = = Sistema de Planejamento de Dieta = = = = = = = =         ///\n");
    printf("///                                                                                  ///\n");
    printf("///       Programa  utilizado na disciplina DCT1106 - Programação, para fins         ///\n");
    printf("///       avaliativo no Semestre 2021.2. O programa contém os principais módulos     ///\n");
    printf("///       e funcionalidades que serão exigidos ao longo da disciplina.               ///\n");
    printf("///                                                                                  ///\n");
    printf("////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}          
