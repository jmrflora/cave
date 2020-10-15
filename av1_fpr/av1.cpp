#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
Construa um programa em C que tenha como entrada um conjunto de cinco inteiros:{Pmat,Plin,Phum,Pnat,Pred}
que são, respectivamente, os pesos das áreas de conhecimento Matemática, Linguagens,
Ciências Humanas, Ciências da Natureza e Redação para um determinado curso em uma
Universidade;
e um arquivo de dados alunos.dat que contém na primeira linha um inteiro n
que informa o número de linhas do arquivo e cada uma das demais linhas é composta por 1
inteiro e 5 floats (de 0 a 10) distribuídos da seguinte forma:

[código do aluno] [Nota Matemática] [Nota em Linguagem] [Nota Humanas] [Nota Natureza] [Nota Redação]

a) Leia os dados dos alunos do arquivo alunos.dat e armazene em estruturas que possuam
os seguintes campos: codigo, Nmat, Nlin, Nhum, Nnat, Nred e Media_P.

b) Calcule a média ponderada para cada um dos alunos utilizando 
os pesos {Pmat, Plin, Phum,
Pnat, Pred} e armazene no campo Media_P.

c) Apresente no monitor um relatório no seguinte modelo:
*/
void cabeca();
int main(){
	//declarar variaveis
	int Pmat,Plin,Phum,Pnat,Pred, cod, Qlinhas, i;//pesos, codigo do aluno e quant linhas
	float soma, soma_2, Npm, Npl, Nph, Npn, Npr;
	FILE *arq_entrada;
	typedef struct{
		int codigo;
		float Nmat, Nlin, Nhum, Nnat, Nred, media_p;//notas	
	}estrutura;
	
	//receber os pesos:
	printf("digite os pesos:\n");
	scanf("%d %d %d %d %d", &Pmat, &Plin, &Phum, &Pnat, &Pred);
	
	//abrindo arquivo de entrada para leitura
	arq_entrada= fopen("alunos.dat", "r");
	
	//ler arquivo
	fscanf(arq_entrada,"%d", &Qlinhas);
	
	estrutura notas_aluno[Qlinhas];
	
	//cabeçalho
	cabeca();
	
	for(i=0;i<Qlinhas;i++){
		fscanf(arq_entrada,"%d %f %f %f %f %f", &notas_aluno[i].codigo, &notas_aluno[i].Nmat, &notas_aluno[i].Nlin, &notas_aluno[i].Nhum, &notas_aluno[i].Nnat, &notas_aluno[i].Nred);
		//notas_aluno[i].media_p=((Pmat*notas_aluno[i].Nmat+Plin*notas_aluno[i].Nlin+Phum*notas_aluno[i].Nhum+Pnat*notas_aluno[i].Nnat+Pred*notas_aluno[i].Nred)/Pmat+Plin+Phum+Pnat+Pred);
		
		soma=Pmat*notas_aluno[i].Nmat+Plin*notas_aluno[i].Nlin+Phum*notas_aluno[i].Nhum+Pnat*notas_aluno[i].Nnat+Pred*notas_aluno[i].Nred;
		soma_2=Pmat+Plin+Phum+Pnat+Pred;
		notas_aluno[i].media_p=soma/soma_2;
		
		
		
	  //printf(" %7.2f%7.2f%7.2f%7.2f%7.2f%7.2f", a, b, c,d,e,f);printf("  |");printf(" %6.2f%6.2f%6.2f%6.2f%6.2f", a, b, c,d,e);printf("  |");
		printf(" %7d%7.2f%7.2f%7.2f%7.2f%7.2f", notas_aluno[i].codigo, notas_aluno[i].Nmat, notas_aluno[i].Nlin, notas_aluno[i].Nhum, notas_aluno[i].Nnat, notas_aluno[i].Nred);printf("  |");
		printf(" %6.2f %6.2f %6.2f %6.2f %6.2f", Npm=notas_aluno[i].Nmat*Pmat, Npl=notas_aluno[i].Nlin*Plin, Nph=notas_aluno[i].Nhum*Phum, Npn=notas_aluno[i].Nnat*Pnat, Npr=notas_aluno[i].Nred*Pred);printf("  |");
		if(notas_aluno[i].media_p>=6.0){
			printf(" %6.2f   AP\n", notas_aluno[i].media_p);
		}else{
			printf(" %6.2f   RP\n", notas_aluno[i].media_p);
		}
		
		/*printf("\nsoma:%f\n", soma);
		printf("\nsoma_2:%f\n", soma_2);*/
	}
	//debug
	printf("\n\n");
	for(i=0;i<Qlinhas;i++){
		printf("codigo:%d\n", notas_aluno[i].codigo);
		printf("Nota mat:%f\n", notas_aluno[i].Nmat);
		printf("Nota lin:%f\n", notas_aluno[i].Nlin);
		printf("Nota hum:%f\n", notas_aluno[i].Nhum);
		printf("Nota nat:%f\n", notas_aluno[i].Nnat);
		printf("Nota red:%f\n", notas_aluno[i].Nred);
		printf("media:%f\n", notas_aluno[i].media_p);
		printf("\n\n");
	}
	
	
	
	
	
	
	fclose(arq_entrada);
	return 0;
}
void cabeca(){
	
	printf("               Notas originais             ");printf("  |");printf("          Notas com peso           ");printf("  |\n");
	printf("_____________________________________________|");printf("_____________________________________|");printf("_________________________________\n");
	printf("  codigos   mat   lin     hum    nat    red  |");printf("   mat    lin    hum    nat    red   |");printf("  Media_P Situacao  \n");
	printf("_____________________________________________|");printf("_____________________________________|");printf("_________________________________\n");;
	
			  	
}

