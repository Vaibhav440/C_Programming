//Problem Statement-:Write a program which accept N and print first 5 multiples of N
//Time Complexity-:O(N)

void MultipleDisplay(int iNo)
{
  int iCnt=0;
  for(iCnt=1;iCnt<=5;iCnt++)
  {
     printf("%d\n",5*iCnt);
  }
}
int main()
{
    
    int iValue=0;
    printf("Enter the no::");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}