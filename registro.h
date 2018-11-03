#ifndef REGISTRO_H
#define REGISTRO_H
#include <math.h>

typedef struct registro{
	int chave;
	char cadeia[10][200];
	int v[1];
	int reais[3];
}Registro;

typedef struct registro_simples{
		int chave;
}Registro_simples;

#endif
