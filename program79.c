////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement:Accept N number from user and take another number and check whether number is present or not
//
//      INPUT:                                            |INPUT:
//      N numbers:  14,25,28,30,16                        |N numbers:  12,25,75,89,73
//      Another no: 14                                    |Another no: 10
//                                                        |
//      Output:     14 is present                         |Output:     10 is not present
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckOccurance(int *Arr, int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] == iNo))
        {
            iFrequency++;
        }
    }

    if (iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0, i = 0, iValue = 0;
    bool bRet = 0;

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

    bRet = CheckOccurance(ptr, iLength, iValue);

    if (bRet == true)
    {
        printf("%d is occured in array ", iValue);
    }
    else
    {
        printf("%d is not occured in array ", iValue);
    }

    free(ptr);

    return 0;
}