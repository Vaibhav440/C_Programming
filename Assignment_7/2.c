//Write a program which accept number from user and check whether it contains 0 in it or not

#include<stdio.h>
#include<stdbool.h>
bool ChkZero(int iNo,int iSearch)
{
   int  iDigit=0;
   bool bflag=false;
   while(iNo!=0)
   {
      iDigit=iNo%10;
      
      if(iDigit==iSearch)
      {
        bflag=true;
        break;
      }
      iNo=iNo/10;
   }
   return bflag;
}
int main()
{
   int iValue1=0;
   int iValue2=0;
   bool bRet=false;
   printf("Enter the  Actual number::");
   scanf("%d",&iValue1);
   printf("Enter the number which we want to search::\n");
   scanf("%d",&iValue2);
   bRet=ChkZero(iValue1,iValue2);
   if(bRet==true)
   {
      printf("It contains zero\n");
   }
   else
   {
      printf("It does not contains zero");
   }
   return 0;
}
