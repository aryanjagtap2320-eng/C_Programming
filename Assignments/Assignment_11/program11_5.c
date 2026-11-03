///////////////////////////////////////
//Function name  : RangeDisplayRev
//Input          : Integer
//Output         : Integer
//Description    : Takes input of two numbers and prints all numbers between them in reverse order.....
//Date           : 31/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
int iCnt = 0;

for (int iCnt = iEnd - 1; iCnt > iStart; iCnt--)
{
    printf("%d\t",iCnt);
}

}


int main()
{

    int iValue1 = 0, iValue2 = 0;


    printf("Enter the Starting number :");
    scanf("%d",&iValue1);

    printf("Enter the Ending number :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    


    return EXIT_SUCCESS;
}