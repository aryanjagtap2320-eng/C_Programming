#include<stdio.h>
#include<stdlib.h>

    
void checkEven(int iNO)
{
    
    if ((iNO % 2) == 0)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is odd number \n");
    }

}
int main()
{
    int iValue = 0;
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    checkEven(iValue);



    return EXIT_SUCCESS;
}