#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Fa�a um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o �ltimo, o segundo elemento com o pen�ltimo, etc.,
at� trocar o 10� com o 11�. Mostre o vetor modificado.

Entrada
A entrada cont�m 20 valores inteiros, positivos ou negativos.

Sa�da
Para cada posi��o do vetor N, escreva "N[i] = Y", onde i � a posi��o do vetor e Y � o valor armazenado naquela posi��o.
*/
int main(){
	int vet[20], i, j, a;
	srand(time(NULL));
	/*
	for(i=0;i<20;i++){
		vet[i]= (rand() %10);
	}
	*/
	for(i=0;i<20;i++){
		scanf("%d", &vet[i]);
	}
	/*
	printf("\n");
	for(i=0;i<20;i++){
		printf("vet[%d]:%d\n", i, vet[i]);
	}
	*/
	for(i=0,j=19;i<10;i++,j--){
		a= vet[i];
		vet[i]= vet[j];
		vet[j]= a; 
	}
	//printf("\n");
	for(i=0;i<20;i++){
		//printf("vet[%d]:%d\n", i, vet[i]);
		printf("N[%d] = %d\n", i, vet[i]);
	}
	return 0;
}
