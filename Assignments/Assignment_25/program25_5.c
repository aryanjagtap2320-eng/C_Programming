/*
    Function name : DisplaySchedule
    Input         : Character (Division)
    Output        : Displays examination timing
    Description   : Accepts division from user and
                    displays examination timing.
                    Application is case insensitive.
    Date          : 20/11/2026
    Author        : Aryan Pradeep Jagtap
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A':
            printf("Your exam at 7 AM\n");
            break;

        case 'B':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid Division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}