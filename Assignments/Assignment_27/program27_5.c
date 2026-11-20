////////////////////////////////////////
//Function name  : StrRevX
//Input          : String
//Output         : String
//Description    : Reverses the given string.
//Date           : 20/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    if(end != str)
    {
        end--;
    }

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    StrRevX(arr);

    printf("Reversed string: %s\n", arr);

    return 0;
}
