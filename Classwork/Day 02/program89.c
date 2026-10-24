//Take a number from user and print its factors ...

#include<stdio.h>
#include<stdlib.h>

void DISPLAY(int iNO)
{
    int iCnt = 0;
    for (int iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DISPLAY(iValue);

    return EXIT_SUCCESS;
}