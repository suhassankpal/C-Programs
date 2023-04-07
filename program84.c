///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:
// Write a program which accept N number from user and display reverse given numbers
//
// INPUT: N =  6
// Elements = 85 66 3 80 93 88
// OUTPUT:    88 93 80 3 66 85
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayReverse(int *Arr, int iSize)
{
    int iCnt = 0;

    for (iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        printf("%d\t", Arr[iCnt]);
    }
}

int main()
{
    int iLength = 0, i = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter numbers of elements \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the %d elements :\n", iLength);

    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements in reverse order as :\n");

    DisplayReverse(ptr, iLength);

    free(ptr);

    return 0;
}