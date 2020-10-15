#include<stdio.h>
#include<stdlib.h>
/*
Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes,
conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contém um valor inteiro T (2 = T = 50).

Saída
Para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.
*/
int main(){
	int i, j, t, vet[1000];
	
	scanf("%d", &t);
	for(i=0,j=0;i<1000;i++,j++){
		if(j>=t){
			j=0;
		}
		vet[i]= j;
		printf("N[%d] = %d\n", i, vet[i]);
	}
	return 0;
}
