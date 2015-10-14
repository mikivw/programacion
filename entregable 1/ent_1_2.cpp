//TURNO 24 – GRUPO ??
//ENTREGABLE 1 – EJERCICIO 2
//Miguel Vázquez Wilks
//Diego Capilla Quirós

#include<stdio.h>
#include<conio.h>
main()
{
	int a=0;
	int b=1;
	int n;
	int c;
	int x;
	int y=1;
	printf("Introduzca el numero de elementos de la serie de Fibonacci que desee (1-20): ");
	scanf("%d",&n);
	fflush(stdin);
	while(y==1)
	{
	 	if(n<21&&n>0)
	 		y=0;
		 else
		 {
			printf("Introduzca el numero de elementos de la serie de Fibonacci que desee (1-20): ");
			scanf("%d",&n);
		 }
	}
	printf("\nEl elemento 1 de la serie es: %d",b);
	for(x=2;x<=n;x++)
	{
		c=b+a;
		a=b;
		b=c;
		printf("\nEl elemento %d de la serie es: %d",x,c);
	}
	puts("\n\nFin del programa");
	getch();
}
