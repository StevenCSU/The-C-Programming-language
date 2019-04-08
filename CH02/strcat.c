/* strcat: concatente t to end of s; s must be big enough */
void strcat(char s[], chat t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0')    /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0')   /* copy t*/
        ;
}

    
