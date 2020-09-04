#include<stdio.h>
/*
aulinha de estrutura de repetição 
*/
int main(){
	int i, j, a;
	
	/*
	for(i=0;i < 5;i++){
		printf("%.1f\n", i);
	}
	printf("print fora:%.1f", i);
	*/
	scanf("%d", &i);
	
	switch(i){
		case 1:
			printf("\n1");
			break;
		case 2:
			printf("\n2");
			break;
		default:
			printf("\nta errado palhaco");
			break;
	}
	
	
	return 0;
}
