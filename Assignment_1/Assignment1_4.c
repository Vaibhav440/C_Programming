#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
  if((iNo%5)==0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}
int main()
{
  int iValue=0;
  BOOL bRet=FALSE;

  printf("Enter number\n");
  scanf("%d",&iValue);

  bRet=Check(iValue);

  if(bRet==TRUE)
  {
    printf("DIVISIBLE BY 5\n");
  }
  else
  {
    printf("NOT DIVISIBLE BY 5\n");
  }  
  return 0;
}