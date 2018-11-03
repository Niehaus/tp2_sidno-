#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "registro.h"
#include "Funcoes.h"


int main(int argc, char const *argv[]) {

    int N; // N = tamanho do vetor a ser ordenado
    scanf("%d",&N);
    //Registro reg[N]; = alocaçao estatica
    // alocação dinamica dos registros

    Registro *reg = (Registro *) malloc(sizeof(Registro) * N);
    Registro_simples *reg_simples = (Registro_simples *) malloc(sizeof(Registro) * N);

    printf("Preencher registros\n");
    for (int i = 0; i < N; i++) {
      reg[i].chave = rand() % 100;
      printf("reg %d\n",reg[i].chave);
    }
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < 10; j++) {
        reg[i].cadeia[j][0] = 'a';
        printf("reg2 %c\n",reg[i].cadeia[j][0]);
      }
    }


  return 0;
}
