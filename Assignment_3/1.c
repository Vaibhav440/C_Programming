#include<stdio.h>
int Multiplication(int iNo)
{
   int iCnt=0;
   int iAns=1;
   
   if(iNo<0)    //Updater
   {
    iNo=-(iNo);
   }

   for(iCnt=1;iCnt<=(iNo/2);iCnt++) //Time Complexcity is O(N/2)
   {
      if((iNo%iCnt)==0)
      {
         iAns=iAns*iCnt;
      }
   }
   return iAns;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number::");
    scanf("%d",&iValue);
    iRet=Multiplication(iValue);
    printf("Multiplication of factors are %d",iRet);
    return 0;
}