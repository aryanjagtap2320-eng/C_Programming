/////////////////////////////////////////////////////
//Function name     : DisplayFactor
//Description       : Does printing of all Factors of a number
//Input             : integer
//Output            : *  *   *   *
//Date              :18/10/2026
//Author            : Aryan Pradeep Jagtap
/////////////////////////////////////////////////////


#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d\t", i);
        }
    }

    printf("%d", iNo);
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
