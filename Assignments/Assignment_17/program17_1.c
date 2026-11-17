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
    int i = 0, j = 0, iNum = 0;

    for (int i = 1; i <= iRow ; i++)
    {
        for (int j = 1,iNum = 1; j <= iCol && iNum <= 9; j++)
        {
            printf("%d\t",iNum);
            iNum++;
        }
        
        printf("\n\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iValue1);

    printf("Enter the second number : \n");
    scanf("%d",&iValue2);


    Pattern(iValue1,iValue2);



return EXIT_SUCCESS;
}