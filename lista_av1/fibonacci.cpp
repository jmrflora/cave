#include<stdio.h>
#include<stdlib.h>
/*
Fa�a um programa que leia um valor e apresente o n�mero de Fibonacci correspondente a este valor lido.
Lembre que os 2 primeiros elementos da s�rie de Fibonacci s�o 0 e 1 e cada pr�ximo termo � a soma dos 2 anteriores a ele.
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

Entrada
A primeira linha da entrada cont�m um inteiro T, indicando o n�mero de casos de teste.
Cada caso de teste cont�m um �nico inteiro N (0 = N = 60), correspondente ao N-esimo termo da s�rie de Fibonacci.

Sa�da
Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X � o N-�simo termo da s�rie de Fibonacci.
*/
int main(){
	int i, t, j;
	long long int n, atual, primeiro, segundo;
	
	scanf("%d", &t);
	for(i=0;i<t;i++){
		
		scanf("%lld", &n);
		j=0;
		primeiro=0;
		segundo=1;
		do{
			if(j<=1){
				atual=j;
			}
			else{
				atual= primeiro + segundo;
				primeiro = segundo;
				segundo = atual;
			}
			j++;
		}while(j<=n);
		
		printf("Fib(%lld) = %lld\n", n, atual);
	}
	
	return 0;
}
