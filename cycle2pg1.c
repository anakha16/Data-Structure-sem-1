#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void unin(char*,char*,char*);
void intersection(char*,char*,char*);
void difference(char*,char*,char*);
void main()
{
char s1[10],s2[10],s3[10];

printf("enter the elements of 1st array:\n");
scanf("%s",s1);
printf("enter the element of 2nd array:\n");
scanf("%s",s2);
unin(s1,s2,s3);
printf("unin is:%s\n",s3);
intersection(s1,s2,s3);
printf("intersection is:%s\n",s3);
difference(s1,s2,s3);
printf("difference is:%s\n",s3);
}
void unin(char*s1,char*s2,char*s3)
{
int l,i;
l=strlen(s1);
for(i=0;i<l;i++)
if(s1[i]=='0'&&s2[i]=='0')
{
s3[i]='0';
}
else
{
s3[i]='1';
}
}
void intersection(char*s1,char*s2,char*s3)
{
int l,i;
l=strlen(s1);
for(i=0;i<l;i++)
if(s1[i]=='1'&&s2[i]=='1')
{
s3[i]='1';
}
else
{
s3[i]='0';
}
}void difference(char*s1,char*s2,char*s3)
{
int l,i;
l=strlen(s1);
for(i=0;i<l;i++)
if(s1[i]=='1'&&s2[i]=='0')
{
s3[i]='1';
}
else
{
s3[i]='0';
}
}

