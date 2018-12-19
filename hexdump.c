#include <stdio.h>


// inspired by Preet
int main(int argc, char const *argv[]) {
    
    // open a file (store file handle in target_file)
    FILE *target_file = fopen("hexdump.c", "r");

    // create somewhere to store file contents
    char buffer[24];

    // read into buffer from file
    fread(buffer, 1, 62, target_file);

    for (int i=0; i < 62; i++) {
        printf("%4d %4c %4x\n", buffer[i], buffer[i], buffer[i]);
    }

    fclose(target_file);

    return 0;
}