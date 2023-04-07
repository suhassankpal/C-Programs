/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Q-Take two number from user and perform multiplication on two number(with functional aproach)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Multiplication(int iValue1, int iValue2)
{
    int iMultiply = 0;

    iMultiply = iValue1 * iValue2;
    return iMultiply;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;

    printf("Enter first number:\n");
    scanf("%d", &iNo1);

    printf("Enter second number:\n");
    scanf("%d", &iNo2);

    iRet = Multiplication(iNo1, iNo2);

    printf("Multiplication of two number is:%d\n", iRet);

    return 0;
}