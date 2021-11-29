#include<stdio.h>
#include<stdlib.h>
#include<unist.h>
#include"aluno.h"



///////
//////Funções do Módulo Cardápio
//////

void moduloCardápio(void) {
  char opção;
  do {
      opção = telaMenuCardápio();
      switch(opção) {
