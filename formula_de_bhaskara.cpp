#include <stdio.h>
 /*
 Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
 
 Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”,
 
caso haja uma divisão por 0 ou raiz de numero negativo.
 */
int main() {
	
 	double A, B, C, delta, r1, r2;
 	int i;
 	
    scanf("%lf %lf %lf", &A, &B, &C);
   
 	
 	delta = ( ((B)*(B)) -4*(A)*(C));
 	
 	//a = 2, b = 12 e c = –14  delta= 256
 	if((delta>= 0 && A!==0)){
 		
	 }
 	
 	
 	printf("%.5f", delta);
 	
    return 0;
}
