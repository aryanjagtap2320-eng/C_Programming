#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNO1, int iNO2, int iNO3,int iNO4)
{
    if ((iNO1 < iNO2) && (iNO1 < iNO3) && (iNO1 < iNO4))
    {
        return iNO1;
    }
    else if ((iNO2 < iNO1) && (iNO2 < iNO3) && (iNO2 < iNO4))
    {
        return iNO2;
    }
    else if ((iNO3 < iNO1) && (iNO3 < iNO2) && (iNO3 < iNO4))
    {
        return iNO3;
    }
    else
    {
        return iNO4;
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0,iValue4 = 0;
    int iResult = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iValue1);

    printf("Enter the second number : \n");
    scanf("%d",&iValue2);

    printf("Enter the third number : \n");
    scanf("%d",&iValue3);

    printf("Enter the fourth number : \n");
    scanf("%d",&iValue4);

    iResult =  Minimum(iValue1,iValue2,iValue3,iValue4);
    printf("The Minimum number is : %d\n",iResult);

    return EXIT_SUCCESS;
}