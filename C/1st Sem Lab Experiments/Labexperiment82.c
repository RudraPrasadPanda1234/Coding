/* Write a program to input two strings and test whether they are equal or not using string handling
functions */
#include<stdio.h>
#include<string.h>
int compare(char [],char []);
int main()
{
     char str1[20];   //declartion of char aaray
     char str2[20];   //declartion of char aaray
     printf("Enter the first string :");
     scanf("%s",str1);
     printf("Enter the second string :");
     scanf("%s",str2);
     int c=compare(str1,str2);//calling comapre() function 
     if(c==0)     //Also can br written (c==1)
     printf("strings are same");
     else
     printf("strings are not same");
     return 0;
}
     //comparing both strings 
int compare(char a[],char b[])
     {
        int flag=0,i=0;  //Integer variable declaration 
        while(a[i]!='\0'&&b[i]!='\0') //While loop
        {
        if(a[i]!=b[i])    //if(a[i]==b[i])
        {
            flag=1;
            break;
        }
        i++;
     }
     if(flag==0)         //if(flag==1)
     return 0;           //return 1; 
     else                //else
     return 1;           //return 0;
}