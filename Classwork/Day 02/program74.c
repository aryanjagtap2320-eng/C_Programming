#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;
for (int iCnt = 1; iCnt <=iNO; iCnt++)
{
    printf("%d\t*\n",iCnt);
}

printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}