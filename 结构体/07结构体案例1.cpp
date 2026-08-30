#include <iostream>
using namespace std;

struct Student {
    string sName;
    int score = 0;
};

struct Teacher {
    string tName;
    Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len) {
    string nameSeed = "ABCDE";
    for (int i = 0;i < len; i++) {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        for (int j = 0;j < 5; j++) {
            tArray[i].sArray[j].sName = "Student";
            tArray[i].sArray[j].sName += nameSeed[j];
            int random = rand() % 60 + 40;
            tArray[i].sArray[j].score = random;
        }
    }
}

void printInfo(Teacher tArray[], int len) {
    for (int i = 0;i < len; i++) {
        cout << "老师姓名：" << tArray[i].tName << endl;

        for (int j = 0; j < 5; j++) {
            cout << "\t学生姓名：" << tArray[i].sArray[j].sName
                << " 学生成绩：" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main07() {
    srand((unsigned int)time(NULL));

    Teacher tArray[3];
    int len = sizeof(tArray) / sizeof(tArray[0]);

    allocateSpace(tArray, len);
    printInfo(tArray, len);

    system("pause");
    return 0;

}