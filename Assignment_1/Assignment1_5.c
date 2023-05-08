#include<stdio.h>
void Diaplay(int iNo)
{
  int iCnt=0;
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {
    printf("*\n",iCnt);
  }
}
int main()
{
  int iValue=0;
  printf("Enter the number..\n");
  scanf("%d",&iValue);
  Diaplay(iValue);
  return 0;
}