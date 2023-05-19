/*
1. Accept number of rows and number of columns from user and display 
below pattern. 
Input : iRow = 4 iCol = 4 
Output : 1 2 3 4 
 5 6 7 8 
 9 1 2 3 
 4 5 6 7
*/

//Problem Statement-:Accept number of rows and number of columns from user and display below pattern.

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    int iNo=1;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(iNo<=9)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            else
            {
                iNo=1;
                printf("%d\t",iNo);
                iNo++;

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
