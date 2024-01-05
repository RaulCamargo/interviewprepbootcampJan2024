/*
    LeetCode 125: Valid Palindrome
    Given a string s, return true if it is a palindrome, or false otherwise.
*/

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
        int last = s.size() - 1;
        char *ptrL = &s[0];
        char *ptrR = &s[last];

        while(ptrL < ptrR)
        {
            if(!isalnum(*ptrL))
            {
                ptrL++;
                continue;
            }
            if(!isalnum(*ptrR))
            {
                ptrR--;
                continue;
            }
                
            if(tolower(*ptrL) == tolower(*ptrR))
            {
                ptrL++;
                ptrR--;
            }
            else
                return false;
        }
        return true;

    }