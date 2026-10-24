//Take a number from user and check whether it is divisible by either  3 or 5 or not
/*
------------------------------------------------------
                    Operation ||
------------------------------------------------------
    Result1          Result2         FinalResult
------------------------------------------------------
    True              True             True -> Short circuit
    True              False            True -> Short circuit
    False             True             True
    False             False            False
------------------------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNO)
{
    if (((iNO % 3) == 0) || ((iNO % 5) == 0))
    {
    printf("The number is divisible by 3 or 5 ...\n");    //Logic
    }
    else
    {
    printf("The number is not divisible by both...\n");
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