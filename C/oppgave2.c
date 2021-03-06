#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

int stringsum(char *s)
{
    int total = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            char temp = tolower(s[i]);
            int result = (int)temp - 96;
            total = total + result;
        }
        else
            return -1;
    }

    return total;
}

void stringsum2(char *s, int *res)
{
    *res = stringsum(s);
}
int distance_between(char *s, char c)
{
    if (strlen(s) <= 1)
    {
        return -1;
    }
    int array[2];
    int index = 0;
    int i = 0;

    while (index < strlen(s))
    {
        if (s[index] == c)
        {
            array[i] = index;
            i++;
            if (i == 2)
                break;
        }
        index++;
    }
    if (i == 2)
    {
        int tall = array[1] - array[0];
        return tall;
    }
    else
    {
        return -1;
    }
}

char *string_between(char *s, char c)
{
    int antall = 0;
    char *result;

    for (int j = 0; s[j] != '\0'; j++)
    {
        if (s[j] == c)
        {
            if (antall)
            {
                result = malloc(sizeof(char) * (j - antall) + 1);

                for (int l = 0; l < (j - antall); l++)
                {
                    result[l] = s[antall + l];
                }

                return result;
            }
            else
            {
                antall = j + 1;
            }
        }
    }

    return NULL;
}
