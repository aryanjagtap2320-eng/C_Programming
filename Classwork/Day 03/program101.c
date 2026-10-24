//Take a number from user and print its factors ...

#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int iNO)
{
    int iCnt = 0;
    printf("Factors of %d are :\n",iNO);

    for ( int iCnt = 1; iCnt < iNO/2 ; iCnt++)
    {
        if ((iNO % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}
//Time complexity is : O(n/2)