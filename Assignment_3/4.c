//problem:Write a program which accept number from user and return summation of all its non factors.
//Time COMplecity:O(N)

#include<stdio.h>

int SumNonFact(int iNo)
{
   int iCnt=1;
   int iSum=0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
     if((iNo%iCnt)!=0)
     {
        iSum=iSum+iCnt;
     }
   }
   return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number::");
    scanf("%d",&iValue);
    iRet=SumNonFact(iValue);
    printf("%d is addition of all non factors of number %d",iRet,iValue);
    return 0;
}