//problem:Write a program which accept number from user and display all its non factors...
//Time Complexicity is O(N)
#include<stdio.h>

void NonFact(int iNo)
{
   int iCnt=1;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
      if((iNo%iCnt)!=0)
      {
         printf("%d\n",iCnt);
      }
   }
}
int main()
{
    int iValue=0;
    printf("Enter the Number::");
    scanf("%d",&iValue);
    NonFact(iValue);
    return 0;
}