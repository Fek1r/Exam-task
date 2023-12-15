#include <stdio.h>

int main() {
    FILE *file;
    char userInput[256];
    file = fopen("user_input.txt", "w");

    printf("Enter a word:\n");
    scanf("%[^\n]%*c", userInput);

    printf("%s ", userInput);
    fprintf(file, "%s", userInput);

    fclose(file);

    return 0;
}