#include <stdio.h>
int main(){
	float sb, ds, sn, por;
	printf("Ingrese el salario bruto del empleado: ");
	scanf("%f",&sb);
	printf("Ingrese el porcentaje de descuento al salario bruto del empleado: ");
	scanf("%f",&por);
	ds=sb*(por/100);
	sn=sb-ds;
	printf("El salario neto del empleado es: %.2f\n",sn);
}
