//Take a number from user and check whether the number is perfect or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int iNO)
{
    int iCnt = 0,iSum = 0;

    for ( iCnt = 1; iCnt <= iNO/2 ; iCnt++)
    {
        if ((iSum == iNO) == 0)
        {
            return true;

        }
        else
        {
            return false;        }
        }

}
int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

   bRet =  CheckPerfect(iValue);
   if (bRet == true)
   {
    printf("it is a perfect number \n");
   }else
   {
    printf("it is a not a perfect number \n");

   }
   
    
    return EXIT_SUCCESS;
}
//Time complexity is : O(N/2)