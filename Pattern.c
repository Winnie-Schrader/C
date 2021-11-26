#include <stdio.h>

void printSpace(int numTimes);
void printStar();
void printPattern(int patternSize, int currentLine, int isStraight);
int calculateMiddleSpace(int patternSize, int currentLine);

int main()
{
    int patternSize;
    printf("Enter the pattern size: ");
    scanf("%d", &patternSize);
    printPattern(patternSize, 1, 0);
}

void printStar()
{
    printf("*");
}

void printSpace(int numTimes)
{
    if(numTimes == 0)
    {
        return;
    }
    printf(" ");
    printSpace(numTimes-1);    
}

void printPattern(int patternSize, int currentLine, int isStraight)
{
    if (currentLine == 0)
    {
        return;
    }
    printSpace(patternSize - currentLine);
    printStar();
    printSpace(calculateMiddleSpace(patternSize, currentLine));
    if (currentLine !=  1)
    {
        printStar();
    }
    printf("\n");

    if (currentLine == patternSize )    
    {
        printPattern(patternSize, currentLine - 1, 1);
    }
    else
    {
        if (isStraight == 0)
        {
            printPattern(patternSize, currentLine + 1, 0);
        }
        else
        {
             printPattern(patternSize, currentLine -1, 1);
        }    
    }    
}

int calculateMiddleSpace(int patternSize, int currentLine)
{
    if (currentLine == 1)
    {
        return 0;
    }
        else
        {
            return 1 +(2 * (currentLine -2));
        }    
}