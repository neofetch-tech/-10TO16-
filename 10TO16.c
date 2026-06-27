#include <stdio.h>
#include <string.h>

int main() {
    int operation;
    char text[1000];
    int num;

    while (1) {
        printf("\n--- Converter Menu ---\n");
        printf("1. decimal -> hex\n2. text -> hex\n3. quit\n");
        printf("Choose an operation: ");

        if (scanf("%d", &operation) != 1) {
            printf("Error: please enter a numeric value.\n");
            while (getchar() != '\n'); 
            continue;
        }
        getchar();

        if (operation == 1) {
            printf("Enter a number (decimal): ");
            if (scanf("%d", &num) != 1) {
                printf("Input error.\n");
                while (getchar() != '\n');
                continue;
            }
            printf("Result (hex): %X\n", num);

        } else if (operation == 2) {
            printf("Enter text: ");
            fgets(text, sizeof(text), stdin);
            text[strcspn(text, "\n")] = '\0';

            printf("Result (hex): ");
            for (int i = 0; text[i] != '\0'; i++) {
                printf("%02X ", (unsigned char)text[i]);
            }
            printf("\n");

        } else if (operation == 3) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Unknown operation. Please choose 1, 2, or 3.\n");
        }
    }

    return 0;
}
