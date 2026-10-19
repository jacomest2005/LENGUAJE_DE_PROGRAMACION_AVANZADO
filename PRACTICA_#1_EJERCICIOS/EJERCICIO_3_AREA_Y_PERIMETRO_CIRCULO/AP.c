#include <stdio.h>
int main(){
	float pi=3.14159;
	float r;
	printf("INGRESE EL RADIO DEL CIRCULO: ");
	scanf("%f",&r);
	printf("ÁREA DEL CIRCULO: %.2f\n", pi*r*r);
	printf("PERÍMETRO DEL CIRCULO: %.2f\n", 2*pi*r);
}

