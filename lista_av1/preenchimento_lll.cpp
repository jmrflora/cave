#include<stdio.h>
#include<stdlib.h>
/*
Leia um valor X. Coloque este valor na primeira posição de um vetor N[100].
Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior,
conforme o exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contem um valor de dupla precisão com 4 casas decimais.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.
Cada valor do vetor deve ser apresentado com 4 casas decimais.
*/
int main(){
	int i;
	double vet[100],x,a;
	scanf("%lf", &x);
	for(i=0;i<100;i++){
		if(i==0){
			vet[i]= x;
		}
		else{
			vet[i]= vet[i-1] / 2.0;
		}
		printf("N[%d] = %.4lf\n", i, vet[i]);
	}
	return 0;
}
