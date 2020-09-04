#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//
void gera_vetor(int n, int a, int Vet[]);
void mostra_vetor(int Vet[], int n);
void grava_vetor(char nome_arquivo[], int Vet[], int n, int a);
int main(){
	int a,n;
	char nome_arquivo[60];
	printf("Digite tamanho do vetor: ");
	scanf("%d",&n);
	int Vet[n];
	printf("\nDigite amplitude: ");
	scanf("%d",&a);
	printf("\ndigite o nome do arquivo: ");
	scanf("%s", nome_arquivo);
	
	gera_vetor(n, a, Vet);
	mostra_vetor(Vet, n);
	grava_vetor(nome_arquivo, Vet, n, a);
	
	return 0;
}

void gera_vetor(int n, int a, int Vet[]){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
		Vet[i]= rand() % a;
	}
} 

void mostra_vetor(int Vet[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n", Vet[i]);
	}
}

 void grava_vetor(char nome_arquivo[], int Vet[], int n, int a){
	int i;
	FILE *arq; //criando a variável local do arquivo
	arq = fopen (nome_arquivo,"w");
	
	fprintf(arq, "%d %d\n",n,a);
	for(i=0;i<n;i++){
		fprintf(arq,"%d ", Vet[i]);
	}
	fclose(arq);
}
