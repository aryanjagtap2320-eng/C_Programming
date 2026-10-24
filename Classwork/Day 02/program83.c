//Take a number from user and check whether it is divisible by 3 or not 

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNO)
{
    if ((iNO % 3) == 0)
    {
    printf("The number is divisible by 3...\n");    //Logic
    }
    else
    {
    printf("The number is not divisible by 3...\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}