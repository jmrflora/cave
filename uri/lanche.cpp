#include<stdio.h>
/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item.

A seguir, calcule e mostre o valor da conta a pagar.

codigo:
1 - 4
2 - 4.50
3 - 5
4 - 2
5 - 1.50
*/
int main(){
	int codigo, quant;
	float preco;
	
	scanf("%d %d", &codigo, &quant);
	
	switch (codigo){
		case 1:
			preco = 4.0 * quant;
			break;
		case 2:
			preco = 4.50 * quant;
			break;
		case 3:
			preco = 5.0 * quant;
			break;
		case 4:
			preco =  2.0 * quant;
			break;
		case 5:
			preco = 1.50 * quant;
			break;
	}
	
	printf("Total: R$ %.2f\n", preco);
	return 0;	
}
