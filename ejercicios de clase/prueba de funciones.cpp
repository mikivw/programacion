#include<stdio.h>
#include<conio.h>

void intercambio(char,char);

main()
{
	char a,b;
	printf("\nIntroduzca un caracter a: ");
	a=getche();
	printf("\nIntroduzca en valos para el caracter b: ");
	b=getche();
	intercambio(a,b);
	getch();
}

void intercambio(char a,char b)
{
	char temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nDentro de la funcion:\n LOS CARACTERES SE HAN INTERCAMBIADO: a:%c Y b:%c\n",a,b);
	return;
}
