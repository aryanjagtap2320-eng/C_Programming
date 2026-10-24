#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int iNO)
{
    int iCnt = 0;
    int iSum = 0;
    for (int iCnt = 1; iCnt <= iNO/2 ; iCnt++)
    {
        if ((iNO % iCnt)==0)
        {
            iSum = iSum + iCnt;

        }
        
    }
    if (iSum == 1)
    {
        printf("The number is prime number..\n");
    }
    else
    {
        printf("It is not a prime number...\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckPrime(iValue);


    return EXIT_SUCCESS;
}