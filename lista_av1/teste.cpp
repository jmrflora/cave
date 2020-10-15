#include <stdio.h>
#include<stdlib.h>
/*
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média)
que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.
*/
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y,z,p=0,r=4;
    scanf("%s", &T);
    for(x=0;x<=11;x++){
        for(y=0; y<=11; y++){
        	scanf("%lf", &M[x][y]);
		}
            
    }
    for(z=1; z<=10;z++){
        if(z<=5){
            for(C=0; C<=p;C++){
            	a+=M[z][C];
            	p++;
			}
                
        }
        else if(z>=6){
        for(C=0; C<=r; C++){
        	a+=M[z][C];
        	r--;
		}
            
        }
    }
    if(T[0]=='S'){
    	printf("%.1lf\n",a);
	}
        
    else if(T[0]=='M'){
        a=a/30.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
