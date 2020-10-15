#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/*
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima da diagonal principal da matriz,
conforme ilustrado abaixo (área verde).
*/
int main(){
	float mat[12][12], n=0, soma, media;
	int i, j, c;
	char t;
	srand(time(NULL));
	
	scanf("%c", &t);
	
	/*
	for(i=0;i<12;i++){
		
		for(j=0;j<12;j++){
			mat[i][j]= rand() %10;
		}
	}
	*/
	
	for(i=0;i<12;i++){
		
		for(j=0;j<12;j++){
			scanf("%f", &mat[i][j]);
		}
	}
	
	/*
	for(i=0;i<12;i++){
		
		for(j=0;j<12;j++){
			printf("mat[%d][%d]=%.2f ", i, j, mat[i][j]);
			//printf("%.2f ", mat[i][j]);
		}
		printf("\n");
	}
	*/
	if(t=='S'){
		for(i=0, soma=0;i<11;i++){
			
			for(j=i+1;j<12;j++){
				soma = soma + mat[i][j];
			}
		}
		printf("%.1f\n", soma);
	}
	else
	if(t=='M'){
		for(i=0, soma=0;i<11;i++){
			
			for(j=i+1;j<12;j++){
				soma = soma + mat[i][j];
				n++;
			}
		}
		media = (soma/n);
		printf("%.1f\n", media);
	}
	
	
	return 0;
}
