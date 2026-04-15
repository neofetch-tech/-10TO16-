#include <stdio.h>

int main() {
    int operation;
    char text[1000];
    int num;

    while (1) {
        printf("Hello, this program allows you to convert...\n");
        printf("1. decimal -> hex\n2. text -> hex\n3. quit\n");

        scanf("%d", &operation);
        getchar(); 

        if (operation == 1) {
            printf("enter a number: ");
            scanf("%d", &num);
            printf("%x\n", num);

        } else if (operation == 2) {
            printf("enter a text: ");
            fgets(text, sizeof(text), stdin);

            for (int i = 0; text[i] != '\0'; i++) {
                printf("%02x ", (unsigned char)text[i]);
            }
            printf("\n");

        } else if (operation == 3) {
            break;
        }
    }

    return 0;
}
