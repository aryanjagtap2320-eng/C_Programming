///////////////////////////////////////
//Function name  : TableRev
//Input          : Integer
//Output         : Integer
//Description    : Takes the number and returns its Table Reversed...
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNO)
{
        int iCnt = 0;
        
        if (iNO < 0)
        {
                iNO = -iNO;

        }

        for (int iCnt = 10; iCnt >= 1; iCnt--)
        {
                printf("%d\t",iCnt*iNO);
        }
        
        
        


}


int main()
{
        int iValue = 0 ;

        printf("Enter the number : ");
        scanf("%d",&iValue);

        TableRev(iValue);

        
        return EXIT_SUCCESS;
}
