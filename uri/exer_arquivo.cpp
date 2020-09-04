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
void criar_vetor(int v, int n, int a);
void criar_arquivo(int v,int n, int a);
void printar_vetor(int v, int n);
int main (){
	int n, a;	
	
	printf("insira o N e o A:\n");
	scanf("%d %d", &n, &a);	
	int v[n];
	
	criar_vetor(v, n, a);
	criar_arquivo(v, n, a);
	printar_vetor(v, n);
	return 0;
}
void criar_vetor(int v, int n, int a){
	srand(time(NULL));
	int i;
	for(i=0;i<n;i++){
		v[i]=rand() % a;
	}
}

void criar_arquivo(int v,int n, int a){
	FILE *arq;
	int i;
	arq= fopen("arquivo.dat", "w");
	fprintf(arq,"%d %d\n",n, a);
	for(i=0;i<n;i++){
		fprintf(arq,"%d ",vet[i]);
	}
	fclose(arq);
}
void printar_vetor(int v, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d")
	}
}
