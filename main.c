#include "registro.h" // chamando as informação que esta em registro.h  que e a nossa tad 

int main(int argc, char const *argv[]) {
int i,j,x,y,z; //vareaveis
//----------------------------------------------------------------------------------------------------------
//ARQUIVO
FILE *arq;

arq=fopen("entrada.txt","w");
if(arq== NULL){
  printf("ERRO AO ABRIR O ARQUIVO");
  return 1;
}

//preenche os vetores: 
  
    int N,k; // N = tamanho do vetor a ser ordenado
    printf("DIGITE QUANTAS VEZES DESEJA PREENCHER O VETOR:\n-->");
    scanf("%d",&N);
    //Registro reg[N]; = alocaçao estatica
    //alocação dinamica;
    printf("Preencher vetor\n");
    Registro *reg = (Registro *) malloc(sizeof(Registro) * N);
    for (int i = 0; i < N; i++) {
      printf("chave %d:\n",i);
      fprintf(arq,"chave %d:\n",i);
      reg[i].chave = rand() % 100;
      fprintf(arq,"%d\n",reg[i].chave);
      printf("%d\n",reg[i].chave);
       
      printf("vetor %d:\n",j);
      fprintf(arq,"Vetor %d:\n",j);
      for(j=0;j<4;j++){
        reg[i].v[j]=(rand()%100)/1.5;
        fprintf(arq,"%.2f\t",reg[i].v[j]);        
        printf("%.2f\t",reg[i].v[j]);
        }
        printf("\n");
        printf("cadeia %d:\n",i);
        fprintf(arq,"cadeia %d:\n",i);
        for(j=0;j<3;j++){    
            for(k=0;k<200;k++){
                reg[i].cadeia[j][k] ='A'+rand()%26;
                fprintf(arq,"%c\t",reg[i].cadeia[j][k]);
                printf("%c\t",reg[i].cadeia[j][k]);
            }
        } 
        printf("\n");    
    }
  fclose(arq);
  printf("%d\n",reg);
  free(reg);
  
//---------------------------------------------------------------------------------------------------
  //loop para a função quick
  /*while(x=0, x <=5, x++){
      //chama função quick
      //armazena a media no arquivo 
    }*/
  return 0;
}

