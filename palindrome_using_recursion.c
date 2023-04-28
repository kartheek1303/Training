#include <stdio.h>
#include <string.h>
int isPalindrome(char *str, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (str[start] == str[end]) {
        return isPalindrome(str, start + 1, end - 1);
    } else {
        return 0;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    int result = isPalindrome(str, 0, len - 1);
    if (result == 1) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
