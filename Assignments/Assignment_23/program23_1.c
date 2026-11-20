////////////////////////////////////////
//Function name  : strlwrx
//Input          : Char
//Output         : char
//Description    : Returns the  lower case characters.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////



#include <stdio.h>
#include <ctype.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is : %s", arr);

    return 0;
}