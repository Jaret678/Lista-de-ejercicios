#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c,d,e;
	printf("1.Calcular el area de un triangulo");
	printf("\n2.Calcular el area de un trapecio");
	printf("\n3.Calcular el area de un rectangulo");
	printf("\nIngrese una opcion: ");
	scanf("%d",&a);
	if(a==1){
		printf("\nIngrese la base del triangulo: ");
		scanf("%d",&b);
		printf("\nIngrese la altura del triangulo: ");
		scanf("%d",&c);
		e=b*c/2;
	}
	else if(a==2){
		printf("\nIngrese el lado a del trapecio: ");
		scanf("%d",&b);
		printf("\nIngrese el lado b del trapecio: ");
		scanf("%d",&c);
		printf("\nIngrese la altura: ");
		scanf("%d",&d);
		e=b*c/2*d;
	}
    else if(a==3){
		printf("\nIngrese la base del triangulo: ");
		scanf("%d",&b);
		printf("\nIngrese la altura del triangulo: ");
		scanf("%d",&c);
		e=b*c;
	}
	printf("\nEl area es %d",e);
}