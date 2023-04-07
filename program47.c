////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept number from user and count no of digits in that number.
//
// INPUT:751          |INPUT:7515        |OUTPUT:75
// OUTPUT: 3          |OUTPUT:4          |INPUT:2
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("No of digits in number %d are : %d", iValue, iRet);

    return 0;
}

/*
iNo=751;

iDigit=iNo%10           1
iNo=iNo/10              75

iDigit=iNo%10           5
iNo=iNo/10              7

iDigit=iNo%10           7
iNo=iNo/10              0


iCnt=0;
while(iNo!=0)
{
    iNo=iN0/10;
    iCnt++;
}
*/
