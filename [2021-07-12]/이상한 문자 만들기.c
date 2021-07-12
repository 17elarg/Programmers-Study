#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * len);
    strcpy(answer, s);
    int i = 0;
    int word = 1;
    while (answer[i] != NULL) {
        if (answer[i] != 32) {
            if (answer[i] >= 65 && answer[i] <= 90 && (word % 2) == 0) {
                answer[i] += 32;
            }
            else if (answer[i] >= 97 && answer[i] <= 122 && (word % 2) == 1) {
                answer[i] -= 32;
            }
            word++;
        }
        else
            word = 1;
        i++;
    }
    return answer;
}

// "try hello world" = "TrY HeLlO WoRlD"
// ��ó�� �� �ܾ��� Ȧ����° ���ڸ� �빮�ڷ�, Ȧ����° ���ڸ� �ҹ��ڷ� �ٲپ� �����