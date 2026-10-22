/*
step 1:Understand the problem statement.
step 2:write the algorithm
step 3:Decide the proframming language 
step 4:Write  the program
step 5:Test the program
*/

////////////////////////////////////////
//
//step 1 : Understand the problem statement
//         User is going to enter any two integers 
//         And we have to perform addition
////////////////////////////////////////

////////////////////////////////////////
//Step 2 : Write the algorithm
/*
 Start
    Accept first number as NO1 
    Accept second number as NO2
    Create the variable as Ans to store the result
    Perform the addition and store into Ans 
    Display the result from Ans
End        
*/
////////////////////////////////////////
// 
//Step 3 : Decide the programming language 
//         We select C programming 
////////////////////////////////////////

////////////////////////////////////////
//Step 4 : Write the program 
////////////////////////////////////////

#include<stdio.h>
////////////////////////////////////////
//Function name  : Addition 
//Input          : Integer,Integer
//Output         : Integer
//Description    : Performs addition
//Date           : 04/10/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

int Addition(int iNo1, int iNo2)
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
        scanf("%d",&iValue1);

          printf("Enter second number : \n");
        scanf("%d",&iValue2);

        iResult = Addition(iValue1,iValue2);
        
        printf("The Addition of two numbers is : %d \n",iResult);


        return 0;
    } // Output displays the addition of two numbers . It follows the concept of function 
      // The use of function leads to reuse .

////////////////////////////////////////
//  step 5:Test the program
//  Tested test cases 
//---------------------------------------------
// Input1   Input2  Output
//---------------------------------------------
//  10          11      21
//  11          10      21
//  11          0       11
//  0           11      11
//  20          -9      11
//  -9          20      11
//
////////////////////////////////////////
