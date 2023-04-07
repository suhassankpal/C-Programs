///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Write program for printing sumation of 1 to 5 number(Worst case)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Sumation()
{
    int iNo1 = 1;
    int iNo2 = 2;
    int iNo3 = 3;
    int iNo4 = 4;
    int iNo5 = 5;

    int iSum = 0;

    iSum = iSum + iNo1;
    iSum = iSum + iNo2;
    iSum = iSum + iNo3;
    iSum = iSum + iNo4;
    iSum = iSum + iNo5;

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Sumation();

    printf("Sumation is :  %d", iRet);

    return 0;
}