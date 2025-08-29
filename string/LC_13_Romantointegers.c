/*
Description
The problem is to find the sum of the given roman numeral.
SO here i have initiafted two variables one for iteration and other for the sum/value.
TO fund the sum, the main constraints are adding the values like IV ,IX ,CD,CM.
As these require subtraction while others have to be added. So using a while loop the iteration is done and then the if-elseif-else 
ladder is used to check the symbols  also value of i is increased to iterate through the string and when 4,9,40,90 appears the 
addition is done accordingly but i is moved away two indexes to ensure that the symbol is not added twice . 
*/

int romanToInt(char* s) 
{

    int sum = 0; 
    int i = 0;
    while (s[i] != '\0') 
    {
        if (s[i] == 'I' && s[i+1] == 'V') 
        {
            sum += 4;
            i += 2;
        } 
        else if (s[i] == 'I' && s[i+1] == 'X') 
        {
            sum += 9;
            i += 2;
        } 
        else if (s[i] == 'X' && s[i+1] == 'L') 
        {
            sum += 40;
            i += 2;
        } 
        else if (s[i] == 'X' && s[i+1] == 'C') 
        {
            sum += 90;
            i += 2;
        } 
        else if (s[i] == 'C' && s[i+1] == 'D') 
        {
            sum += 400;
            i += 2;
        } 
        else if (s[i] == 'C' && s[i+1] == 'M') 
        {
            sum += 900;
            i += 2;
        } 
        else if (s[i] == 'I') 
        {
            sum += 1;
            i++;
        } 
        else if (s[i] == 'V') 
        {
            sum += 5;
            i++;
        } 
        else if (s[i] == 'X') 
        {
            sum += 10;
            i++;
        } 
        else if (s[i] == 'L') 
        {
            sum += 50;
            i++;
        } 
        else if (s[i] == 'C') 
        {
            sum += 100;
            i++;
        } 
        else if (s[i] == 'D') 
        {
            sum += 500;
            i++;
        } 
        else if (s[i] == 'M') 
        {
            sum += 1000;
            i++;
        } else {
            // Invalid character
            return -1;
        }
    }

    return sum;
}