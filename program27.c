///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Write program for printing sumation of 1 to 5 number
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Sumation()
{
    int iSum = 0;

    iSum = iSum + 1;
    iSum = iSum + 2;
    iSum = iSum + 3;
    iSum = iSum + 4;
    iSum = iSum + 5;

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Sumation();

    printf("Sumation is :  %d", iRet);

    return 0;
}