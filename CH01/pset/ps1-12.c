#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    char c;
    int nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar()) != EOF){
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == '\n' || c == ' ' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
            putchar('\n');
            putchar(c);
        }
        else if (state == IN)
            putchar(c);
    }

    printf("\n%d %d %d \n", nl, nw, nc);

    return 0;
    
}