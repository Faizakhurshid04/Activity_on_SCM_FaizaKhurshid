#include <stdio.h>
int main()
{
    int n;
    int revInteger = 0, remainder, origInteger;
    printf("Enter an integer: ");
    scanf("%d", &n);
    origInteger = n;
    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        revInteger = revInteger*10 + remainder;
        n /= 10;
    }
    // palindrome if origInteger and revInteger are equal
    if (origInteger == revInteger)
        printf("%d is a palindrome.", origInteger);
    else
        printf("%d is not a palindrome.", origInteger);
    
    return 0;
}
