//Problem statment-: Write a program whic accept name from user and print that name

#include<stdio.h>
#include<conio.h>
int main()
{
    char Name[30];
    printf("Enter your Name::");
    gets(Name);
    printf("Your name is %s",Name);
    return 0;
}