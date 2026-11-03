////////////////////////////////////////
//Function name  : -
//Input          : character
//Output         : string
//Description    : Takes input of a name and prints that name .
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Enter the full name : \n");
    scanf("%s",Name);

    printf("Your name is %s",Name);



    return EXIT_SUCCESS;
}