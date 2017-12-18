#include <stdio.h>
#include <string.h>
char *my_token(char*ps);

int main(void)
{
    char str[80];
    char *p;

    printf("input : ");
    gets(str);

    while((p = my_token(str)) != NULL)
    {
        printf("%s \n",p);
    }
    
    return 0;
}
char *my_token(char *sp)
{
    static char *ap = NULL;
    static int end = 0;
    char *start;
    char *bp;
    if(sp == NULL) return NULL;
        if(end == 1) return NULL;
        if(ap == NULL) start = sp;
             else start = ap+1;
                bp=start;
    if(*bp == '\0') end = 1;
        else *bp = '\0';
        ap =  bp;    
        return start;
}
