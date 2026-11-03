////////////////////////////////////////
//Function name  : Multiply
//Input          : Float
//Output         : Float
//Description    : Returns the percentage of marks.
//Date           : 03/11/2026
//Author         : Aryan Pradeep Jagtap
///////////////////////////////////

#include <stdio.h>

float Percentage(float total, float obtained)
{
    if (total == 0)
    {
        return 0;
    }

    float percentage = (obtained / total) * 100;

    return percentage;
}

int main()
{
    float total, obtained, result;

    printf("Enter total marks: ");
    scanf("%f", &total);

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    result = Percentage(total, obtained);

    printf("Percentage = %.1f%%", result);

    return 0;
}