#include <stdio.h>
int main(){
	int n,i=1;
	float num, sum=0, p;
	printf("¿Cuántos números desea ingresar?: ");
	scanf("%d", &n);
	while (i<=n){
		printf("Número %d: ",i);
		scanf("%f",&num);
		sum+=num;
		i++;
}
	p=sum/n;
	printf("Suma: %.2f\n",sum);
	printf("Promedio: %.2f\n",p);
}
