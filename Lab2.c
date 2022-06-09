#include <stdio.h>
char ans[100], str[100], pat[100], rep[100];
int flag, i, j, k, l, p;
void matchpattern()
{
    while (str[i] != '\0')
    {
        // Checking for Match
        if (str[j] == pat[p])
        {
            p++;
            j++;
            if (pat[p] == '\0') /*to check pattern reach end or not */
            {
                flag = 1;
                for (k = 0; rep[k] != '\0'; k++, l++) // copy replace string in ANS string
                {
                    ans[l] = rep[k];
                }
                p = 0; // if more occurence of pattern
                i = j; /*next character after pattern is matched */
            }
        }
        else // mismatch
        {
            ans[l] = str[i];
            l++;
            i++;
            j = i;
            p = 0;
        }
    }
    ans[l] = '\0';
}
void readstr()
{
    printf("Enter the main string: \n");
    scanf("%[^\n]", str);
    printf("Enter a pattern string: \n");
    scanf("%*c%[^\n]", pat); /* %*c is to skip enter keypress */
    printf("Enter a replace string: \n");
    scanf("%*c%[^\n]", rep);
}
main()
{
    readstr();
    matchpattern();
    if (flag == 0)
    {
        printf("Pattern not found!!!\n");
    }
    else
    {
        printf("The RESULTANT string is:\n%s\n", ans);
    }
}