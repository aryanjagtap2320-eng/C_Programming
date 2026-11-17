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

void Pattern(int iRow , int iCol)
{
    for (int i = iRow; i >= 1; i--)
    {
        for (int j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
            
        }

        printf("\n\n");
    }
        
}

int  main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the first number :\n");
    scanf("%d",&iValue1);

    printf("Enter the second number :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}


