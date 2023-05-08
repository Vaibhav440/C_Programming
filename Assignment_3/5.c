//Problem::Write a program which accept numbers from user and return difference between summation of all its factors and non factors
//Time Complexcity:O(N)

#include<stdio.h>

int DiffFact(int iNo)
{
  int iCnt=1;
  int iSum1=0;
  int iSum2=0;
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if((iNo%iCnt)==0)
    {
        iSum1=iSum1+iCnt;
    }
    else
    {
       iSum2=iSum2+iCnt;
    }
  }
  return iSum1-iSum2;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number::");
    scanf("%d",&iValue);
    iRet=DiffFact(iValue);
    printf("%d is addition of all non factors and factors  of number %d",iRet,iValue);
    return 0;
}