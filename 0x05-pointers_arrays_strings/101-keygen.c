#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

// Function to generate a random valid password
void generateRandomPassword(char *password) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    int charset_length = sizeof(charset) - 1;

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int random_index = rand() % charset_length;
        password[i] = charset[random_index];
    }
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the string
}

int main() {
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    srand(time(NULL)); // Seed the random number generator with the current time

    generateRandomPassword(password);

    printf("Random Password: %s\n", password);
    return 0;
}
