/////////////////////////////////////////////////////
//Function name     : DisplayConvert
//Description       : Does printing of all Even Factors of a number
//Input             : Character
//Output            : *  *   *   *
//Date              :18/10/2026
//Author            : Aryan Pradeep Jagtap
/////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c", cValue - 32);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}