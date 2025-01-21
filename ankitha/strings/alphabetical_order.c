/* Input: edbac
    output: abcde*/


#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int len = strlen(str);
    char temp;
    
    // Bubble sort to arrange characters in alphabetical order
    for (int i = 0; i < len ; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Input the string

    sortString(str);   // Sort the string

    printf("Sorted string: %s\n", str);  // Print the sorted string

    return 0;
}
