#include "registro.h" // chamando as informação que esta em registro.h  que e a nossa tad 

int main(int argc, char const *argv[]) {


    int N,j,k; // N = tamanho do vetor a ser ordenado
    printf("-->");
    scanf("%d",&N);
    //Registro reg[N]; = alocaçao estatica
    //alocação dinamica;
    printf("Preencher vetor\n");
    Registro *reg = (Registro *) malloc(sizeof(Registro) * N);
    for (int i = 0; i < N; i++) {
      printf("chave %d:\n",i);
      reg[i].chave = rand() % 100;
      printf("%d\n",reg[i].chave);
       
      printf("vetor %d:\n",j);
      for(j=0;j<4;j++){
        reg[i].v[j]=(rand()%100)/1.5;        
        printf("%.2f\t",reg[i].v[j]);
        }
        printf("\n");
        printf("cadeia %d:\n",i);
        for(j=0;j<3;j++){    
            for(k=0;k<200;k++){
                reg[i].cadeia[j][k] ='A'+rand()%26;
            printf("%c\t",reg[i].cadeia[j][k]);
            }
        } 
        printf("\n");    
    }
  printf("ponteiro reg",reg);
  free(reg);
  return 0;
}
