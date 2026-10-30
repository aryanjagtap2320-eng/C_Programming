///////////////////////////////////////
//Function name  : Number
//Input          : Integer
//Output         : Small, Medium, Large
//Description    : If the number is less then 50                        -> print Small,
//                 If the number is greater then 50 and less then 100   -> print Large,
//                 If the number is greater then 100                   -> print Large,
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Number(int iNO)
{
    if (iNO < 50)
    {
        printf("Small\n");
    }
    else if (iNO > 50 && iNO < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}


int main()
{
    int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    Number(iValue);


    return EXIT_SUCCESS;
}