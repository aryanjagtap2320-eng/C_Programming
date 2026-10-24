//Take a number from user and check whether the number is perfect or not
#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNO)
{
    int iCnt = 0,iSum = 0;

    for ( iCnt = 1; iCnt <= iNO/2 ; iCnt++)
    {
        if ((iSum == iNO) == 0)
        {
            printf("It is a perfect number \n");

        }
        else
        {
            printf("It is not a perfect number \n");
        }
    }

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    CheckPerfect(iValue);
    
    return EXIT_SUCCESS;
}
//Time complexity is : O(N/2)