#include <stdio.h>

int main() {
    int n, temp, rev = 0, r;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        r = temp % 10;
        rev = rev * 10 + r;
        temp /= 10;
    }

    if(n == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

