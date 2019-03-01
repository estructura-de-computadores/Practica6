#include <stdio.h>

void pares (int menor,int mayor)
{
	int result,resto;
	resto=menor%2;
	result = 0;
	if (resto == 0){
		for (result=mayor;result>=menor;result=result-2)
		{
			printf("Los numeros pares son: %d\n",result);
		}
	}
	else{
		for (result=mayor-1;result>=menor;result=result-2)
		{
			printf ("Los numeros pares son: %d\n",result);
		}
	}
}
int main ()
{
	int Num1,Num2;
	printf ("Escriba dos numeros, el primero debe ser menor que el segundo\n");
	printf ("Primer numero: \n");
	scanf ("%d",&Num1);
	printf ("Segundo numero: \n");
	scanf ("%d",&Num2);
	if (Num1<Num2){
		pares(Num1,Num2);
	}
	else{
	printf ("FATAL ERROR: Numbers are not valid\n");
	}
	return 0;
}
