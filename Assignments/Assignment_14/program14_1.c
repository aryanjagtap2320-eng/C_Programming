////////////////////////////////////////
//Function name  : Multifact
//Input          : Integer
//Output         : Integer
//Description    : Takes input of a number and returns the multiplication of factors of that number.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultiFact(int iNO)
{
    int iCnt = 0;
    int iMultiplication = 1;

    for(iCnt = 1; iCnt < iNO; iCnt++)
    {
        if ((iNO % iCnt) == 0)
        {
            iMultiplication = iMultiplication * iCnt;
        }
        
    }
    return iMultiplication;
    
}


int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);
    printf("The Multiplication of the factors is : %d\n",iRet);


    return EXIT_SUCCESS;
}