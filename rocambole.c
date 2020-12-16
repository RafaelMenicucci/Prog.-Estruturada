#include<stdio.h>
#include<stdlib.h>

void main(){
	// fixadores de linha e coluna para cada for
	int linf1 = 0, colf2, linf3, colf4 = 0;

	//variaveis de controle do primeiro for
	int lim_inf1, lim_sup1;

	//variaveis de controle do primeiro for
	int lim_inf2, lim_sup2;

	//variaveis de controle do primeiro for
	int lim_inf3, lim_sup3;

	//variaveis de controle do primeiro for
	int lim_inf4, lim_sup4;

	int n, m; //dimensoes

	int i;

	printf("Informe a quantidade de linhas: ");
	scanf("%d", &n);

	printf("Informe a quantidade de colunas: ");
	scanf("%d", &m);

	int mat[n][m];

	//leitura dos dados da matriz aqui

	colf2 = m-1;
	linf3 = n-1;
	
	lim_inf1 = 0; lim_sup1 = m - 1;
	lim_inf2 = 0; lim_sup2 = n - 1;
	lim_inf3 = m-1; lim_sup3 = 1;
	lim_inf4 = n-1; lim_sup4 = 1;

	//complete a condicao de parada
	while(){
		for(i = lim_inf1; i < lim_sup1; i++){
			printf("%d ", mat[linf1][i]);
		}

		for(i = lim_inf2; i < lim_sup2; i++){
			printf("%d ", mat[i][colf2]);
		}

		for(i = lim_inf3; i > lim_sup3; i--){
			printf("%d ", mat[linf3][i]);
		}

		for(i = lim_inf4; i > lim_sup4; i--){
			printf("%d ", mat[i][colf4]);
		}

		//manutencao das variaveis for1
		lim_inf1++; lim_sup1--;
		linf1++;

		//faca a manutencao das demais variaveis
		//para os outros lacos de repeticao
	}
	

}

