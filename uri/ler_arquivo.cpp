#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ler_arquivo();
void mostra_vetor(int Vet[], int n, int a);
int main(){
	//criar o n aqui
    ler_arquivo();
	return 0;
}

void ler_arquivo(){
	int i, n, a;
	FILE *arq;
	arq = fopen("arquivo_3.dat", "r");
	fscanf(arq, "%d %d", &n, &a);
	int Vet[n];
	for(i=0;i<n;i++){
		fscanf(arq,"%d ", &Vet[i]);//n�o esquecer de usar o & no vet
	}
	fclose(arq);
	//printf("ola mundo");
	mostra_vetor(Vet, n, a);
}
void mostra_vetor(int Vet[], int n, int a){
	int i;
	printf("tamando do vetor: %d", n);
	printf("\namplitude: %d\n", a);
	for(i=0;i<n;i++){
		printf("%d ", Vet[i]);
	}
}
