#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct registro{
      int chave;
      char cadeia[10][200];
      int v[1];
      int reais[3];
}Registro;


int main(int argc, char const *argv[]) {

    int N; // N = tamanho do vetor a ser ordenado
    scanf("%d",&N);
    //Registro reg[N]; = alocaçao estatica
    // alocação dinamica;
    printf("Preencher vetor\n");
    Registro *reg = (Registro *) malloc(sizeof(Registro) * N);
    for (int i = 0; i < N; i++) {
      reg[i].chave = rand() % 100;
      printf("%d\n",reg[i].chave);
    }


  return 0;
}
