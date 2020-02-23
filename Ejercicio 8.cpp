#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c;
	printf("Introduzca el primer numero: ");
	scanf("%d",&a);
	printf("Introduzca el segundo numero: ");
	scanf("%d",&b);
	printf("Introduzca el tercer numero: ");
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			if(b<c){
				printf("El orden es %d, %d, %d \n",a,b,c);
			}
			else{
				printf(" El orden es %d, %d, %d \n",a,c,b);
			}
		}
	}
	else{
		if(b<c){
			if(a<c){
				printf(" El orden es %d, %d, %d \n",b,a,c);
			}
			else{
				printf(" El orden es %d, %d, %d \n",b,c,a);
			}
		}
	}
}
		
