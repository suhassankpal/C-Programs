///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:
// Write a program which accept N number from user and find out smallest number from that given numbers
//
// INPUT: N =  6
// Elements = 85 66 3 80 93 88
// OUTPUT:    3
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Minimum(int *Arr, int iSize)
{
    int iCnt = 0;

    int iMin = Arr[0];

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(ptr, iLength);

    printf("Minumum number from given numbers is: %d", iRet);

    free(ptr);

    return 0;
}