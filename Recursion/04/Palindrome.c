#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int checkPalindrome(int i, char s[], int n){
    if(i >= n/2) return 1;
    if(s[i] != s[n-i-1]) return 0;

    checkPalindrome(i+1, s, n);
}

int main(){
    // char s[] = "madsm";
    char s[] = "MAdam";
    // char s[] = "madam";
    int n = strlen(s);

    if(checkPalindrome(0, s, n)){
        printf("%s is palindrome", s);
    }else
        printf("%s is not palindrome", s);

}