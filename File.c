#include<stdio.h>
#include<stdlib>
int main()
{
FILE *fp;
int ft,i=0;
fp=fopen("My Captain.txt","r");
if(fp==NULL)
{
Printf ("ERROR");
return 0;
}
fseek(fp,0,SEEK_END);
ft=ftell(fp);
While(i<ft)
{
i++;
fseek(fp,-i,SEEK_END);
Printf("%c",fgetc(fp));
}
fclose(fp);
return 0;
}
