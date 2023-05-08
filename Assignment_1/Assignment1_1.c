//program to divide two numbers...

#include<stdio.h>

int Divide(int No1,int No2)
{
   int iAns=0; 

   if(No2<0)        //Updater
   {
     No2=-(No2);
   }

   if(No2>No1)     // 
   {
     return 0;
   }

   iAns=No1/No2;

   return iAns;
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter First Number::\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number::\n");
    scanf("%d",&iValue2);

    int iRet=0;
    iRet=Divide(iValue1,iValue2);
    printf("Division is %d",iRet);
    return 0;
}
