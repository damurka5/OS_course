#include "stdlib.h"
#include <unistd.h>

int main() {
    char *data;
    int bytes = (1024*1024*10);
    data = (char *) malloc(bytes);
    for (int j = 0; j < 10; ++j) {
        for (int i = 0; i < bytes; ++i) {
            data[i] = '0';
        }
        sleep(1);
    }



    return 0;
}

