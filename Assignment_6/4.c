//Problem Statement-:Write a program which accept number from user and print its table.
//Time complexity-:O(N)

#include<stdio.h>
void Table(int iNo)
{
  int iCnt=1;

  if(iNo<0)
  {
    iNo=-(iNo);
  }
  
  for(iCnt=1;iCnt<=10;iCnt++)
  {
     printf("%d\t",iNo*iCnt);
  }
}
int main()
{
    int iValue=0;
    printf("Enter the Number::\n");
    scanf("%d",&iValue);
    Table(iValue);
    return 0;
}