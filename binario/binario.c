#include <stdio.h>

void main() {

	int n, b, i;
	b=0;
	n=0;
	printf("Digite um número em decimal: ");
	scanf("%d", &n);
	
	i=1;
	while (n!=0) {
		if(n%2==1) {
			b=b+i;
			
		}
		i=i*10;
		n=n/2;
	}
	
	printf("O número binário dele é:%d\n", b);

				
}
