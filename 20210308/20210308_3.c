
#include <stdio.h>
int main() {
//int mchar = fgetc(pfile);
FILE *fp;
int c;
fp = fopen("C:\\Users\\Veselin\\Desktop\\Code-Academy\\20210308\\test1.txt","rt");
if(fp==NULL) {
 perror ("Error in opening file");
 return (-1);
 }
while ((c=fgetc(fp)) != EOF)
 printf("%c", c);
fclose(fp);
fp=NULL;
return 0;
}