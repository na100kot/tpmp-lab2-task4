#include <stdio.h>
#include "../include/worker.h"

void filter_workers(const char *in_f, const char *out_f, int year) {
    FILE *in = fopen(in_f, "r");
    FILE *out = fopen(out_f, "w");
    if (!in || !out) return;

    Worker w;
    fprintf(out, "Рабочие, поступившие в %d году:\n", year);
    fprintf(out, "--------------------------------\n");

    // Формат файла: ФИО Адрес ГГГГ_рожд ММ_рожд ДД_рожд Цех Год_найма
    while (fscanf(in, "%s %s %d %d %d %d %d", 
           w.fio, w.address, &w.birth_date[0], &w.birth_date[1], 
           &w.birth_date[2], &w.shop_num, &w.hire_year) != EOF) {
        
        if (w.hire_year == year) {
            fprintf(out, "%s (Цех №%d)\n", w.fio, w.shop_num);
        }
    }
    fclose(in);
    fclose(out);
}
