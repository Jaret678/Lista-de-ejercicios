#include<stdio.h>
#include<stdlib.h>

int main(){
	int m,x,X,y,Y,a,b;
	printf("Calculo de la pendiente de una recta");
	printf("\nIngrese valor para la coordenada x1: ");
	scanf("%d",&x);
	printf("\nIngrese valor para la coordenada x2: ");
	scanf("%d",&X);
	printf("\nIngrese valor para la coordenada y1: ");
	scanf("%d",&y);
	printf("\nIngrese valor para la coordenada y2: ");
	scanf("%d",&Y);
	a=X-x;
	b=Y-y;
	if(a>0 or a<0){
		if(b>0 or b<0){
			m=b/a;
			printf("\nLa pendiente es: %d",m);
		}
		else{
			printf("\nLa recta es vertical");
		}
	}
	else{
		printf("\nLa recta es horizontal");
	}
}