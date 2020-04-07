# include <stdio.h>
# include <string.h>
# include <conio.h>
int main()
{
  long int ac;
  char sd,ed,data[200],dest[10],src[10],check,fs;
  int len,i,cnt=0,fc;

  printf("\n\n\t ~~~~~~~~ IEEE Std 802.5 Frame Format ~~~~~~~~~\n");
  printf("\n --------------------------------------------------------------------------");
  printf("\n | SD | Access Ctrl | Frame Ctrl | Dest | Src | Data | Checksum | ED | FS |");
  printf("\n --------------------------------------------------------------------------");

  printf("\n\n  Enter the start delimiter : ");
  //flushall();
  scanf("%c",&sd);
  printf("\n  Enter the end delimiter : ");
//  flushall();
  scanf("%c",&ed);
  printf("\n  Enter the Destination Address : ");
  //flushall();
  gets(dest);
  printf("\n  Enter the Source Address : ");
  //flushall();
  gets(src);
  printf("\n Enter the bits in access control : ");
  scanf("%ld",&ac);
  printf("\n  Press 1 for [control frame] or 0 for [data frame] : ");
  //flushall();
  scanf("%d",&fc);
  if(fc==0)
 {
  printf("\n  Enter the data : ");
  //flushall();
  gets(data);

	 for(i=0;data[i]!='\n';i++)
       {
	    if(data[i]=='a')
	     cnt++;
       }
	if(cnt%2==0)
	  check='E';
	else
	  check='O';

  printf("\n Enter the frame status [a/c] : ");
  //flushall();
  scanf("%c",&fs);

  printf("\n\n  Now Turn To Output Window -> ");
  return 0;
  // Displaying Frame Format

  printf("\n\n***** Control Frame ***** ");
  printf("\n\n\t ~~~~~~~~ IEEE Std 802.5 Frame Format ~~~~~~~~~\n");
  printf("\n --------------------------------------------------------------------------");
  printf("\n | SD | Access Ctrl | Frame Ctrl | Dest | Src | Data | Checksum | ED | FS |");
  printf("\n --------------------------------------------------------------------------");
  printf("\n | %ld | %c | %d | %s | %s | %s | %c | %c | %c |",sd,ac,fc,dest,src,data,check,ed,fs);
  printf("\n --------------------------------------------------------------------------");

}
else
 if(fc==1)
 {
  printf("\n\n  Now Turn To Output Window -> ");
  return 0;
  // Displaying Frame Format


  printf("\n\n***** Control Frame ***** ");
  printf("\n\n\t ~~~~~~~~ IEEE Std 802.5 Frame Format ~~~~~~~~~\n");
  printf("\n --------------------------------------------------------------------------");
  printf("\n | SD | Access Ctrl | Frame Ctrl | Dest | Src | Data | Checksum | ED | FS |");
  printf("\n --------------------------------------------------------------------------");
  printf("\n | %ld | %c | %d | %s | %s | ",sd,ac,fc,dest,src);
  printf("\n --------------------------------------------------------------------------");
 }
  return 0;
}
