#include <stdio.h>

// Function to find string length
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

// Function to copy string
void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to compare two strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

// Function to concatenate two strings
void stringConcat(char str1[], char str2[]) {
    int i = 0, j = 0;

    // move to end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // append str2
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100], copy[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\n--- String Operations Menu ---\n");
    printf("1. Length of strings\n");
    printf("2. Copy string 1 to another\n");
    printf("3. Compare strings\n");
    printf("4. Concatenate strings\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of string 1 = %d\n", stringLength(str1));
            printf("Length of string 2 = %d\n", stringLength(str2));
            break;

        case 2:
            stringCopy(copy, str1);
            printf("Copied string = %s\n", copy);
            break;

        case 3:
            if (stringCompare(str1, str2) == 0)
                printf("Both strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 4:
            stringConcat(str1, str2);
            printf("Concatenated string = %s\n", str1);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

