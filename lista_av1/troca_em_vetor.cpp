#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc.,
até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.
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
