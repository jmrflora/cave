#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Fa�a um programa que leia um vetor A[100]. No final, mostre todas as posi��es do vetor que armazenam um valor menor ou igual a 10
e o valor armazenado em cada uma das posi��es.

Entrada
A entrada cont�m 100 valores, podendo ser inteiros, reais, positivos ou negativos.

Sa�da
Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", onde i � a posi��o do vetor e x � o valor armazenado na posi��o,
com uma casa ap�s o ponto decimal.
*/
int main(){
	int i;
	float vet[100];
	srand(time(NULL));
	
	/*
	for(i=0;i<10;i++){
		vet[i]= (rand() %200) - 100.0;
	}*/
	
	/*
	printf("\n");
	for(i=0;i<10;i++){
		printf(" vet[%d]: %.1f ", i, vet[i]);	
	}
	printf("\n");
	*/
	for(i=0;i<100;i++){
		scanf("%f", &vet[i]);	
	}
	
	for(i=0;i<100;i++){
		
		if(vet[i]<=10){
			printf("A[%d] = %.1f\n", i, vet[i]);
		}
	}
	return 0;
}
