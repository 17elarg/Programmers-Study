#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// A_len�� �迭 A�� �����Դϴ�.
// B_len�� �迭 B�� �����Դϴ�.
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    // A ������������ ����
    for (int i = 0; i < A_len; i++) {
        for (int j = i + 1; j < A_len; j++) {
            if (A[i] < A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    //B ������������ ����
    for (int i = 0; i < B_len; i++) {
        for (int j = i + 1; j < B_len; j++) {
            if (B[i] > B[j]) {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    for (int i = 0; i < A_len; i++) {
        answer += A[i] * B[i];
    }
    return answer;
}

// [1,4,2] [5,4,4] = 29
// [1,2] [3,4] = 10
// ��ó�� �� �ϳ��� ���ڸ� �̾� ���� ���� ���� ���� �ּڰ��� return
// A�� ��������, B�� ������������ ������ ��, ������� ���Ҹ� ���ؼ� Ǯ������,
// ���� ����� ����ϳ�, ȿ���� �׽�Ʈ���� �ð��ʰ��� ����
// ���� �������� 2��for���� ����Ͽ� O(n^2)�� �ð����⵵�� ���� ���� �����̶�� ������