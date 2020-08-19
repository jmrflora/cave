#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n, a, i;
	
	srand(time(NULL));

	printf("digite um numero inteiro n:");
	scanf("%d", &n);
	
	int vet[n];
	
	printf("\ndigite agora um inteiro a:");
	scanf("%d", &a);
	
	for(i=0;i<n;i++){
		vet[i]= rand()%a;
	}
	
	printf("\n");
	printf("vetor:");
	for(i=0;i<n;i++){
	printf("%d ",vet[i]);
	}
   return 0;
}

