/*
The problem is to find if the given string is palindrome and the constaraint given is to ignore alphanumericals .
The approach followed is checks if the start and end characters and the while loop is initialized when the start is less than end ,
so that the iterations is carried  out smoothly without any redundant checks.
*/


bool isPalindrome(char* s) 
{
    //Initializing the start and end pointers.
    int start = 0;
    int end = strlen(s) - 1;

    while (start<end) 
    {
        //Skips non-alphanumberic from the left.
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }

        // Skips non-alphanumeric from the right.
        if (!isalnum(s[end])) 
        {
            end--;
            continue;
        }

        // Compares lowercase characters and if not equal it returns false.
        if (tolower(s[start]) != tolower(s[end])) 
        {
            return false;
        }

        // Moves both pointers inward.
        start++;
        end--;
         
    }
    return true;
}
