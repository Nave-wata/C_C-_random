#include <stdio.h>
#include <string.h>

#define STUDENT_NUM (5)

typedef struct {
    char name[256];
    int id;
    int sex;
    int grade;
} student_data;

void main(){
    int i;
    student_data data[5];

    //  名前の設定
    strcpy(data[0].name, "青木一");
    strcpy(data[1].name, "遠藤京子");
    strcpy(data[2].name, "加藤悟");
    strcpy(data[3].name, "佐々木八重子");
    strcpy(data[4].name, "田中徹");

    //  性別の設定
    data[0].sex = 0;
    data[1].sex = 1;
    data[2].sex = 0;
    data[3].sex = 1;
    data[4].sex = 0;

    //  学生番号の設定
    data[0].id = 1001;
    data[1].id = 1002;
    data[2].id = 1003;
    data[3].id = 1004;
    data[4].id = 1005;

    //  学年
    data[0].grade = 1;
    data[1].grade = 1;
    data[2].grade = 1;
    data[3].grade = 1;
    data[4].grade = 1;

    //  学生のデータの表示
    for(i = 0; i < STUDENT_NUM; i++){
        printf("名前:%s\n",data[i].name);
        printf("性別:");
        if(data[i].sex == 0){
            printf("男\n");
        }else{
            printf("女\n");
        }
        printf("学生番号:%d\n", data[i].id);
        printf("学年:%d\n\n", data[i].grade);
    }
}
