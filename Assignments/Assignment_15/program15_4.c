////////////////////////////////////////
//Function name  : Multiply
//Input          : Integer
//Output         : Integer
//Description    : Takes input of three number and returns their product .
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNO1,int iNO2, int iNO3)
{
    int iProduct =  iNO1*iNO2*iNO3;
    return iProduct;
}

int main()
{
int iValue1 = 0, iValue2 = 0, iValue3 = 0;
int iRet = 0;

printf("Enter the first number :\n");
scanf("%d",&iValue1);

printf("Enter the second number :\n");
scanf("%d",&iValue2);

printf("Enter the third number :\n");
scanf("%d",&iValue3);

iRet = Multiply(iValue1,iValue2,iValue3);
printf("The multiplication of the three numbers is %d\n",iRet);


    return EXIT_SUCCESS;
}