#include <stdio.h>
#include "studentDatabase.h"
#include "dataOutput.h"

void main() {
    int i;
    int ids[] = { 1, 2, 3, 4 };
    char names[][LENGTH] = { "山田太郎", "大田美代子", "大山次郎", "山口さやか" };
    initDatabase();

    for (i = 0; i < 4; i++) {
        add(ids[i], names[i]);
        printf("登録: %d %s\n", ids[i], names[i]);
        showError();
    }

    for (i = 0; i < 3; i++) {
        showStudentData(get(i + 1));
    }
}
