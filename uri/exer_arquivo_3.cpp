#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*

*/
void cria_arquivo(char nome_arquivo[], int q, int n, int a);
void gera_vetor(int n, int a, char nome_arquivo[]);
void grava_vetor(int n, int vet[], char nome_arquivo[]);

int main(){
	int q, a, n, i;
	srand (time(NULL));
	char nome_arquivo[60];
	printf("digite a quantidade de vetores:");
	scanf("%d", &q);
	printf("\nDigite o tamanho do vetor:");
	scanf("%d", &n);
	//int vet[n];
	printf("\nDigite a amplitude do vetor:");
	scanf("%d", &a);
	printf("\ndigite o nome do arquivo:");
	scanf("%s", nome_arquivo);
	
	printf("%d %d %d", q, n, a);
	
	cria_arquivo(nome_arquivo, q, n, a);
	for(i=0;i<q;i++){
		gera_vetor(n, a, nome_arquivo);	
	}	
	return 0;
}

void cria_arquivo(char nome_arquivo[], int q, int n, int a){
	FILE *arq;
	arq = fopen (nome_arquivo,"w");
	printf("\nola");
	fprintf(arq,"%d %d %d", q, n, a);
	fprintf(arq,"\n");
	fclose(arq);
}

void gera_vetor(int n, int a, char nome_arquivo[]){
	//srand (time(NULL));
	int i, vet[n];
	for(i=0;i<n;i++){
		vet[i]= rand() % a;
		printf(" %d,", vet[i]);
	}
	
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ", vet[i]);
	}
	printf("\n");
	
	printf("\nola2");
	grava_vetor(n, vet, nome_arquivo);
	
}
void grava_vetor(int n, int vet[], char nome_arquivo[]){
	int i;
	FILE *arq;
	arq = fopen (nome_arquivo,"a");
	printf("\nola3");
	for(i=0;i<n;i++){
		fprintf(arq,"%5d ", vet[i]);
	}
	fprintf(arq,"\n");
	fclose(arq);
}



