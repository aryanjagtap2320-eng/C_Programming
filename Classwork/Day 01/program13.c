#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////
//Function name  : Addition
//Input          : Integer,Integer
//Output         : Integer
//Description    : Performs addition
//Date           : 04/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

int Addition(
                int iNo1, // first input
                int iNo2 // Second input
            )
{    int iAns = 0;
    iAns = iNo1 + iNo2;    // Business logic...
    return iAns;
}
////////////////////////////////////////
//
//Entry point of the application.
//
////////////////////////////////////////

int main()
    {
        int iValue1 = 0, iValue2 = 0, iResult = 0 ;
    
        printf("Enter first number : \n");
        if(scanf("%d",&iValue1) != 1)
        {
            fprintf(stderr,"Unable to proceed as Input is invalid\n");
            return EXIT_FAILURE;
        }

        printf("Enter second number : \n");
        if(scanf("%d",&iValue2) != 1)
        {
            fprintf(stderr,"Unable to proceed as Input is invalid\n");
            return EXIT_FAILURE;
        }

        
        printf("The Addition of two numbers is : %d \n",iResult);


        return EXIT_SUCCESS;
    } // Output displays the addition of two numbers . It follows the concept of function 
      // The use of function leads to reuse .

////////////////////////////////////////
//  step 5:Test the program
//  Tested test cases
//---------------------------------------------
// Input1   Input2  Output
//---------------------------------------------
//  10          11      0
//  11          D      invalid
//  T           -      invalid
////////////////////////////////////////
