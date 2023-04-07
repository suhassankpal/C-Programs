////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement:
// Accept N number from user and take another number if number is present return the index of that number
// if number is not present then return -1.
//
//      INPUT:                                            |INPUT:
//      N numbers:  14,25,28,14,16                        |N numbers:  12,25,75,89,73
//      Another no: 14                                    |Another no: 10
//                                                        |
//      Output:     index is '0'                          |Output:     -1
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int CheckOccurance(int *Arr, int iSize, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] == iNo))
        {
            break;
        }
    }

    if (iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    printf("Enter the elements to findout the occurance :\n");
    scanf("%d", &iValue);

    iRet = CheckOccurance(ptr, iLength, iValue);

    if (iRet == -1)
    {
        printf("There is no %d in the array", iValue);
    }
    else
    {
        printf("%d is occured in array at Index : %d", iValue, iRet);
    }

    free(ptr);

    return 0;
}