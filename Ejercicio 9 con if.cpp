#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	printf("Introduzca un caracter: ");
	scanf("%d",&a);
	if(a>0){
		printf("\nEs un numero");
	}
	else{
		printf("\nEs una letra");
	}
}