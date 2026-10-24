//Take a number from user and check whether it is divisible by 5 or not

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNO)
{
    if ((iNO % 5) == 0)
    {
    printf("The number is divisible by 5...\n");    //Logic
    }
    else
    {
    printf("The number is not divisible by 5...\n");
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