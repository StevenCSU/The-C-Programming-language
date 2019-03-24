#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
int removeTab(char line[]);

int main()
{

}

int getlines(char s[], int lim)
{
    int c, i;
    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int removeTab(char line[])
{
    //todo
    return 0;
}