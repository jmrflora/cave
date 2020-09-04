#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void incrementar (int n, int a);
void exibirVetor(int vet[],int n);
int manipularArquivo (int vet[],int n,int a);

int main(){
	
	int a,n;
	printf("Digite tamanho do vetor: ");
	scanf("%d",&n);
	printf("Digite amplitude: ");
	scanf("%d",&a);
	
	incrementar(n,a);
	return 0;
}

void incrementar (int n, int a){
	srand(time(NULL));
	int i,vetor[n];
	
	for(i=0;i<n;i++) {
		vetor[i] = rand()% a;
	}
	
	manipularArquivo(vetor,n,a);
	exibirVetor(vetor,n);	
}

void exibirVetor(int vet[],int n){
	int i;
	for(i=0;i<n;i++) {
		printf("%d\n",vet[i]);
	}
}
//Pesquisa sobre funcao limpa e funcao suja
//trocar o nome da funcao para fazer mais sentido
//colocar o nome do arq como uma var string - pedindo para o usuario e usar como parametro
int manipularArquivo (int vet[],int n, int a){
	//deixar no modelo que foi apresentado
	int i;
	FILE *arq; //Variavel Local
	arq = fopen ("vetor.dat","w");
	//pode nao conseguir criar o arquivo ai nesse caso ele retorna NULL
	fprintf(arq, "%d %d\n",n,a);
	for(i=0;i<n;i++) {
		fprintf(arq,"%d ",vet[i]);
	}
	fclose(arq);
}
