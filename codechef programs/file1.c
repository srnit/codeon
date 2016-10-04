#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  FILE * fp;
  char ch[250];
  fp=fopen("pr1.txt","w");
  if(fp==NULL)
  {puts("canot open file");
  exit(1);
}
puts("enter few line");
while(strlen(gets(ch))>0)
{
  fputs(ch,fp);
  fputs("\n",fp);
}
fclose(fp);
fp=fopen("pr1.txt","r");
if(fp==NULL)
{puts("canot open file");
exit(1);
}
puts("content of the file is\n");
while(fgets(ch,250,fp)!=NULL)
{
  puts(ch);
}
fclose(fp);

}
