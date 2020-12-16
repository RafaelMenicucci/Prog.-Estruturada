#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main() {
	
	int i, k, l;
	char s1[50];
	l=0;
	printf("Digite uma frase: ");
	fgets(s1,50,stdin);

	k=strlen(s1);
	k=k-2;

	for(i=0;i<k;i++) {
		if(("%d",s1[i])<91) {       
			s1[i] = s1[i]+32;  
		}
	}	

	
	for(i=0;i<k;i++){ 
		if(s1[i]==' ') {
			i=i+1;
		}
		if(s1[k]==' '){
			k=k-1;
		}
		if(s1[i]==s1[k]){
			l=0;	
		}else{
			l=1;
			k=0;
		}
		k--;
	}
	
	
	if(l==0){
		printf("Está frase é um palindromo\n");
	}else{
		printf("está frase não é um palindromo\n");
	}
	

}
