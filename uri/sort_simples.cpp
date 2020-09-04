#include <stdio.h>
/*
Leia 3 valores inteiros e ordene-os em ordem crescente.

No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.
*/
void direita(int v[5], int q;);

int main (){
	
	int Va[5], Vb[5], i, j, quant;
	
	//scanf("%d %d %d", &n1, &n2, &n3);
	// olha só josé do futuro, tu precisa percorrer a variável toda
	// por faor não esquece disso.
	//descobrir um jeito de passar por numeros repetidos
	
	
	for(i=0;i<5;i++){
		
		if(i == 0){
			scanf("%d", &Va[i]);
			Vb[i]=Va[i];
			
			
			/*
			printf("\n");
			for(j=0;j<=i;j++){
			printf("Va[%d] %d ", j, Va[j]);		
			}
			printf("\n");
			*/
		}
		else {
			scanf("%d", &Vb[i]);
			
			//tentar varrer do maior para o menor
			for(j=i-1,quant=0;j>=0;j--){
				if(Va[j] <= Vb[i]){
					//direita(Va, j, i); 
					//Va[j]=Vb[i];
					index=j;
					quant++;
				}
			}
			if(quant>0){
				direita(Va, index, i);
				Va[index]=Vb[i];
			}
			else if(){
				
			}
			else{
				Va[i]=Vb[i];
			}
		}
	}/*
	for(i=0;i<5;i++){
		printf("\n%d", Va[i]);		
	}*/
	return 0;
}

void direita(int v[10], int q, int k){
	int i;
	
	for(i=k;i>q;i--){
		v[i]=v[i-1];
		}
}
