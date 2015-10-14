//TURNO 24 – GRUPO ??
//ENTREGABLE 1 – EJERCICIO 1a
//Miguel Vázquez Wilks
//Diego Capilla Quirós

#include <stdio.h>
#include <conio.h>
main()
{
	int a=1;
	int b=0;
	int c=0;
	char sn;
	int cont=2;
	printf("Desea obtener el elemento 1 de la serie? (si: s / no: n): ");
	scanf("%c",&sn);
	fflush(stdin);	
	if (sn=='s')
		{
		printf("\nEl elemento 1 de la serie es: 1\n");
		do 
			{
			printf("\nDesea obtener el elemento %d de la serie? (si: s / no: n): ",cont);
			scanf("%c",&sn);
			fflush(stdin);
			if(sn=='s')
				{
				c=a+b;
				b=a;
				a=c;
				printf("\nel elemento %d de la serie es: %d\n",cont,c);
				}
			cont++;
			}
			while(sn=='s');
		}
	puts("\nFin del programa");
	getch();
}
