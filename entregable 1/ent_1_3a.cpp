//TURNO 24 – GRUPO 09
//ENTREGABLE 1 – EJERCICIO 3a   
//Miguel Vázquez Wilks
//Diego Capilla Quirós

#include<stdio.h>
#include<conio.h>
main()
{
	int a=0;      // Esta variable se utiliza para obtener el segundo numero de la serie
	int b=1;      // Esta variable es el primer numero de la serie
	int n;        // Esta variable es para saber cuantos terminos quieres comprobar
	int c;        // Variable para imprimir el resultado
	int x;        // Contador para el "for"
	int y=1;      // Esta variable es para que te vuelva a pedir una cantidad de numeros de la serie dentro de los ofrecidos 
	int m;        // variable para el menu de opciones
	printf("Introduzca el numero de elementos de la serie de Fibonacci que desee (1-40): ");
	scanf("%d",&n);
	fflush(stdin);
	while(y==1)//  Bucle para verificar que el valos de n esta entre 1 y 40
	{
	 	if(n<41&&n>0)
	 		y=0;
		 else
		 {
			printf("Introduzca el numero de elementos de la serie de Fibonacci que desee (1-40): ");
			scanf("%d",&n);
		 }
	}
	printf("\nSelecciona que elementos de la serie deseas que se presenten:\n(En caso de no teclear un valor valido se presentaran todos)\n\n1. Pares \n2. Multiplos de 3 \n3. Multiplos de 5 \n4. Multiplos de 7\n\nElegir uno: ");
	scanf("%d",&m);
	fflush(stdin);
	if(m!=1&&m!=2&&m!=3&&m!=4)//Esto imprime el primer elemento de la serie siempre que se necesite ya que no se puede hayar de ninguna manera
		printf("\nEl elemento 1 de la serie es: %d",b);
	if(m==1)
	{
		for(x=2;x<=n;x++)// si el calculo de la serie se coloca fuera tendria que preguntar por cada elemento de la serie la opcion elegida, la manera mas optima seria con una funcion per nos dijo raul que nos las usaramos 
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
			for(x=2;x<=n;x++)// si el calculo de la serie se coloca fuera tendria que preguntar por cada elemento de la serie la opcion elegida, la manera mas optima seria con una funcion per nos dijo raul que nos las usaramos
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
                    for(x=2;x<=n;x++)// si el calculo de la serie se coloca fuera tendria que preguntar por cada elemento de la serie la opcion elegida, la manera mas optima seria con una funcion per nos dijo raul que nos las usaramos
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
                       for(x=2;x<=n;x++)// si el calculo de la serie se coloca fuera tendria que preguntar por cada elemento de la serie la opcion elegida, la manera mas optima seria con una funcion per nos dijo raul que nos las usaramos
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
                   for(x=2;x<=n;x++)// si el calculo de la serie se coloca fuera tendria que preguntar por cada elemento de la serie la opcion elegida, la manera mas optima seria con una funcion per nos dijo raul que nos las usaramos
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
	puts("\n\n\nFin del programa");
	getch();
}
