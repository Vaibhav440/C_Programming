//Poblem Statement-:Write a program which accept numbetr from user and if number is less than 50 then print small .if it is greater than 50 and less then 100 then print medium if it is greater than 100 then print karge

#include<stdio.h>
void Number(int iNo)
{
   if(iNo<50)
   {
    printf("Small\n");
   }
   else if(iNo>50 && iNo<100)
   {
     printf("Medium\n");
   }
   else
   {
     printf("Large");
   }
}
int main()
{
    int iValue=0;
    printf("Enter the Number::\n");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;
}