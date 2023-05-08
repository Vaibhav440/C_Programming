//Problem Statement-:Write a program which accept number from user and print its numbers line.
//Time comlexity-O(N)

#include<stdio.h>

void Display(int iNo)
{
  int iCnt=0;
  for(iCnt=-(iNo);iCnt<=iNo;iCnt++)
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