#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c;
	
	printf("Introduzca el primer valor: ");
	scanf("%d",&a);
	printf("Introduzca el segundo valor: ");
	scanf("%d",&b);
	printf("Introduzca el tercer valor: ");
	scanf("%d",&c);
	if(a==3){
		if(b==9){
			if(c==5){
				printf("Acceso aceptado");
			}
			else{
		    	printf("Acceso denegado");
			}
		}
		else{
   		printf("Acceso denegado");
		}
	}
	else{
		printf("Acceso denegado");
	}
}