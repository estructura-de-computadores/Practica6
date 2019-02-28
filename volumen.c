#include <stdio.h>
#include <math.h>
#define pi 3.141592

void volumen_cono(float r,float h)
	{
	float total;
	total =pi*pow(r,2)*h*1/3 ;
	printf("\nEl volumen es %f\n\n",total);
	}
void volumen_ortoedro(float l1,float l2,float altura)
	{
	float total;
	total = l1*l2*altura;
	printf("\nEl volumen es %f\n\n",total);
	}
int main ()
{
	int opcion;
	float radio,altura_c,altura_o,lado1,lado2;
	do{
		printf("Seleccione una opcion:\n\n");
		printf("[1]:Volumen cono\n");
		printf("[2]:Volumen ortoedro\n");
		printf("[3]:Salir\n\n");

		scanf("%d",&opcion);

		if (opcion == 1){
			printf("Introduzca el radio de la base:\n");
			scanf("%f",&radio);
			printf("Introduzca la altura del cono:\n");
			scanf("%f",&altura_c);
			volumen_cono(radio,altura_c);
		}
		else{
			if (opcion == 2){
				printf("Introduzca un lado del ortoedro:\n");
				scanf("%f",&lado1);
				printf("Introduzca otro lado del ortoedro:\n");
				scanf("%f",&lado2);
				printf("Introduzca la altura del ortoedro:\n");
				scanf("%f",&altura_o);
				volumen_ortoedro(lado1,lado2,altura_o);
			}
			else{
				if(opcion == 3){
				}
				else{
					printf("\nFATAL ERROR: Number is not valid\n\n");
				}
			}
		}
	}
	while(opcion !=3);
	return 0;
}
