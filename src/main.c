#include <stdio.h>
#include "../include/worker.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Использование: ./bin/main input.txt output.txt\n");
        return 1;
    }
    filter_workers(argv[1], argv[2], 2020);
    printf("Готово! Результаты в файле %s\n", argv[2]);
    return 0;
}
