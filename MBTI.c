#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int I = 0, E = 0; // I, E �亯 ����
int N = 0, S = 0; // N, S �亯 ����
int T = 0, F = 0; // T, F �亯 ����
int P = 0, J = 0; // P, J �亯 ����

char question_IE(); // I, E �Ǻ� ����
char question_NS(); // N, S �Ǻ� ����
char question_TF(); // T, F �Ǻ� ����
char question_PJ(); // P, J �Ǻ� ����

int main() {
    char ch1 = 'H', ch2 = 'H', ch3 = 'H', ch4 = 'H'; // H�� ���� Ȯ�ο�

    printf("MBTI �˻縦 �����ϰڽ��ϴ�.\nEnter Ű�� �����ּ���.\n");
    getchar();

    ch1 = question_IE(); 
    //ch2 = question_NS(); 
    //ch3 = question_TF(); 
    //ch4 = question_PJ();

    printf("����� MBTI�� %c%c%c%c �Դϴ�", ch1, ch2, ch3, ch4);
    return 0;
}
char question_IE() { // I, E �Ǻ� ����
    int answer;
    printf("���� 1. �𸣴� ������� ���� ���� �� �� �ֳ���?\n 1.�� 2.�ƴϿ�\n");
    scanf("%d", &answer);
    if (answer == 1) I++; else E++;
    printf("\n");
    
    printf("���� 2. ����� ���� ������ ���� ������?\n 1.�� 2.�ƴϿ�\n");
    scanf("%d", &answer);
    if (answer == 1) I++; else E++;
    printf("\n");

    if (I > E)
        return 'I';
    else
        return 'E';
}
char question_NS() { // N, S �Ǻ� ����
    int answer;
    printf("���� 1. �𸣴� ������� ���� ���� �� �� �ֳ���?\n 1.�� 2.�ƴϿ�\n");
    scanf("%d", &answer);
    if (answer == 1) I++; else E++;
    printf("\n");

    printf("���� 2. ����� ���� ������ ���� ������?\n 1.�� 2.�ƴϿ�\n");
    scanf("%d", &answer);
    if (answer == 1) I++; else E++;
    printf("\n");

    if (I > E)
        return 'I';
    else
        return 'E';
}
char question_TF() { // T, F �Ǻ� ����

}
char question_PJ() { // P, J �Ǻ� ����

}