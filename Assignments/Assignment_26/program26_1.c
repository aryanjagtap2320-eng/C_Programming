////////////////////////////////////////
//Function name  : DisplayASCII
//Input          : None
//Output         : ASCII Table
//Description    : Displays ASCII values in decimal, hexadecimal and octal.
//Date           : 20/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////

#include<stdio.h>
#include<ctype.h>

void DisplayASCII()
{
    int i = 0;

    printf("Decimal\tHexadecimal\tOctal\tCharacter\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%02X\t\t%03o\t", i, i, i);

        if(isprint((unsigned char)i))
        {
            printf("%c", i);
        }
        else
        {
            printf("Non-printable");
        }

        printf("\n");
    }
}

int main()
{
    DisplayASCII();

    return 0;
}