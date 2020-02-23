#include<stdio.h>
#include<stdlib.h>

int main(){
	int e,p;
	printf("CINE\n");
	printf("Boletos\nEntrada normal: 75 pesos");
	printf("\nNiños: descuento del 60%");
	printf("\nAdultos mayores de 60 años: descuento del 55%");
	printf("\nIntroduzca su edad: ");
	scanf("%d",&e);
	if(e>=11 and e<60){
		p=75;
	}
	else if(e<11){
		p=30;
	}
	else if(e>59){
		p=34;
	}
	printf("\nPrecio: %d",p);
}