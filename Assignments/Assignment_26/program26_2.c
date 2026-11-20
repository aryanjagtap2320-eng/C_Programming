////////////////////////////////////////
//Function name  : Display
//Input          : Character
//Output         : Character
//Description    : Converts capital character to small and vice versa.
//Date           : 20/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("Output : %c", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}