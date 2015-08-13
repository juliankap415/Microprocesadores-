#include <stdio.h>
#include "calculadora.h"

int a,b,op,r;

int main (void)
{

printf("Ingrese los numeros que desea operar (con comas):\n ");
scanf("%d,%d", &a,&b);

printf("Que operacion desea realizar \n1-Suma\n2-Resta\n3-Multiplicacion\n4-Division\n");
scanf("%d",&op);

switch(op)

{

case 1:

r=sum(a,b);

break;

case 2:

r=res(a,b);

break;

case 3:

r=mult(a,b);

break;


case 4:

r=div(a,b);

break;

}

printf(" Su resultado es %d", r);
return 0;

}
