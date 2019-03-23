#include <stdio.h>

int main()
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    char c;

    while((c = getchar()) != 'Q')
    {
        if (c == ' '){
            ++n1;
        }
        if (c == '\t'){
            ++n2;
        }
       if (c == '\n'){
            ++n3;
       }
    }

    printf("\n空格计数=%d, 制表符计数=%d, 换行计数=%d\n", n1, n2, n3);

    return 0;
    
}