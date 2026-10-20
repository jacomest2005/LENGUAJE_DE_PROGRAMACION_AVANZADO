#include <stdio.h>
int main(){
	float c,f;
	printf("Ingrese los grados en Celsius: ");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("%.f °C equivale a %.2f °F\n",c,f);
}

