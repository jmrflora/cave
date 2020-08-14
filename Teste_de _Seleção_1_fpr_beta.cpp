#include <stdio.h>
/*
Leia 4 valores inteiros A, B, C e D.
 A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D,
  ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".
*/
int main() {
 
 	int A, B, C, D;
 	
 	scanf("%d %d %d %d", &A, &B, &C, &D);
 	
 	if(A%2 == 0){
 		printf("A%2 = 0\n");
 		if(C>0 && D>0){
 			printf("c>0 && D> 0\n");
 			if((C + D)> (A + B)){
 				printf("(C + D)> (A + B)\n");
 				if(D > A){
 					printf("D > A\n");	
 					if(B > A){
 						printf("B > A");
					 }
				 }
			 }
		 }
	 }
 	
    return 0;
}
