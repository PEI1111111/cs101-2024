#include <stdio.h>

int main() {
    char filename[]="main2.c";
    FILE *fp;
    char c;
    int line_number = 1;
  fp = fopen(__FILE__, "r");

    if (fp != NULL) {
        printf("%02d ", line_number); 
        while ((c = fgetc(fp)) != EOF) {
            putchar(c);
            if (c == '\n') { 
                line_number++;
                printf("%02d ", line_number);
            }
        }
        fclose(fp);
    }
    return 0;
}
