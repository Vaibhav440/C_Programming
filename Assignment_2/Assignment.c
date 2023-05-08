#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
  int bflag=true;
  if((iNo%2)==0)
  {
    return bflag;
  }
  else 
  {
    if((iNo%2)!=0)
    {
       bflag=false;
    }
    return bflag;
  }
}
int main()
{
    int iValue=0;
    printf("Enter the number::\n");
    scanf("%d",&iValue);
    bool bRet=0;
    bRet=CheckEven(iValue);
    if(bRet==true)
    {
        printf("Even\n");
    }
    else if(bRet==false)
    {
        printf("ODD\n");
    }
    return 0;
}