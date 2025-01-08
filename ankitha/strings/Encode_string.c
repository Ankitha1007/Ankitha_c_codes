/* write a function that accepts an encodded string as a parameter. This string will contain a first name,last anme,id
 values in the string can be seperated by any number of zeros. the id is a numeric value but will contain no zeros. 
 The function should parse the string and return a structure that contain the first name,last name,id value
 input: Ankitha00000Kothapally0000012345
 output: {"First name": "Ankitha", "Last name": "Kothapally", "id": "12345"}*/


#include <stdio.h>
#include <string.h>

void parse_input(const char *input, char *result) {
    char first_name[50], last_name[50], id[50];
    int i = 0, j = 0;

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

    // Build the JSON-like result string
    sprintf(result, "{\"First name\": \"%s\", \"Last name\": \"%s\", \"id\": \"%s\"}", first_name, last_name, id);
}

int main() {
    char input[100];
    char result[200];

    // Read the input string
    printf("Enter the input string: ");
    scanf("%s", input);

    // Parse and build the JSON-like output
    parse_input(input, result);

    // Print the result
    printf("%s\n", result);

    return 0;
}

/*#include <stdio.h>

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
}*/
