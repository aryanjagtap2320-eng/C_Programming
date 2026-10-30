///////////////////////////////////////
//Function name  : Display
//Input          : Integer
//Output         : Number line -> from negative to positive
//Description    : Prints Numberline of a number....
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;
    iCnt = -iNO;

    while (iCnt <= iNO)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }


}

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}