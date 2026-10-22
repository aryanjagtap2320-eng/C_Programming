/////////////////////////////////////////////////////
//Function name     : DisplayEvenFactor
//Description       : Does printing of all Even Factors of a number
//Input             : integer
//Output            : *  *   *   *
//Date              :18/10/2026
//Author            : Aryan Pradeep Jagtap
/////////////////////////////////////////////////////


#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i) == 0 && (i % 2) == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
