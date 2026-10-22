#include<stdio.h>
#include<stdlib.h>

int main()
{
    int NO = 0;

    printf("Enter the number :\n");
    if(scanf("%d",&NO) != 1)
    {
        printf("Invalid input\n");

        return EXIT_FAILURE;
    }
    printf("Input is valid \n");


    return EXIT_SUCCESS;
}