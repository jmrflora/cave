#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/*
Neste problema você deve ler um número que indica uma coluna de uma matriz na qual uma operação deve ser realizada,
um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso.
A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz,
demonstrando os elementos que deverão ser considerados na operação.
*/
int main(){
	float mat[12][12], n, soma, media;
	int i, j, c;
	char t;
	srand(time(NULL));
	
	scanf("%d", &c);
	scanf(" %c", &t);
	
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
		for(i=0,soma=0;i<12;i++){
			soma= soma + mat[i][c];
		}	
		printf("%.1f\n", soma);
	}
	else
	if(t=='M'){
		for(i=0,soma=0;i<12;i++){
			soma= soma + mat[i][c]; 
		}
		media = (soma/12);
		printf("%.1f\n", media);
	}
	
	
	return 0;
}
