#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENT 10// データベースに登録できる学生の最大数
#define LENGTH 50 // 学生の名前の最大の長さ
#define MESSAGE_LENGTH 256 // エラーメッセージの文字列の最大の長さ

//  エラーメッセージ
enum ERROR {
    MESSAGE_OK,
    MESSAGE_ERROR
};

//  学生のデータ
typedef struct {
    int id;             //  学生番号
    char name[LENGTH];  //  名前
} student;

student student_database[MAX_STUDENT]; // 学生のデータベース
int num = 0; // データベースに登録されている学生の数
int Error;

void initDatabase(); // データベースの初期化
int add(int,char*); // データベースへのデータの登録（学生番号、名前）
student* get(int); // 学生のデータの取得
void showStudentData(student*); // 学生データの表示
void showError(); // エラーの表示

void main() {
    int i;
    int ids[] = { 1,2,2,3 };
    char names[][LENGTH] = {"山田太郎","太田美智子","大山次郎","山口さやか"};

    initDatabase();
    for(i = 0; i < 4; i++){  //  データの登録
        add(ids[i],names[i]);
        printf("登録：%d %s\n",ids[i],names[i]);
        showError();
    }

    for(i = 0; i < 3; i++){  //  登録したデータの出力
        showStudentData(get(i+1));
    }
}

//  データベースの初期化
void initDatabase() {
    int i;

    for(i = 0; i < MAX_STUDENT; i++){
        student_database[i].id = -1;
        strcpy(student_database[i].name,"");
    }
    Error = MESSAGE_OK; //  エラーメッセージのクリア
    num = 0;    //  登録された学生の数を0に初期化
}

//  データベースへのデータの登録（学生番号、名前）
int add(int id,char* name) {
    //  すでに登録されているidであれば、登録しない。
    if(get(id) == NULL && num < MAX_STUDENT) {
        student_database[num].id = id;
        strcpy(student_database[num].name,name);
        num++;
        Error = MESSAGE_OK;

        return 1;  //  登録できたら、1を返す。
    }

    Error = MESSAGE_ERROR;
    return 0; // 登録できなければ、0を返す。
}

//  学生のデータの取得
student* get(int id) {
    int i;

    for(i = 0; i < num ; i++) {
        if(student_database[i].id == id) {   //  該当するidのデータが見つかったら
            return &student_database[i];    //  ポインタを返す
        }
    }
    return NULL;
}

//  学生データの表示
void showStudentData(student* data) {
    if(data != NULL) {
        printf("学生番号：%d 名前：%s\n",data->id,data->name);
    } else {
        printf("データが登録されていません。\n");
    }
}

//  エラーの表示
void showError() {
    switch(Error) {
        case MESSAGE_OK:
            printf("OK!\n");
            break;
        case MESSAGE_ERROR:
            printf("ERROR!\n");
            break;
    }
}
