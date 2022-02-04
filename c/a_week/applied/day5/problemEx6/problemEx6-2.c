#include <stdio.h>
#include <string.h>

#define STUDENT_NUM (5)

char name[STUDENT_NUM][256];    //  学生の名前
int id[STUDENT_NUM];        //  学生番号
int sex[STUDENT_NUM];       //  性別(性別 0:男 1:女)
int grade[STUDENT_NUM];     //  学年

void main(){
    int i;
    //  名前の設定
    strcpy(name[0],"青木一");
    strcpy(name[1],"遠藤京子");
    strcpy(name[2],"加藤悟");
    strcpy(name[3],"佐々木八重子");
    strcpy(name[4],"田中徹");
    //  学生番号の設定
    id[0] = 1001;
    id[1] = 1002;
    id[2] = 1003;
    id[3] = 1004;
    id[4] = 1005;
    //  性別の設定
    sex[0] = 0;
    sex[1] = 1;
    sex[2] = 0;
    sex[3] = 1;
    sex[4] = 0;
    //  学年
    grade[0] = 1;
    grade[1] = 1;
    grade[2] = 1;
    grade[3] = 1;
    grade[4] = 1;
    //  学生のデータの表示
    for(i = 0; i < STUDENT_NUM; i++){
        printf("名前:%s\n",name[i]);
        printf("性別:");
        if(sex[i] == 0){
            printf("男\n");
        }else{
            printf("女\n");
        }
        printf("学生番号:%d\n",id[i]);
        printf("学年:%d\n\n",grade[i]);
    }
}
