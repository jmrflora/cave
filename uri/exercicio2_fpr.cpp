#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
Exercício 2
Construir um programa em C que o usuário entre com:
Entrada:
n, inteiro [quantidade de elementos do vetor]
 
a, inteiro [amplitude do intervalo de elementos inteiros]

Gere duas matrizes Anxn e  Bnxn preenchidas com números inteiros escolhidos, aleatoriamente, no intervalo entre [0,a[.

Em seguida, construa uma matriz Cnxn =  Anxn + Bnxn e apresente as três matrizes. 
*/
int main (){
	int n, a, i, j;	
	srand(time(NULL));
	printf("insira o N e o A:\n");
	scanf("%d %d", &n, &a);
	
	int mat1[n][n], mat2[n][n], mat3[n][n];
	
	for (i=0;i<=n;i++){
		
		for(j=0;j<=n;j++){
			mat1[i][j] =rand() % a;
			//printf("mat1:%4d\n", mat1[i][j]);
			mat2[i][j] =rand() % a;
			//printf("mat2:%4d\n", mat2[i][j]);
			mat3[i][j] = mat1[i][j]+mat2[i][j];
			//printf("mat3:%4d\n", mat3[i][j]);
		}
	}
	
	
	for (i=0;i<=n;i++){
		
		for(j=0;j<=n;j++){
			printf("%4d", mat1[i][j]);
		}
		printf("\n");
	}	printf("\n");
	for (i=0;i<=n;i++){
		
		for(j=0;j<=n;j++){
			printf("%4d", mat2[i][j]);
		}
		printf("\n");
	}	printf("\n");

	for (i=0;i<=n;i++){
		
		for(j=0;j<=n;j++){
			printf("%4d", mat3[i][j]);
		}
		printf("\n");
	}	printf("\n");
	
	return 0;
}
