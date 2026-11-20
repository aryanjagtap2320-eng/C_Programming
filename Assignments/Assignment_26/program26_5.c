////////////////////////////////////////
//Function name  : Display
//Input          : Character
//Output         : ASCII Values
//Description    : Displays ASCII value in decimal, octal and hexadecimal.
//Date           : 20/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal      : %d\n", (unsigned char)ch);

    printf("Octal        : %04o\n", (unsigned char)ch);

    printf("Hexadecimal  : 0X%02X\n", (unsigned char)ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}