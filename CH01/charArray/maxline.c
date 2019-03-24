/**
 * while (还有未处理的行)
 * if （该行比已处理的最长行还要长）
 *      保存该行
 *      保存该行的长度
 * 打印最长的行
 * 
**/

#include <stdio.h>
#define MAXLINE 1000    /* 允许的输入行的最大长度 */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;     /* 当前行长度 */
    int max;     /* 目前为止发现的最长行的长度 */
    char line[MAXLINE];     /* 当前的输入行 */
    char longest[MAXLINE];      /* 用于保存最长的行 */ 

    max = 0;
    while((len = getlines(line, MAXLINE)) > 0){
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }
    return 0;
    
}

// getlines函数：将一行读入到s中并返回长度
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

// copy函数：将from复制到to；这里假设to足够大
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
    
}