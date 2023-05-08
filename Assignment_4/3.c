//problem statment-:Write a program which accept two numbers and chek wheter numbers are equal or not.


#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Chkequal(int iNo1,int iNo2)
{
  if(iNo1==iNo2)
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
    int iValue1=0;
    int iValue2=0;
    BOOL bRet=FALSE;
    printf("Please enter first your number::\n");
    scanf("%d",&iValue1);
    printf("Please enter second your number::\n");
    scanf("%d",&iValue2);
    bRet=Chkequal(iValue1,iValue2);
    if(bRet==TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    return 0;
}
