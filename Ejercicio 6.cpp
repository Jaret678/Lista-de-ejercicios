#include<stdio.h>
#include<stdlib.h>

int main(){
	int x,y;
	printf("Introduzca un valor a x: ");
	scanf("%d",&x);
	if(x<=0){
		y=x+3;
	}
	else{
		y=x*x+2*x;
	}
	printf("El resultado es %d",y);
}
