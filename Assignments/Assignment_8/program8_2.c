///////////////////////////////////////
//Function name  : Display
//Input          : Integer
//Output         : Words
//Description    : Takes the number and prints it into words...
//Date           : 30/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    if (iNO > 9 || iNO < -9 )
    {
    printf("Invalid  Number\n");
    }
    
    if (iNO < 0)
    {
        iNO = -iNO;
    }

    switch (iNO)
    {
        case 0 :
            printf("Zero\n");
            break;

                    case 1 :
            printf("One\n");
            break;

                    case 2 :
            printf("Two\n");
            break;

                    case 3 :
            printf("Three\n");
            break;

                        case 4 :
            printf("Four\n");
            break;

                    case 5 :
            printf("Five\n");
            break;

                    case 6 :
            printf("Six\n");
            break;

                    case 7 :
            printf("Seven\n");
            break;

                case 8 :
            printf("Eight\n");
            break;

                    case 9 :
            printf("Nine\n");
            break;
    }



}


int main()
{
    int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}