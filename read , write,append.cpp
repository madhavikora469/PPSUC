#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Write
    fp = fopen("data.txt", "w");
    fprintf(fp, "Hello File!");
    fclose(fp);

    // Append
    fp = fopen("data.txt", "a");
    fprintf(fp, "\nAppending new line.");
    fclose(fp);

    // Read
    fp = fopen("data.txt", "r");
    while(fgets(text, 100, fp))
        printf("%s", text);
    fclose(fp);

    return 0;
}

