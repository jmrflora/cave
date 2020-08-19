#include <stdio.h>
 /*
 Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
 
 Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”,
 
caso haja uma divisão por 0 ou raiz de numero negativo.
 */
int main() {
	
 	double A, B, C, delta, r1, r2, Raiz_delta;
 	int i;
 	
    scanf("%lf %lf %lf", &A, &B, &C);
   
 	
 	delta = ( ((B)*(B)) -4*(A)*(C));
 	printf("%.5f\n", delta);
 	
 	//a = 2, b = 12 e c = –14  delta= 256
 	if((delta>= 0 && A!=0)){
 		printf("ola");
 		for(i=0;i<=delta;i++){
 			
 			if(((i)*(i)) == delta){
 				Raiz_delta= i;
 				i=delta + 1;
 				printf("Raiz_delta:%.5f\n", Raiz_delta);
			 }
		 }
		 
	
		 r1= (-(B) +Raiz_delta)/(2*(A));
		 r2= (-(B)-Raiz_delta)/(2*(A));
		 
 		printf("%.5f\n", delta);
 		printf("R1 = %.5f\n",r1);
 		printf("R2 = %.5f\n",r2);
	 }
	 else{
	 	printf("Impossivel calcular\n");
	 }
 	
 	
 	
    return 0;
}
