#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Fa�a um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

Entrada
A entrada cont�m 10 valores inteiros, podendo ser positivos ou negativos.

Sa�da
Para cada posi��o do vetor, escreva "X[i] = x", onde i � a posi��o do vetor e x � o valor armazenado naquela posi��o.
*/
int main(){
	int vet[10], i;
	srand(time(NULL));
	//recebendo os valores aleatorios
	/*
	for(i=0;i<10;i++){
		vet[i]= ((rand() %20) -10);
	}
	*/
	for(i=0;i<10;i++){
		scanf("%d", &vet[i]);
	}
	/*
	for(i=0;i<10;i++){
		printf(" vet[%d]:%d ", i, vet[i]);
	}*/
	for(i=0;i<10;i++){
		if(vet[i]<1){
			vet[i]= 1;
		}
	}
	
	for(i=0;i<10;i++){
		//printf("vet[%d]:%d ", i, vet[i]);
		printf("X[%d] = %d\n", i, vet[i]);
	}
	
	return 0;
}
