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

int Addition(int iNo1, int iNo2)
{    int iAns = 0;
    iAns = iNo1 + iNo2;    // Business logic...
    return iAns;
}
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