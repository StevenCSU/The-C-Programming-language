/**
 * 编写一个程序，打印长度大于80个字符的所有输入行
 * while 还有未处理的行
 *      if 行长度大于80
 *          打印该行
**/

#include <stdio.h>
#define MAXLINE 1000    //规定行数最多1000行

int getlines(char line[], int maxline);

int main()
{
    int len;    // length of the current line
    int max;    // define how long we want to get. eg. max = 80, we'll pick line's length larger than 80
    char line[MAXLINE];      // current line 

    max = 80;
    while ((len = getlines(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            printf("%s", line);
        }
    }

    return 0;
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
