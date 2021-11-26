#include<stdio.h>
 int sum(int a ,int b);
int main()
{
int a,b,c;
printf("Enter any 2 nos:\n");
scanf("%d%d",&a,&b);
c = sum(a,b);    
printf("%d\n",c);
return 0;
}

int sum(int a , int b)
{
    int result;
    result=a+b;
    return result;
}
