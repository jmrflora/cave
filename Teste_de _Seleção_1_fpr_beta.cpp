#include <stdio.h>
/*
Leia 4 valores inteiros A, B, C e D.
 A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D,
  ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".
*/
int main() {
 
 	int A, B, C, D;
 	
 	scanf("%d %d %d %d", &A, &B, &C, &D);
 	
 	if((A%2 == 0) && (C>0 && D>0) && ((C + D)> (A + B)) && (D > A) && (B > C)){
 		printf("valores aceitos");
	 }
	 else {
	 	printf("valores nao aceitos");
	 }
 
    return 0;
}
