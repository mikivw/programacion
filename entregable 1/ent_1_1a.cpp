//TURNO 24 – GRUPO 09
//ENTREGABLE 1 – EJERCICIO 1a
//Miguel Vázquez Wilks
//Diego Capilla Quirós

#include <stdio.h>
#include <conio.h>
main()
{
	int a=1;      // Esta variable es el primer numero de la serie
	int b=0;      // Esta variable se utiliza para obtener el segundo numero de la serie
	int c=0;      // Variable para imprimir el resultado
	char sn;      // Variable para saber si se quiere continuar
	int cont=2;   // Variable para saber el puesto en la serie en el que estamos
	printf("Desea obtener el elemento 1 de la serie? (si: s / no: n): ");
	scanf("%c",&sn);
	fflush(stdin);
	
	if (sn=='s')
		{
		printf("El elemento 1 de la serie es: 1\n");//Esto imprime el primer elemento de la serie ya que no se puede hayar de ninguna manera
		while (sn=='s')
			{
			printf("Desea obtener el elemento %d de la serie? (si: s / no: n): ",cont);
			scanf("%c",&sn);
			fflush(stdin);
			if(sn=='s')
				{
				c=a+b;//     Estas tres lineas son 
				b=a;//        la obtencion de 
				a=c;//   la serie dentro de un bucle
				printf("El elemento %d de la serie es: %d\n",cont,c);
				}
			cont++;
			}
		}
	puts("\nFin del programa");
	getch();//    Esto sirve para parar el programa
}
