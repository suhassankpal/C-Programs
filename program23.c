////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- print Marvellous : 1 to Marvellous : n
// n=take number from user
// Demonstration of Iteration using for loop
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Marvellous : %d\n", iCnt);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter number of iteration\n");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}