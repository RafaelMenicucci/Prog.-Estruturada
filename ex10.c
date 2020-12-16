#include <stdio.h>
#include <stdlib.h>

void ** desaloca(int **m, int linhas){
}

void leDimensoes(int *lin1, int *col1, int *col2){
	printf("Qual tamanho de linhas da primeira matriz?");
	scanf ("%d", lin1);
	printf("Qual tamanho de colunas da primeira matriz?");
	scanf ("%d", col1);
	printf("Qual tamanho de colunas da segunda matriz?");
	scanf ("%d", col2);
}

int ** alocaMatriz(int lin, int col){
	int **m1, i;
	m1 = malloc(lin * sizeof(int *));
	for (i=0;i<lin;i++){
		m1[i] = malloc(col * sizeof(int));
	}
	return(m1);
}

int ** multiplicaMatrizes(int **m1, int **m2, int lin1, int col1, int col2){
	
	int i, mult, j, k, **m3;
		
	m3= alocaMatriz(lin1, col2);

	for(i=0;i<lin1;i++){
		for(j=0;j<col2;j++){
			mult=0;
			for(k=0;k<col1;k++){
				mult=mult+m1[i][k]*m2[k][j];
			}
			m3[i][j]=mult;
		}
	}
	return(m3);		
}

int imprimeMatriz(int **r, int lin1, int col2){
}

int main () {
	int linhas1, colunas1, colunas2;
	int ** m1;
	int ** m2;
	int ** r;

	leDimensoes(&linhas1, &colunas1, &colunas2);

	m1 = alocaMatriz(linhas1, colunas1);
	m2 = alocaMatriz(colunas1, colunas2);

	r = multiplicaMatrizes(m1, m2, linhas1, colunas1, colunas2);

	imprimeMatriz(r, linhas1, colunas2);

	desaloca(m1, linhas1);
	desaloca(m2, colunas1);
	desaloca(r, linhas1);

	return (0);
}

