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
      printf("chave %d:\n -->",i);
      reg[i].chave = rand() % 100;
      printf("%d\n",reg[i].chave);
       
      printf("vetor %d:\n -->",j);
      for(j=0;j<4;j++){
        reg[i].v[j]=(rand()%100)/1.5;        
        printf("%.2f\t",reg[i].v[j]);
        }
        printf("\n");
        printf("cadeia %d:\n -->\n ",i);
        for(j=0;j<3;j++){    
            for(k=0;k<10;k++){
                reg[i].cadeia[j][k] ='A'+rand()%26;
                printf("%d\t",reg[i].cadeia[j][k]);
            }
            printf("\n");
        } 
        printf("\n");    
    }

//   //  //tentando alocar matriz e preencher ela 
//   //   Registro **regi = (Registro **)malloc(j * sizeof(Registro *));
//   //   for (j=0; j<10; j++){
//   //     regi[j] = (Registro *) malloc(k * sizeof(Registro));
//   //     for(k=0; k<200; k++){
//   //       regi[k]->cadeia = rand() % 100;
//   //       printf("%c%c\n",regi[j][k].cadeia);
//   //     }
//   //   }
//  */
//     int i,j,k;
//     Registro *reg=(Registro *) malloc(N* sizeof(Registro));
//     for(i=0;i<N;i++){
//         reg[i].chave=rand()%1000;
//         for(j=0;j<4;j++){
//             reg[i].v[j]=(rand()%100)/1.5;
//         }
//         for(j=0;j<3;j++){
//             for(k=0;k<10;k++){
//                 reg[i].cadeia[j][k] ='A'+rand()%26;
//             }
//         }
//     }
//     printf("VETOR NAO ORDENADO:\n");
//     for(i=0;i<N;i++){
//         printf("chave: %d\n",reg[i].chave);
//         // for(j=0;j<4;j++){
//         //     printf("vetor V: %.2f\t",reg[i].v[j]);
//         // }
//         // for(j=0;j<3;j++){
//         //     for(k=0;k<10;k++){
//         //         printf("CADEIA DE STRING: %d",reg[i].cadeia[j][k]);
//         //     }
//         // }
//     }
  printf("%d\n",reg);
  free(reg);
  printf("%d\n",reg); 
  return 0;
}
