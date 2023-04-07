////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept N number from user and return Average of that numbers
// INPUT:5,8,9,10,45                     |INPUT:9,4,5,6,2,3,7                |OUTPUT:9,7,9,6,9,7,8
// OUTPUT:15.00                          |OUTPUT:5.00                        |INPUT:7.00
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

// float Average(int Arr[], int iSize)

float Average(int *Arr, int iSize)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
        // iSum = iSum + *(Arr + iCnt);
    }

    return (iSum / iSize);
}

int main()
{
    int iLength = 0, i = 0;
    float fRet = 0.0f;

    int *ptr = NULL;

    printf("Enter the number of elements\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the numbers\n");

    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    fRet = Average(ptr, iLength);
    // fRet = Average(500, 5);

    printf("Average of given numbers is : %f", fRet);

    free(ptr);
    // free(500);

    return 0;
}