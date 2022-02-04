#include <stdio.h>

#define SIZE 6

typedef struct {
    int month;
    int live;
    int food;
    int clothes;
    int study;
    int medical;
    int others;
} kakei;

void goukei(kakei*);

void main() {
    int i, max;
    kakei data[SIZE];

    for (i = 0; i < SIZE; i++) {
        data[i].month = i + 1;
        data[i].live = 86000;
    }

    data[0].food = 47000;
    data[1].food = 43000;
    data[2].food = 38600;
    data[3].food = 39500;
    data[4].food = 38600;
    data[5].food = 37500;

    data[0].clothes = 3000;
    data[1].clothes = 30000;
    data[2].clothes = 5000;
    data[3].clothes = 0;
    data[4].clothes = 28000;
    data[5].clothes = 3000;

    data[0].study = 20000;
    data[1].study = 15000;
    data[2].study = 65000;
    data[3].study = 12000;
    data[4].study = 7000;
    data[5].study = 5000;

    data[0].medical = 9500;
    data[1].medical = 0;
    data[2].medical = 500;
    data[3].medical = 0;
    data[4].medical = 5200;
    data[5].medical = 0;

    data[0].others = 66000;
    data[1].others = 43000;
    data[2].others = 76000;
    data[3].others = 75000;
    data[4].others = 63500;
    data[5].others = 67000;

    printf("各月の出費の合計\n");
    printf("---------------\n");
    for (i = 0; i < SIZE; i++) {
        goukei(&data[i]);
    }

    printf("医療費の最も多い月 : ");
    max = 0;
    for (i = 1; i < SIZE; i++) {
        if (data[max].medical < data[i].medical) {
            max = i;
        }
    }
    printf("%d 月\n", data[max].month);

    printf("食費の最も多い月と金額 : ");
    max = 0;
    for (i = 1; i < SIZE; i++) {
        if (data[max].food < data[i].food) {
            max = i;
        }
    }
    printf("%d月, %d\n", data[max].month, data[max].food);
}

void goukei(kakei* data) {
    int sum = 0;

    sum += data->live;
    sum += data->food;
    sum += data->clothes;
    sum += data->study;
    sum += data->medical;
    sum += data->others;

    printf("%d月 %d\n", data->month, sum);
}
