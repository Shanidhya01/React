#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("abc.txt","w");
fputc('D',fp); // character ‘D’ will be written to a file ‘abc.txt’
fputs("DSCE",fp); // string "DSCE” will be written to a file ‘abc.txt’
int n=5;
fprintf(fp,"%d",n); // integer 5(stored in n) will be written to a file ‘abc.txt’
return 0;
}
