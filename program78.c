////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement:Accept N number from user and take another number and check frequency of that numbers
//
//      INPUT:                                            |INPUT:
//      N numbers:  14,25,14,30,14                        |N numbers:  14,25,14,30,14
//      Another no: 14                                    |Another no: 10
//                                                        |
//      Output:     Frequency of 14 is 3                  |Output:     Frequency of 10 is 0
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int CalculateFrequency(int *Arr, int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] == iNo))
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iLength = 0, i = 0, iValue = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements:\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter the elements to findout the frequency :\n");
    scanf("%d", &iValue);

    iRet = CalculateFrequency(ptr, iLength, iValue);

    printf("frequency of %d is %d", iValue, iRet);

    free(ptr);

    return 0;
}