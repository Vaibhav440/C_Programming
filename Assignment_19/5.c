/*

5. Accept number of rows and number of columns from user and display below 
pattern. 
Input : iRow = 4 iCol = 4 
Output :
1 2 3 4 
  2 3 4 
    3 4 
      4


*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=iRow;i>=1;i--)
    {
        for(j=iCol;j>=1;j--)
        {
            
        if(i>=j)
        {
         printf("*\t");
        }
        else
        {
         printf(" \t");
        }
       }
       
     printf("\n");
   }
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter the size of Row::\n");
    scanf("%d",&iValue1);
    printf("Enter the size of Column::\n");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}