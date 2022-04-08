#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    const char *paths[2];
    paths[0] = "/usr/share/hello-debian/hello-debian-greeting";
    paths[1] = "hello-debian-greeting";
    
    for (int i = 0; i <= 1; i++) {
        FILE *file = fopen(paths[i], "r");
        if (file) {
            char buf[1024];
            size_t read_bytes;
            while (read_bytes = fread(buf, sizeof(char), 1024, file)) {
                fwrite(buf, sizeof(char), read_bytes, stdout);
            }

            fclose(file);
            return 0;
        }
    }
    fprintf(stderr, "No greeting found :(\n");
    return 1;
}
