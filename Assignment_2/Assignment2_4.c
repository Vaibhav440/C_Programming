#include<stdio.h>
void Display(int iNo,int iFrequency)
{
  int iCnt=0;
  for(iCnt=0;iCnt<iFrequency;iCnt++)
  {
    printf("%d\n",iNo);
  }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter number::");
    scanf("%d",&iValue1);
    printf("Enter Frequence::");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}