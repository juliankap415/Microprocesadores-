#include <stdio.h>
#include "calculadora.h"

int a,b,op;

int main (void)
{

printf("Ingrese los números que desea operar (con comas):\n ");
scanf("%d,%d", &a,&b);

printf("Qué operación desea realizar \n1-Suma\n2-Resta\n3-Multiplicación\n4-División");
scanf("%d",&op);

switch(op)

{

case 1: 

sum(a,b);

break;

case 2: 

res(a,b);

break;

case 3: 

mult(a,b);

break;


case 4: 

div(a,b);

break;

}

return 0;

}
