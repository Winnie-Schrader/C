#include <stdio.h>
#include "Calc.h"

int main(void)
{
	int a,b,c,d,e,f;
	printf("\n Enter any 2 numbers: \n");
	scanf("%d%d",&a,&b);
	c = add(a,b);
	d = sub(a,b);
	e= mul(a,b);
	f = div(a,b);
	printf("\nAddition: %d \n Substraction: %d \n Multiplication: %d \n Division:%d\n",c,d,e,f);	
	return 0;
}
