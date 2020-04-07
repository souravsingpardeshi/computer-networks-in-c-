#include<stdio.h>
#include<conio.h>
#include<stdio.h>
int main()
{
char sender[50],receiver[50];
int i,ws;
printf("\nenter the window size:\n\t");
scanf("%d",&ws);
printf("sender window is expanded to store message or window\n");
printf("enter the data to sent:");
gets(sender);
for(i=0;i<ws;i++){
  receiver[i]=sender[i];
  receiver[i]='\0';
}
printf("message send by the sender\n");
puts(sender);
printf("windows size of receiver expanded\n");
printf("\nack from receiver\n");
for(i=0;i<ws;i++){
  printf("\nACK:%d",i);
}
printf("\nmessage recieved by reciever is :");
puts(receiver);
printf("windows size of reciever is shrinked\n");
return 0;
}
