//PRograma que solicite un numero y diga que dia de la semana es 
#include <stdio.h>
int main ()
{
	int dia=0;
	printf ("Ingrese un numero");
	scanf("%d",&dia);
	switch (dia)
	{
	case 1:
	 printf("Lunes");
	break ;
	case 2:
	 printf("Martes");
	 break;
	case 3:
	 printf ("Miercoles");
	 break;
	case 4:
	 printf("Jueves");
	 break;
	case 5:
	 printf("Viernes");
	 break;
	case 6:
	 printf("Sabado");
	 break;
	case 7:
	 printf("Domingo");
	 break;
	 default:
	 printf("Error AAAAAAgria");
	}
}
