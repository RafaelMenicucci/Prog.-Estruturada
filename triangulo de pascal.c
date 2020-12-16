#include <stdio.h>
void main() {
	int linha, contLinhas = 0, indice, n1, n2;
	printf("Informe a linha limite para a impressao: ");
	scanf("%d", &linha); printf("\n");
	int vet[linha];
	vet[0] = 1;
	for(indice = 1; indice < linha; indice++)
		vet[indice] = 0;
	do{
		//imprimindo a linha atual
		printf("%6d ", vet[0]);
		for(indice = 1;indice <= contLinhas; indice++){
			printf("%6d ", vet[indice-1] + vet[indice]);
		}
		printf("\n");
		
		contLinhas++;
		n1 = 1;
		//calculando a proxima linha
		for(indice = 1; indice < contLinhas; indice++){
			n2 = vet[indice];
			vet[indice] = n1 + n2;
			n1 = n2;
		}
	}while(contLinhas < linha);
}

