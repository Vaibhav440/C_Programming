//Problem Statement-:Write a program which accept number from user and print that number of $ & * on screen.
//Time Complexity-:O(N)

#include<stdio.h>

void Pattern(int iNo)
{
   int iCnt=0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
     printf("\t$\t",iCnt);
     printf("*",iCnt);
   }
}
int main()
{
    int iValue=0;
    printf("Enter the no::");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}