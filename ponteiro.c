#include <stdio.h>
#include <stdlib.h>

void main() {

	int i, j;
	double ** m;

m = malloc(1000 * sizeof(double *));

for (i=0;i<1000;i++){
	m[i] = malloc(1000 * sizeof(double));
}

for (i=0;i<1000;i++){
	for (j=0;j<1000;j++){
		m[i][j]= i*j;
	}
}

for (i=0;i<1000;i++){
	free(m[i]);
}

free(m);

}
