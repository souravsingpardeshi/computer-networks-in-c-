#include<stdio.h>
#include<math.h>
int main()
{
int data[30],tra[30],res[30],r=0,i,j,k,c,m,pos,cnt=0;
printf("\n \n \t Transmitter Side ");
printf("\n\n Enter the length of data : ");
scanf("%d",&m);
printf("\n\n Enter the %d data bits : ", m);
for(i=0;i<m;i++)
scanf("%d",&data[i]);
while(m+r+1>=pow(2,r))
r++;
printf("\n\n Number of check bits are : %d", r);
for(i=1,j=0,k=0;i<=m+r;i++)
tra[i]=0;
for(i=1,j=0;i<=m+r;i++)
{
if(i==pow(2,j))
j++;
else
{
tra[i]=data[cnt];
cnt++;
}
}
// Printing data after adding check bits
printf("\n\n After adding check bits : ");
for(i=1;i<=(m+r);i++)
printf("%d",tra[i]);
// Getting values for check bits
for(i=0;i<r ; i++)
{
c=0;
pos=pow(2,i);
for(j=pos;j&lt=m+r;j=j+(2*pos))
for(k=j;k<=m+r&&k<(j+pos);k++)
c=c^tra[k];
printf("\n c%d = %d ",i,c);
tra[pos]=c;
}
// Print Transmitted data
printf("\n\n Transmitted data : ");
for(i=1;i<=m+r;i++)
printf("%d",tra[i]);
printf("\n\n Now turn to receiver side --->");
return 0;
}
