#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2);
int multiplica(int num1, int num2);

int multiplica(int num1, int num2){
	int i, m = 0;
	
	for(i = 0; i < num1; i++){
		m = soma(m, num2);
	}
	
	return m;
}

int soma(int num1, int num2){
	return(num1 + num2);
}

int main(int argc, char** argv) {
	int n1, n2, op;
	printf("Informe n1: ");
	scanf("%d", &n1);
	printf("Informe n2: ");
	scanf("%d", &n2);
	printf("Informe a opcao (1 - soma, 2 - multiplicacao): ");
	scanf("%d", &op);
	if(op == 1)printf("A soma vale: %d\n", soma(n1, n2));
	else if(op == 2)printf("A multiplicacao vale: %d\n", multiplica(n1, n2));
	else("Opcao invalida!\n");
	
	return (EXIT_SUCCESS);
}


