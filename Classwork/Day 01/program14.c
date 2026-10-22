#include "Header.h"
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

