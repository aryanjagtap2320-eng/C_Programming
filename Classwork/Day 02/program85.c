//Take a number from user and check whether it is divisible by both  3 and 5 or not
/*
------------------------------------------------------
                    Operation &&
------------------------------------------------------
    Result1          Result2         FinalResult
------------------------------------------------------
    True              True             True
    True              False            False
    False             True             False -> Short circuit
    False             False            False -> Short circuit
------------------------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNO)
{
    if (((iNO % 3) == 0) && ((iNO % 5) == 0))
    {
    printf("The number is divisible by 3 as well as 5 ...\n");    //Logic
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