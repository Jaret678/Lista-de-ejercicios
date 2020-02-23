#include<stdio.h>
#include<stdlib.h>

int main(){
	int a;
	printf("Ingrese un caracter: ");
	a=getchar();
	switch(a){
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		   printf("Es un numero");
		   break;
		default:
		   printf("Es una letra");
	}
}