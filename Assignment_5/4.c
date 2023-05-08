//Problem Statement-:Write a program which accept N numbers from user and print all odd numbers up to N.
//Time Comlexity-:O(N)

#include<stdio.h>

void OddDisplay(int iNo)
{
     int iCnt=0;
     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
      if((iCnt%2)!=0)
      {
        printf("%d",iCnt);
      }
     }

}
int main()
{
    
    int iValue=0;
    printf("Enter the no::");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    return 0;
}