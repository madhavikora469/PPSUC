#include <stdio.h>

int main() {
    char s1[100], s2[100], copy[100];
    int i, j;

    printf("Enter string 1: ");
    scanf("%s", s1);

    printf("Enter string 2: ");
    scanf("%s", s2);

    // Length of s1
    for(i=0; s1[i]!='\0'; i++);
    printf("Length of s1 = %d\n", i);

    // Copy
    for(i=0; s1[i]!='\0'; i++)
        copy[i] = s1[i];
    copy[i]='\0';
    printf("Copy of s1 = %s\n", copy);

    // Compare
    int flag=0;
    for(i=0; s1[i]!='\0' || s2[i]!='\0'; i++) {
        if(s1[i] != s2[i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("Strings equal\n");
    else printf("Strings not equal\n");

    // Concat
    for(i=0; s1[i]!='\0'; i++);
    for(j=0; s2[j]!='\0'; j++)
        s1[i+j] = s2[j];
    s1[i+j] = '\0';

    printf("Concatenation = %s\n", s1);

    return 0;
}

