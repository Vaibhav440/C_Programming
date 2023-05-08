//Problem Statement-:Write a program which accept number from user and print its table in reverse order.
//Time complexity-:O(N)

#include<stdio.h>
void TableRev(int iNo)
{
  int iCnt=1;

  if(iNo<0)
  {
    iNo=-(iNo);
  }
  
  for(iCnt=10;iCnt>=1;iCnt--)
  {
     printf("%d\t",iNo*iCnt);
  }
}
int main()
{
    int iValue=0;
    printf("Enter the Number::\n");
    scanf("%d",&iValue);
    TableRev(iValue);
    return 0;
}