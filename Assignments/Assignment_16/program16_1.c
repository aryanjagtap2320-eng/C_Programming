////////////////////////////////////////
//Function name  : Pattern
//Input          : integer,integer
//Output         : Float
//Description    : Returns the percentage of marks.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i,j;

    for (int i = 1; i <= iRow; i++)
    {
            for (int j = 1; j <= iCol; j++)
            {
                printf("%c\t", 'A' + j - 1);
            }
            
            printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2  = 0;

    printf("Enter the first value : \n");
    scanf("%d",&iValue1);

    printf("Enter the second value : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}