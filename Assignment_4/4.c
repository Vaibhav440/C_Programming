//problem Statment-:Write a application which accept three numbers and prints its multiplication.


#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iAns=1;
    if((iNo1)!=0)
    {
        iAns=iAns*iNo1;
    }
    if((iNo2)!=0)
    {
        iAns=iAns*iNo2;
    }
    if((iNo3)!=0)
    {
        iAns=iAns*iNo3;
    }
    return iAns;
}
int main()
{
    int iValue1,iValue2,iValue3=0;
    printf("Enter the no::");
    scanf("%d\t %d\t %d",&iValue1,&iValue2,&iValue3);
    int iRet=0;
    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("The multiplication is :: %d \n",iRet);
    return 0;
}