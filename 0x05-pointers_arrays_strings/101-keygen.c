#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

// Function to generate a random character between 'a' and 'z' (inclusive)
char getRandomChar() {
    return 'a' + rand() % 26;
}

// Function to generate a random digit between '0' and '9' (inclusive)
char getRandomDigit() {
    return '0' + rand() % 10;
}

// Function to generate a random valid password
void generateRandomPassword(char *password) {
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        // Randomly decide whether to generate a lowercase letter or a digit
        int choice = rand() % 2;
        if (choice == 0) {
            password[i] = getRandomChar();
        } else {
            password[i] = getRandomDigit();
        }
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

