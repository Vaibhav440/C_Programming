#include<stdio.h>

void Display(int iNo)
{
  int iCnt=0;
  iCnt=1;
  while(iNo>=iCnt)
  {
    printf("*\t\t");
    iNo--;
  }

}

int main()
{
    int iValue=0;
    printf("Enter the number::");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}