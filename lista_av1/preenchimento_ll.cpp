#include<stdio.h>
#include<stdlib.h>
/*
Fa�a um programa que leia um valor T e preencha um vetor N[1000] com a sequ�ncia de valores de 0 at� T-1 repetidas vezes,
conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada cont�m um valor inteiro T (2 = T = 50).

Sa�da
Para cada posi��o do vetor, escreva "N[i] = x", onde i � a posi��o do vetor e x � o valor armazenado naquela posi��o.
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
