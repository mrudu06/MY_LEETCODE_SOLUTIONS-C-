/*
The problem is to find if the given string is palindrome and the constaraint given is to ignore alphanumericals .
The approach followed is checks if the start and end characters and the while loop is initialized when the start is less than end ,
so that the iterations is carried  out smoothly without any redundant checks.
*/


bool isPalindrome(char* s) 
{
    //initializing the start and end variables .
    int start = 0;
    int end = strlen(s) - 1;

    while (start<end) 
    {
        //Skip non-alphanumberic from the left.And if the character is alphanumeric it continues .
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }

        // Skip non-alphanumeric from the right.
        if (!isalnum(s[end])) 
        {
            end--;
            continue;
        }

        // Compare lowercase characters and if not equal it returns false .
        if (tolower(s[start]) != tolower(s[end])) 
        {
            return false;
        }

        // Move both pointers inward
        start++;
        end--;
         
    }
    return true;
}