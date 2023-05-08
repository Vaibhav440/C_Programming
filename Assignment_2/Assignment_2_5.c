#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
   if((iNo%2)==0)
   {
    return true;
   }
   else
   {
    return false;
   }
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter the number::");
    scanf("%d",&iValue);
    bRet=CheckEven(iValue);
    if(bRet==true)
    {
        printf("Number is even\n");
    }
    else if (bRet==false)
    {
        printf("Number is odd\n");
    }
    return 0;
}