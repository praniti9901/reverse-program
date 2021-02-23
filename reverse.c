#include <stdio.h>
#include <conio.h>
void main()
{
FILE *fr;
int cnt=0, i=0;
char c;
fr=fopen("reverse.txt","r");
if(fr==NULL)
{
puts("Cannot open file to read ");
 }
fseek(fr,0,SEEK_END);
cnt=ftell(fr);
while(i<cnt)
{
i++;
fseek(fr,-i,SEEK_END);
c=getc(fr);
}
printf("%c",c);
}
