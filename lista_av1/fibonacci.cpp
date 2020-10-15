#include<stdio.h>
#include<stdlib.h>
/*
Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido.
Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele.
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

Entrada
A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste.
Cada caso de teste contém um único inteiro N (0 = N = 60), correspondente ao N-esimo termo da série de Fibonacci.

Saída
Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.
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
