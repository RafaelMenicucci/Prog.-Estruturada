#include <stdio.h>

typedef struct endereco{
	char nome[30];
	int cep;
}end;

/*struct endereco{
	char nome[30];
	int cep;
};

void preencheCep(struct endereco *e){
	printf("Informe o cep: ");
	scanf("%d", &(e->cep));
}

int main(){
	struct endereco end_info;
	end_info.cep= 0;
	preencheCep(&end_info);
	printf("Cep: %d\n", end_info.cep);
	return(0);
}*/

void preencheCep(struct endereco *e){
	printf("Informe o cep: ");
	scanf("%d", &(e->cep));
}

int main(){
	end end_info;
	end_info.cep= 0;
	preencheCep(&end_info);
	printf("Cep: %d\n", end_info.cep);
	return(0);
}
