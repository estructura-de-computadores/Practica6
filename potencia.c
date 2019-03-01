#include <stdio.h>
#include <math.h>

int potencia(int base, int exponente)
{
	int total;
	total = pow(base,exponente);
	return total;
}
int main ()
{
	int b,e,total;
	printf ("Escriba dos numeros\n");
	printf ("Primer numero: \n");
	scanf ("%d",&b);
	printf ("Segundo numero: \n");
	scanf ("%d",&e);
	if (b>0&&e>0){
		total=potencia(b,e);
		printf ("El resultado es: %d\n",total);
	}
	else{
		printf ("FATAL ERROR: Numbers not valid\n");
	}
	return 0;
}
