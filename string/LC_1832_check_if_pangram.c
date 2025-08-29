#include<array_funcs.h>

bool checkIfPangram(char* sentence) 
{
    int alpha[26] = {0};

    for (int ch = 0; sentence[ch] != '\0'; ch++)
    {
        char character = sentence[ch];
        alpha[character - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
        {
            return false;
        }
    }

    return true;
}
