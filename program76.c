////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept N number from user and Display odd even count
// INPUT:5,8,9,10,45                         |INPUT:9,4,5,6,2,3,7                        |OUTPUT:15,7,9,3,25,7,5
// OUTPUT:E:2  O:3                           |OUTPUT: E:3  O:4                           |INPUT: E:0  O:7
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayOddEvenCount(int *Arr, int iSize)
{
    int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (((Arr[iCnt] % 2) == 0))
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }

    printf("Count of Even numbers is %d\n", iEvenCnt);
    printf("Count of odd numbers is %d\n", iOddCnt);
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

    DisplayOddEvenCount(ptr, iLength);

    free(ptr);

    return 0;
}