#include <stdio.h>
int palindrome(int n);
int main() {
    int n, result;
    printf("Enter an integer to check whether a given ingeter is palindrome or not : ");
    scanf("%d", &n);
    result = palindrome(n);
    return 0;
}

int palindrome(int num) {
    int rev = 0, temp = num;
    while(temp > 0) {
        int dig = temp % 10;
        rev = rev*10 + dig;
        temp /= 10;
    }

    if(num == rev) {
        printf("Yes! %d is a palindrome.", num);
    }
    else {
        printf("No! %d is not a palindrome.", num);
    }

    
}
