#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Neste problema voc� deve ler um n�mero, indicando uma linha da matriz na qual uma opera��o deve ser realizada,
um caractere mai�sculo, indicando a opera��o que ser� realizada, e todos os elementos de uma matriz M[12][12].
Em seguida, calcule e mostre a soma ou a m�dia dos elementos que est�o na �rea verde da matriz, conforme for o caso.
A imagem abaixo ilustra o caso da entrada do valor 2 para a linha da matriz, demonstrando os elementos que dever�o ser considerados na opera��o.
*/
int main(){
	float mat[12][12], n, soma, media;
	int i, j, l;
	char t;
	srand(time(NULL));
	
	scanf("%d", &l);
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
			soma= soma + mat[l][i];
		}	
		printf("%.1f\n", soma);
	}
	else
	if(t=='M'){
		for(i=0,soma=0;i<12;i++){
			soma= soma + mat[l][i]; 
		}
		media = (soma/12);
		printf("%.1f\n", media);
	}
	
	
	return 0;
}
