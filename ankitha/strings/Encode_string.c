#include <stdio.h>

int main() {
    char input[100];
    char first_name[50], last_name[50], id[50];
    int i = 0, j = 0;

    // Read the input string
    printf("Enter the input string: ");
    scanf("%s", input);

    // Extract the first name
    while (input[i] != '0') {
        first_name[j++] = input[i++];
    }
    first_name[j] = '\0'; // Null-terminate the string

    // Skip zeros
    while (input[i] == '0') {
        i++;
    }

    // Extract the last name
    j = 0;
    while (input[i] != '0') {
        last_name[j++] = input[i++];
    }
    last_name[j] = '\0'; // Null-terminate the string

    // Skip zeros
    while (input[i] == '0') {
        i++;
    }

    // Extract the ID
    j = 0;
    while (input[i] != '\0') {
        id[j++] = input[i++];
    }
    id[j] = '\0'; // Null-terminate the string

    // Print the JSON-like output
    printf("{\"First name\": \"%s\", \"Last name\": \"%s\", \"id\": \"%s\"}\n", first_name, last_name, id);

    return 0;
}
