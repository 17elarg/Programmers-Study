#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* answer = (char*)malloc(sizeof(char) * 3);
    int d = 0;
    int* month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    for (int i = 0; i < a - 1; i++) {
        int j = month[i];
        d += j;
    }
    d += b;
    d %= 7;
    char* day[] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
    answer = day[d];
    return answer;
}
// solution(5, 24) = "TUE"
// solution(1, 1) = "FRI"
//�̷������� ��¥ �Է� �� �� ���� ������ ���