#include<stdio.h>
#include<stdlib.h>
/*
Leia um valor X. Coloque este valor na primeira posi��o de um vetor N[100].
Em cada posi��o subsequente de N (1 at� 99), coloque a metade do valor armazenado na posi��o anterior,
conforme o exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contem um valor de dupla precis�o com 4 casas decimais.

Sa�da
Para cada posi��o do vetor N, escreva "N[i] = Y", onde i � a posi��o do vetor e Y � o valor armazenado naquela posi��o.
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
