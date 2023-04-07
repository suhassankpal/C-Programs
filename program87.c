///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:
// Write a program which accept N number from user and take another number and return last occurance of that number
//(travel array in forward way)
//
// INPUT: N =  6
// Elements = 85 66 3 80 93 85
// OUTPUT :  AT INDEX 5
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int CheckLastOccurance(int *Arr, int iSize, int iNo)
{
    int iCnt = 0, iPos = -1;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] == iNo))
        {
            iPos = iCnt;
        }
    }

    return iPos;
}

int main()
{
    int iLength = 0, i = 0, iValue = 0;
    int iRet = 0;

    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements:\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter the elements to findout the last occurance :\n");
    scanf("%d", &iValue);

    iRet = CheckLastOccurance(ptr, iLength, iValue);

    if (iRet == -1)
    {
        printf("There is no %d in the array", iValue);
    }
    else
    {
        printf("Last occurance of %d in array at %d Index : %d", iValue, iRet);
    }

    free(ptr);

    return 0;
}