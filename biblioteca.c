#include <time.h>
#include <stdlib.h>



///////////////////////////////////////////////////////////////////////////////
/// Faz uma pausa por n segundos, com n sendo passado como parâmetro
///
void delay(int segundos) {
  int tempo = 1000 * segundos;
  clock_t inicio = clock();
  while (clock() < inicio + tempo) {
    // não faz nada, apenas gasta tempo
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Limpa a tela; funciona em Linux / MacOS / Windows
///
void limpaTela(void) {
  if (system("clear") || system("cls")) {
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se o caractere recebido for um dígito (entre 0 e 9)
/// retorna 0 caso contrário
///
int ehDigito(char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se o caractere recebido for uma alfabético 
/// (letra entre 'A' e 'Z' ou 'a' e 'z') ou retorna 0 caso contrário
///
int ehLetra(char c) {
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else {
    return 0;
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se ano for bissexto (divisível por 4, não divisível por ...
/// 100 ou divisível por 400) e retorna 0 caso contrário
///
int ehBissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1;
  } else if (aa % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se dia, mes e ano correspondem a uma data válida, inclusive
/// em anos bissextos, ou retorna 0 caso contrário
///
int ehData(int dd, int mm, int aa) {
  int maiorDia;
  if (aa < 0 || mm < 1 || mm > 12)
    return 0;
  if (mm == 2) {
    if (ehBissexto(aa)) 
      maiorDia = 29;
    else
      maiorDia = 28;
  } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    maiorDia = 30;
  } else
    maiorDia = 31;
  if (dd < 1 || dd > maiorDia)
    return 0;
  return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido for exclusivamente alfabético ou
/// retorna 0 caso contrário
///
int validarNome(char* nome) {
	return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a um número de CPF válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validarCPF(char* CPF) {
	return 1;
} 



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido for endereço de email válido ou
/// retorna 0 caso contrário
///
int validarEmail(char* email) {
	return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a uma data válida (apenas dígitos
/// e no formato: ddmmaaaa) ou retorna 0 caso contrário
///
int validarData(char* data) {
	return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a um número de celular válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validarcelular(char* celular) {
	return 1;
} 



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a um número da numeração válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validarNum(char* num) {
  int tam;
  tam = strlen(num);
  if (tam < 10 || tam > 11) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(num[i])) {
      return 0;
    }
  }
  return 1;
}
