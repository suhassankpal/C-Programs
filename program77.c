////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement:Accept N number from user and perform summation of even numbers and odd numbers
// INPUT:5,8,9,10,45                         |INPUT:9,4,5,6,2,3,7                        |OUTPUT:15,7,9,3,25,7,5
// OUTPUT:E:18  O:59                           |OUTPUT: E:12  O:24                       |INPUT: E:0  O:71
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplaySumOddEven(int *Arr, int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (((Arr[iCnt] % 2) == 0))
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    printf("Summation of Even numbers is %d\n", iSumEven);
    printf("Summation of odd numbers is %d\n", iSumOdd);
}

int main()
{
    int iLength = 0, i = 0;
    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements:\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    DisplaySumOddEven(ptr, iLength);

    free(ptr);

    return 0;
}