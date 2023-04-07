///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:
// Write a program which accept N number from user and find out largest number from that given numbers
//
// INPUT: N =  6
// Elements = 85 66 3 80 93 88
// OUTPUT:    93
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Maximum(int *Arr, int iSize)
{
    int iCnt = 0;

    int iMax = Arr[0];

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(ptr, iLength);

    printf("Maximum number from given numbers is: %d", iRet);

    free(ptr);

    return 0;
}