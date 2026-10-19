#include <stdio.h>
int main(){
	int num;
	int num2;
	printf("Ingrese el primer numero: ");
	scanf("%d",&num);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&num2);
	printf("Suma: %d\n",num+num2);
	printf("Resta: %d\n", num-num2);
	printf("Multiplicación: %d\n", num*num2);
	if (num2 !=0){
		printf("División: %.2f\n ", (float)num/num2);
		printf("Módulo: %d\n",num%num2);
}
	else {
		printf("NO SE PUEDE DIVIDIR ENTRE 0");
}
}
