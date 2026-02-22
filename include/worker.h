#ifndef WORKER_H
#define WORKER_H

typedef struct {
    char fio[100];      // Фамилия И.О.
    char address[150];  // Полный адрес одной строкой для простоты
    int birth_date[3];  // год, месяц, день
    int shop_num;       // № цеха
    int hire_year;      // Год поступления (наш фильтр)
} Worker;

void filter_workers(const char *in_f, const char *out_f, int year);

#endif
