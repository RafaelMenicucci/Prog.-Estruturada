#include <stdio.h>

void main() {

	int npj, ntp, x, i, nempates, pont;

	printf("Digite o número de partidas jogadas: ");
	scanf("%d", &npj);

	printf("Digite o número de times participantes: ");
	scanf("%d", &ntp);

	for(i=0;i<ntp;i++){	
		printf("Digite a pontuação de cada time até o momento: ");
		scanf("%d", &x);
		pont=pont+x;
	}

	
	nempates=((npj*3)-pont);

	printf("O número de empates é:%d\n", nempates);
	
}
