#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentences = 0;

    int n = strlen(text);

    for (int i = 0; i < n; i++)
    {
        char c = text[i];

        if (isalpha(c))
        {
            letters++;
        }

        if (isspace(c))
        {
            words++;
        }

        if (c == '.' || c == '!' || c == '?')
        {
            sentences++;
        }
    }

    double L = ((double)letters / words) * 100;
    double S = ((double)sentences / words) * 100;

    double index = 0.0588 * L - 0.296 * S - 15.8;

    int grade = round(index);

    printf("L: %f, S: %f, Index: %f\n", L, S, index);

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
