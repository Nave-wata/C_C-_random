#include <stdio.h>

typedef struct {
    int id;
    int japanese;
    int math;
    int science;
    int social_studies;
    int english;
} student_data;

void main() {
    int i;
    double avg;
    student_data data[5];

    // id
    for (i = 0; i < 5; i++) {
        data[i].id = 1001 + i;
    }

    // japanese
    data[0].japanese = 82;
    data[1].japanese = 92;
    data[2].japanese = 43;
    data[3].japanese = 72;
    data[4].japanese = 99;

    // math
    data[0].math = 43;
    data[1].math = 83;
    data[2].math = 32;
    data[3].math = 73;
    data[4].math = 72;

    // science
    data[0].science = 53;
    data[1].science = 88;
    data[2].science = 53;
    data[3].science = 71;
    data[4].science = 82;

    // social_studies
    data[0].social_studies = 84;
    data[1].social_studies = 79;
    data[2].social_studies = 45;
    data[3].social_studies = 68;
    data[4].social_studies = 91;

    // english
    data[0].english = 45;
    data[1].english = 99;
    data[2].english = 66;
    data[3].english = 59;
    data[4].english = 94;

    avg = 0;
    for (i = 0; i < 5; i++) {
        avg += data[i].japanese;
    }
    printf("国語 平均 = %.2f\n", avg / 5);

    avg = 0;
    for (i = 0; i < 5; i++) {
        avg += data[i].math;
    }
    printf("数学 平均 = %.2f\n", avg / 5);

    avg = 0;
    for (i = 0; i < 5; i++) {
        avg += data[i].science;
    }
    printf("理科 平均 = %.2f\n", avg / 5);

    avg = 0;
    for (i = 0; i < 5; i++) {
        avg += data[i].social_studies;
    }
    printf("社会 平均 = %.2f\n", avg / 5);

    avg = 0;
    for (i = 0; i < 5; i++) {
        avg += data[i].english;
    }
    printf("英語 平均 = %.2f\n", avg / 5);
}
