//Problem Statement-: Write a program which accept number from user and print numbers till that number
//Time complexity-:O(N)

#include<stdio.h>

void Display(int iNo)
{
  int iCnt=0;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
     printf("%d\n",iCnt);
  }
}
int main()
{
    
    int iValue=0;
    printf("Enter the no::");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}