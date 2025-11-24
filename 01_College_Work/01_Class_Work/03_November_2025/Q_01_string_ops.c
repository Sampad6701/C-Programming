/*
Write a C Program that performs the following operations on strings:
1. Accept 2 strings from the user.
2. Display the length of each string.
3. Concatenate the 2 strings and display the result.
4. Copy the 1st string into another variable and display the result.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char string_1[100], string_2[100], string_3[200], copy_string[100];

    // 1. Accept 2 strings from the user.
    printf("Enter the first string: ");
    fgets(string_1, sizeof(string_1), stdin);

    printf("Enter the second string: ");
    fgets(string_2, sizeof(string_2), stdin);

    // Remove trailing newline from fgets()
    string_1[strcspn(string_1, "\n")] = '\0';
    string_2[strcspn(string_2, "\n")] = '\0';

    // 2. Display the length of each string.
    printf("Length of string 1: %d\n", strlen(string_1));
    printf("Length of string 2: %d\n", strlen(string_2));

    // 3. Concatenate the 2 strings and display the result.
    strcpy(string_3, string_1);
    strcat(string_3, string_2);

    printf("Concatenated string: %s\n", string_3);

    // 4. Copy the 1st string into another variable and display the result.
    strcpy(copy_string, string_1);
    printf("Copy of string 1: %s\n", copy_string);

    return 0;
}
