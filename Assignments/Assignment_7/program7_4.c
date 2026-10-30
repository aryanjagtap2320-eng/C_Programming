///////////////////////////////////////
//Function name  : OddDisplay
//Input          : Integer
//Output         : The odd numbers till the entered number..
//Description    : Prints the odd numbers till the entered number..
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNO)
{
    int iCnt = 0;

    for (int iCnt = 1;iCnt < iNO ; iCnt = iCnt + 2)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);


    return EXIT_SUCCESS;

}