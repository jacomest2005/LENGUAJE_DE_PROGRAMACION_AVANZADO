#include <stdio.h>
int main(){
	int nota;
	printf("Ingrese su nota: ");
	scanf("%d",&nota);
	switch(nota){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			printf ("DEFICIENTE\n");
			break;
		case 5:
		case 6:
			printf ("REGULAR\n");
			break;
		case 7:
		case 8:
			printf ("BUENO\n");
			break;
		case 9:
		case 10:
			printf ("EXCELENTE\n");
			break;
		default:
			printf("INGRESÓ MAL LA NOTA\n");
}
}
