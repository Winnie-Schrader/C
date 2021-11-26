#include <stdio.h>

int a[5],top=-1,val;
int Push(int val);
void Pop();
void Display();

int main()
{

    Push(val);
    Push(val);
    Push(val);
    Push(val);
    Push(val);
    Push(val);
    Pop();
    Pop();
    Display();
}

int Push(int val)
{
    if (top!=5)
    {
        printf("Enter the value u want to push:\n");
        scanf("%d",&val);
        top = top + 1;
        a[top] = val;
    }
    else
    {
        printf("\nStack Overflow\n");
    }
    
}

void Pop()
{
    if (top > 0)
    {
        printf("Value Popped: %d\n",a[top]);
        a[top] = 0;
        top = top - 1;
    }
    else
    {
        printf("\nStack Underflow\n");
    }
}

void Display()
{
    printf("\nFinal Stack:\n");
    for (int i = top; i != -1; i--)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
}