#include<stdio.h>
#include<stdlib.h>
/*
Leia um valor e fa�a um programa que coloque o valor lido na primeira posi��o de um vetor N[10]. Em cada posi��o subsequente,
coloque o dobro do valor da posi��o anterior. Por exemplo, se o valor lido for 1,
os valores do vetor devem ser 1,2,4,8 e assim sucessivamente.Mostre o vetor em seguida.

Entrada
A entrada cont�m um valor inteiro (V<=50).

Sa�da
Para cada posi��o do vetor, escreva "N[i] = X", onde i � a posi��o do vetor e X � o valor armazenado na posi��o i.
O primeiro n�mero do vetor N (N[0]) ir� receber o valor de V.
*/
int main(){
	int vet[10], n, i;
	
	scanf("%d", &n);
	//printf("\n%d", vet[i]);
	for(i=0;i<10;i++){
		if(i==0){
			vet[i]= n;
			//printf("\n%d", vet[i]);
		}
		else{
			vet[i]= vet[i-1]*2;
			//printf("\n%d", vet[i]);
		}
	}
	
	for(i=0;i<10;i++){
		printf("N[%d] = %d\n", i, vet[i]);	
	}
	return 0;
}

