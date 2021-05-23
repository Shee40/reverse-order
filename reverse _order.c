#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *fp;
  char ch,fname[30],newch[500];
  int i=0;j;COUNT=0;
  printf("enter the filename with extension:");
  gets(fname);
  fp=fopen(fname,"r");
  if(!fp)
  {
    printf("error in opening the file...\n exiting...");
    getch();
    return 0;
  }
  printf("\n the original content is:\n\n");
  ch=getc(fp);
  while(ch!=EOF)
  {
    COUNT++;
    putchar(ch);
    newch[i]=ch;
    i++;
    ch=getc(fp);
  }
  printf("\n\n\n");
  printf("the content in reverse order is:\n\n");
  for(j=(COUNT-1);j>=0;j--)
  {
    ch=newch[j];
    printf("%c",ch);
  }
  printf("\n");
  getch();
  return 0;
}
