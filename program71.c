////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Problems on 'N' numbers (Array,Dynamic memory allocation)
//
//  Problem statement:Accept N number from user and perform Addition of that numbers
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Addition(int Data[], int iSize) //(int *Data,iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Data[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 0;
    int iRet = 0;

    printf("Enter numbers of elements that you want to store\n");
    scanf("%d", &iLength);

    int *ptr = NULL;

    ptr = (int *)malloc(sizeof(int) * iLength); // Dynamic memory allocation by malptr

    printf("Enter the elements\n");
    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }

    iRet = Addition(ptr, iLength); // Addition(100,5)

    printf("\nAddition of all elements is : %d", iRet);

    free(ptr);

    return 0;
}
