#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
    
bool checkEven(int iNO)
{
    
    if ((iNO % 2) == 0)
    {
    return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    
    bool bRet = false;

    bRet =  checkEven(iValue);

    if (bRet == true)
    {
        printf("It is even\n");
    }
    else
    {
        printf("It is odd\n");
    }



    return EXIT_SUCCESS;
}