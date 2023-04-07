////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- print Marvellous : 1 to Marvellous : n
// n=take number from user
// Demonstration of Iteration using while loop
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;
    while (iCnt <= iValue)
    {
        printf("Marvellous : %d\n", iCnt);
        iCnt++;
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