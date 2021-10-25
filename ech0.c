#include <stdio.h>
#define SIZE_OF_BUFFER 0xfffff
int main(int argc,char* argv[])
{
    FILE *fp;
    char buff[SIZE_OF_BUFFER];
    size_t s,i=0;;
    int j;
    for(j=1;j<argc;j++)
    {
        fp=fopen(argv[j],"r");
        s=fread(buff,1,SIZE_OF_BUFFER,fp);
        printf("------- START OF [%s] --------\r\n",argv[j]);
        for(i=0;i<s;i++)putchar(buff[i]);
        printf("\r\n------------- %s -------------\r\n",s==SIZE_OF_BUFFER?"OVF!":"EOF");
        fclose(fp);
    }
    return 0;
}