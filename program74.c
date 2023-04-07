////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept N number from user and count numbers of even numbers from that number
// INPUT:5,8,9,10,45                  |INPUT:9,4,5,6,2,3,7               |OUTPUT:15,7,9,3,25,7,5
// OUTPUT:EVENCOUNT :2                |OUTPUT: EVENCOUNT :3              |INPUT: EVENCOUNT :0
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int CountEven(int *Arr, int iSize)
{
    int iCnt = 0, EvenCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (((Arr[iCnt] % 2) == 0))
        {
            EvenCnt++;
        }
    }

    return EvenCnt;
}

int main()
{
    int iLength = 0, i = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements:\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    iRet = CountEven(ptr, iLength);

    printf("Count of even numbers from that given numbers : %d", iRet);

    free(ptr);

    return 0;
}