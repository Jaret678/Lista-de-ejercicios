#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	printf("Introduzca un numero: ");
	scanf("%d", &a);
	if(a>100){
		printf("El numero es mayor a 100");
	}
	else{
		printf("El numero es menor a 100");
	}
}