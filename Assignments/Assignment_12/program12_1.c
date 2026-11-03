///////////////////////////////////////
//Function name  : DisplayDigit
//Input          : Integer
//Output         : Integer
//Description    : Takes input of two numbers and prints all numbers between them in reverse order.....
//Date           : 31/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNO)
{
    int iDigit = 0;
    

    if (iNO < 0)
    {
        iNO = -iNO;
    }

    while (iNO != 0)
    {
        iDigit = iNO % 10;
        printf("%d\n",iDigit);
        iNO = iNO / 10;
    }
}




int main()
{
    int ivalue = 0;

    printf("Enter the number : ");
    scanf("%d",&ivalue);

    DisplayDigit(ivalue);




    return EXIT_SUCCESS;
}