//Problem statment-:Write a program which accept number from user and return multiplication of all digits.

#include<stdio.h>
int CountRange(int iNo)
{
    int iDigit=0;
    int iMul=1;
    if(iNo<0)
    {
        iNo=-(iNo);
    }
    while(iNo!=0)
    {
      iDigit=iNo%10;
      if(iDigit>0)
      {
        iMul=iMul*iDigit;
      }
      iNo=iNo/10;
    }
    return iMul;
}
int main()
{
   int iValue=0;
   int iRet=0;
   printf("Enter the number::\n");
   scanf("%d",&iValue);
   iRet=CountRange(iValue);
   printf("%d",iRet);
    return 0;
}