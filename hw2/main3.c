#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char buffer[1000];
    int line_number = 0; 
    int main_line = -1; 
    fp = fopen(__FILE__, "r");
   if (fp != NULL) {
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            line_number++;

            
            if (strstr(buffer, "int main()") != NULL) {
                main_line = line_number;
                break; 
            }
        }
        fclose(fp);
        if (main_line != -1) {
            printf("0%d int main(){", main_line);
    }
}
    return 0;
}
