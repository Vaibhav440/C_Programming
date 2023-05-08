//Problem statment-:Write a program to find factorial of given number.
//Time Complexity-:O(N)
#include<stdio.h>
int Factorial(int iNo)
{
   int iCnt=0;
   int iAns=1;
   for(iCnt=iNo;iCnt>=1;iCnt--)
   {
      iAns=iAns*iCnt;
   }
   return iAns;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number::\n");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);
    printf("Factorial of number is %d",iRet);
    return 0;
}