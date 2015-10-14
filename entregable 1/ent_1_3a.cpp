//TURNO 24 – GRUPO ??
//ENTREGABLE 1 – EJERCICIO 3a   
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
	int m;
	printf("Introduzca el numero de elementos de la serie de Fibonacci que desee (1-40): ");
	scanf("%d",&n);
	fflush(stdin);
	while(y==1)
	{
	 	if(n<41&&n>0)
	 		y=0;
		 else
		 {
			printf("\nIntroduzca el numero de elementos de la serie de Fibonacci que desee (1-40): ");
			scanf("%d",&n);
		 }
	}
	printf("Selecciona que elementos de la serie deseas que se presenten:\n(En caso de no teclear un valor valido se presentaran todos)\n\n1. Pares \n2.Multiplos de 3 \n3.Multiplos de 5 \n4.Multiplos de 7\n\nElegir uno: ");
	scanf("%d",&m);
	fflush(stdin);
	if(m!=1&&m!=2&&m!=3&&m!=4)
		printf("\nEl elemento 1 de la serie es: %d",b);
	if(m==1)
	{
		for(x=2;x<=n;x++)
		{
			c=b+a;
			a=b;
			b=c;
			if(c%2==0)
			{
				printf("\nEl elemento %d de la serie es: %d",x,c);
			}
		}
	}
	else
	{
		if(m==2)
		{
			for(x=2;x<=n;x++)
			{
				c=b+a;
				a=b;
				b=c;
				if(c%3==0)
				{
					printf("\nEl elemento %d de la serie es: %d",x,c);
				}	
			}
		}
		else
		{
            if(m==3)
            {
                    for(x=2;x<=n;x++)
			        {
			        	c=b+a;
			         	a=b;
			          	b=c;
			           	if(c%5==0)
			            	{
			             		printf("\nEl elemento %d de la serie es: %d",x,c);
			               	}
                   }	
            }
            else
            {
                if(m==4)
                {
                       for(x=2;x<=n;x++)
			        {
			        	c=b+a;
			         	a=b;
			          	b=c;
			           	if(c%7==0)
			            	{
			             		printf("\nEl elemento %d de la serie es: %d",x,c);
			               	}
                   }
               }
               else
               {
                   for(x=2;x<=n;x++)
			        {
			        	c=b+a;
			         	a=b;
			          	b=c;
            		    printf("\nEl elemento %d de la serie es: %d",x,c);
                   }
              }	
           }
        }	 
	}
	puts("\n\nFin del programa");
	getch();
}
