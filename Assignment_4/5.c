//problem Statment-:Write a program which accept total marks and obtained marks from user and calculate percentage.

#include<stdio.h>
float Percentage(float iNo1,float iNo2)
{
  float fAns=0;
  fAns=iNo1/iNo2*100;
  return fAns;
}
int main()
{
    int iTotal=0;
    int iObtained=0;
    float fRet=0.0;
    printf("Enter the Obtained marks..\n");
    scanf("%d",&iObtained);
    printf("Enter the Total marks::\n");
    scanf("%d",&iTotal);
    fRet=Percentage(iObtained,iTotal);
    printf("The Percentage is::%f",fRet);
    return 0;
}