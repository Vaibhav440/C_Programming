//Problem statment-:Write a program whic accept one number from user and check whether that number is greater than 100 or not


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
  if(iNo>100)
  {
    return 1;
  }
  else
  {
    return 0;
  }

}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Please enter your number::\n");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);
    if(bRet==TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}