#include <stdio.h>
#include <string.h>

int main() {
    char string[100], string2[100];

    printf("Informe a primeira string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    printf("Informe a segunda string: ");
    fgets(string2, 100, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    // A função strstr é a forma padrão e mais eficiente de fazer isso
    if (strstr(string, string2) != NULL) {
        printf("A segunda string ESTA contida na primeira!\n");
    } else {
        printf("A segunda string NAO ESTA contida na primeira!\n");
    }

    return 0;
}