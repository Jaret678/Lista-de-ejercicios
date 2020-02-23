#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	printf("Introduzca un valor: ");
	scanf("%d",&a);
	if(a%2==0){
		printf("El numero es par");
	}
	else{
		printf("El numero es impar");
	    if(a%3==3){
		printf("\nEl numero es divisible entre 3");
		}
		else{
			printf("\nEl numero no es divisible entre 3");
	}
}
}
	