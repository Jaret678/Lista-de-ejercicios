#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b;
	printf("Introduzca un numero: ");
	scanf("%d",&a);
	printf("Introduzca otro numero: ");
	scanf("%d",&b);
	if(a>b){
		printf("%d",a);
		printf(" es mayor que %d",b);
	}
	else if(a<b){
		printf("%d",a);
		printf(" es menor que %d",b);
	}
	else{
		printf("Los numeros son iguales");
	}
}