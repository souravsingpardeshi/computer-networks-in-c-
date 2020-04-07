#include<stdio.h>
#include<string.h>
#include<conio.h>
void charcount();
void charstuff();
void bitstuff();
int main()
{
int s;
while(1)
{
  printf("\n\n\n\t************FRAMING METHODS**************\n");
  printf("1.char count \n2.char stuff \n3.bit stuff\nchoice=");
  scanf("%d",&s);
  switch(s)
  {
    case 1:
    charcount();
    break;
    case 2:
    charstuff();
    break;
    case 3:
    bitstuff();
    break;
  }
}
}
void charcount()
{
  int h,data[40],d,i,f[40],j;
  printf("\nenter the value for header\n");
  scanf("%d",&h);
  printf("enter the data=\t");
  d=h-1;
  for(i=0;i<d;i++)
  scanf("%d",&data[i]);
  printf("the frame to be transmitted is ==");
  j=0;
  f[0]=h;
  for(i=1;i<=h;i++);
{
  f[i]=data[j];
  j++;
}
for(i=0;i<h;i++)
{
  printf("|%d",f[i]);
  printf("|");
}}
void charstuff()
{
  int i=0,j=0,n,pos;
  char a[20],b[50],ch;
  printf("enter the string\n");
  scanf("%s",&a);
  n=strlen(a);
  printf("enter the position\n");
  scanf("%d",&pos);
if(pos>n)
{
printf("invalid position\nENTER AGAIN:");
scanf("%d",&pos);
}
printf("enter the character\n");
ch=getch();
b[0]='d';
b[1]='l';
b[2]='e';
b[3]='s';
b[4]='t';
b[4]='x';
j=6;
while(i<n)
{
  if(i==pos-1)
  {
    b[j]='d';
    b[j+1]='1';
    b[j+2]='e';
    b[j+3]='ch';
    b[j+4]='d';
    b[j+5]='1';
    b[j+6]='e';
    j=j+7;
  }
  if(a[i]=='d'&&a[i+1]=='1'&&a[i+2]=='e')
  {
  b[j]='d';
  b[j+1]='1';
  b[j+2]='e';
  j=j+3;
}
b[j]=a[i];
i++;
j++;
}
b[j]='d';
b[j+1]='1';
b[j+2]='e';
b[j+3]='e';
b[j+4]='t';
b[j+5]='x';
b[j+6]='\0';
printf("\nframes are stuffing\n");
printf("%s",b);
}
void bitstuff()
{
  int a[20],b[30],i,j,k,count,n;
  printf("enter the frames length\n");
  scanf("%d",&n);
  printf("enter the input frames(0's&1's only):");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  i=0;
  count=1;
  j=0;
  while(i<n)
  {
    if(a[i]==1)
    {
      b[j]=a[i];
      for(k=i+1;a[k]==1 && k<n && count<5;k++)
      {
        j++;
        b[j]=a[k];
        count++;
        if(count==5)
        {
          j++;
          b[j]=0;
        }
      i=k;}
    }
  else{b[j]=a[i];
  }
i++;
j++;
}
printf("after stuffing the frame is:");
for(i=0;i<j;i++)
printf("%d",b[i]);
}
