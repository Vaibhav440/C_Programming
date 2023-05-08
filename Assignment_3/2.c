//Problem Statment: Write A Program which accept number from user and display its factors in decresing order..
//Time complexicity=O(N/2)
#include<stdio.h>
void FactRev(int iNo)
{
   int iCnt=0;

  /* for(iCnt=(iNo/2);iCnt>=1;iCnt--)
   {
     if((iNo%iCnt)==0)
     {
        printf("%d\n",iCnt);
     }
   }
   */

   iCnt=(iNo/2);
   while(iCnt>=1)
   {
    if((iNo%iCnt)==0)
     {
        printf("%d\n",iCnt);
     }
     iCnt--;
   }
}
int main()
{
    int iValue=0;
    printf("Enter the Number::");
    scanf("%d",&iValue);
    FactRev(iValue);
    return 0;
}