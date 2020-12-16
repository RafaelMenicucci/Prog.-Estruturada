#include <stdio.h>
#include <stdlib.h>

void main() {

	int lin1,col1,col2,i,j,k;

	printf("Informe as linhas de M1: ");
	scanf("%d", &lin1); printf("\n");

	printf("Informe as colunas de M1: ");
	scanf("%d", &col1); printf("\n");

	printf("Informe as colunas de M2: ");
	scanf("%d", &col2); printf("\n");

	int m1[lin1][col1], m2[col1][col2], m3[lin1][col2];

	for (i=0;i<lin1;i++) {
		for(j=0;j<col1;j++) {
			printf("Informe pos %d, %d:", i, j);
			scanf("%d", &m1[i][j]);
			printf("\n");
		}
	}
	
	for (i=0;i<col1;i++) {
		for(j=0;j<col2;j++) {
			printf("Informe pos %d, %d:", i, j);
			scanf("%d", &m2[i][j]);
			printf("\n");
		}
	}

	for(i=0;i<lin1;i++) {
		for(j=0;j<col2;j++) {
			m3[i][j]=0;
			for(k=0;k<lin1;k++) {
				m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
			}
			printf("Matriz resultante %d, %d: %d\n", i, j, m3[i][j]);
		}
	}
}	
