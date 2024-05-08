#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int I = 0, E = 0; // I, E 답변 개수
int N = 0, S = 0; // N, S 답변 개수
int T = 0, F = 0; // T, F 답변 개수
int P = 0, J = 0; // P, J 답변 개수

char question_IE(); // I, E 판별 질문
char question_NS(); // N, S 판별 질문
char question_TF(); // T, F 판별 질문
char question_PJ(); // P, J 판별 질문

int main() {
    char ch1 = 'H', ch2 = 'H', ch3 = 'H', ch4 = 'H'; // H는 오류 확인용

    printf("MBTI 검사를 시작하겠습니다.\nEnter 키를 눌러주세요.\n");
    getchar();

    ch1 = question_IE(); 
    //ch2 = question_NS(); 
    //ch3 = question_TF(); 
    //ch4 = question_PJ();

    printf("당신의 MBTI는 %c%c%c%c 입니다", ch1, ch2, ch3, ch4);
    return 0;
}
char question_IE() { // I, E 판별 질문
    int answer;
    printf("질문 1. 모르는 사람에게 쉽게 말을 걸 수 있나요?\n 1.예 2.아니요\n");
    scanf("%d", &answer);
    if (answer == 1) I++; else E++;
    printf("\n");
    
    printf("질문 2. 사람을 자주 만나는 것이 좋나요?\n 1.예 2.아니요\n");
    scanf("%d", &answer);
    if (answer == 1) I++; else E++;
    printf("\n");

    if (I > E)
        return 'I';
    else
        return 'E';
}
char question_NS() { // N, S 판별 질문
    int answer;
    printf("질문 1. 모르는 사람에게 쉽게 말을 걸 수 있나요?\n 1.예 2.아니요\n");
    scanf("%d", &answer);
    if (answer == 1) I++; else E++;
    printf("\n");

    printf("질문 2. 사람을 자주 만나는 것이 좋나요?\n 1.예 2.아니요\n");
    scanf("%d", &answer);
    if (answer == 1) I++; else E++;
    printf("\n");

    if (I > E)
        return 'I';
    else
        return 'E';
}
char question_TF() { // T, F 판별 질문

}
char question_PJ() { // P, J 판별 질문

}