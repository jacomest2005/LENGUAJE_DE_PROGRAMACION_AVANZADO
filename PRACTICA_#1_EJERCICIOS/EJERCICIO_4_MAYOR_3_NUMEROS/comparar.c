#include <stdio.h>
int main(){
	int n;
	int n1;
	int n2;
	printf("INGRESE PRIMER NÚMERO: ");
	scanf("%d",&n);
	printf("INGRESE SEGUNDO NÚMERO: ");
	scanf("%d",&n1);
	printf("INGRESE TERCER NÚMERO: ");
	scanf("%d",&n2);
	if (n>=n1 && n>=n2){
		printf("EL NUMERO MAYOR ES: %d\n",n);
}
	else if (n1>=n && n1>=n2){
		printf("EL NUMERO MAYOR ES: %d\n",n1);
}
	else {
		printf("EL NUMERO MAYOR ES: %d\n",n2);
}
}
