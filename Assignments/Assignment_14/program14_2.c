////////////////////////////////////////
//Function name  : FactRev
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and returns the factors of that number in reverse order.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNO)
{
    int iCnt = 0;

    for (int iCnt = iNO/2; iCnt >= 1; iCnt--)
    {
        
        if ((iNO % iCnt )== 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}