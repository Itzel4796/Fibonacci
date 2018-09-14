
//***************************************************************************************
//    LIBRERIAS
//**************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//****************************************************************
/// Constantes
//**********************************************************************

#define N 10
//****************************************************************
/// variables globales
//**********************************************************************


//****************************************************************************
// PROTOTIPOS DE FUNCIONES
//****************************************************************************
void menu (void);
void programa1(void);
void programa2(void);
void programa3(void);
void delay(int);

//****************************************************************************
// MAIN PRINCIPAL  ...  funcion principal
//****************************************************************************

int main (void)
{
   menu();
   return 0;
}

//****************************************************************************
// desarollo de las funciones en el mismo orden de como listamos los prototipos
//****************************************************************************

//*****************   FUNCION MENU DESDE DONDE SE MANDA LLAMAR LAS DEMAS FUNCIONES
void menu(void)
{
   int op;
   
   do{
      system ("cls");
      printf("\n M  E   N   U");
	  printf("\n1.- Fibonacci usando for");
	  printf("\n2.- Fibonacci usando do while");
	  printf("\n3.- Fibonacci usando while");
	  printf("\n4.- Salir");
	  printf("\nESCOGE UNA OPCION.");
      scanf ("%d",&op);
	  switch(op)
	    {
		  case 1: programa1();   break;
		  case 2: programa2();  break;
		  case 3: programa3();  break;
		}
   }while(op != 4);
}

//**************************************************************************************

//***********PROGRAMA QUE GENERA 20 NUMEROS ALEATORIOS 
void programa1(void)
{
    system ("cls");
  	int x,y,z,cont,num;
	x=0;
  	y=1;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
	printf("0\n1\n",z);
 
	  for (cont=1;cont<=num-1;cont=cont+1)
           {
      		z=x+y;
      		printf("%d\n",z);
      		x=y;
      		y=z;
  			}
	system("pause");
	

}

//**************************************************************************************

//***********PROGRAMA QUE imprime los numeros divisibles entre X  
void programa2(void)
{
   system ("cls");
	int a=0,b=1,c=0,num=0,i=1;
    printf("Ingrese el limite:");
	scanf("%d",&a);
 	do
 	{
  	num=b;
  	b=c;
  	c=num+b;
  	printf("%d \n ",c);
  	i++;

}while(i<=a);
	system("pause");


}

//**************************************************************************************

//***********PROGRAMA QUE IMPRIME LA TABLA DE MULTIPLICAR DE UN NUMERO DADO
void programa3(void) //Corregir que no imprima la n//
{
    system ("cls");
	int x,y,z,n;
	x=0;
  	y=1;
	printf("\nIntroduzca un entero\n"); 
	scanf("%d", &n);
	while(y<=n) 
	     {	 
			z=x+y;
    		printf("%d\n",z);
   		 	x=y;
    		y=z;
		 }			 
	system("pause");

}

//************************************************************************
void delay(int tiempo)
{
  int i,j;
  for(i=0;i<tiempo*100;i++)
     {
	   for(j=0;j<tiempo*100;j++);
		

	 }
}











