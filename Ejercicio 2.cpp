#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b;
	printf("Introduzca un numero: ");
	scanf("%d",&a);
	printf("\nIntroduzca otro numero: ");
	scanf("%d",&b);
	if(a%b==0){
		printf("El numero %d",a);
		printf(" es divisible entre %d",b);
	}
	else
		printf("No es divisible");
	
}