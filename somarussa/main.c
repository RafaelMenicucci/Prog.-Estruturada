#include <stdio.h>
#include <stdlib.h>

void main() {
    int n1,n2,i;

    i=0;
    printf("Digite o número que deseja multiplicar: ");
    scanf("%d", &n1);

    printf("Digite o outro número que deseja multiplicar: ");
    scanf("%d", &n2);

    while (n1>=1) {
        if (n1 % 2 == 1) {
                i=n2+i;
        }
        n1=n1/2;
        n2=n2*2;
    }
    printf("A multiplicação deu:%d", i);
}
