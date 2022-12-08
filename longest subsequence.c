// Dãy Con Dài Nhất
#include<stdio.h>
#include<stdbool.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n + 5];
    _Bool boo[1000005];
    int position[100005];

    for (int k = 0;k < n;k++)
    {
        printf("N%d :", k + 1);
        scanf("%d", &arr[k]);
        boo[arr[k]] = true;
    }
    int ict, jct;

    // Thuật

    int i = 0, len, lenmax = 0, i_new = 0, x;
    for (int j = 0;j < n;j++) {
        if (boo[arr[j]] == true) {
            boo[arr[j]] = false;
            position[arr[j]] = j;
            len = j - i + 1;
            printf("i:%d j:%i True\n", i + 1, j + 1);

            if (len > lenmax) { lenmax = len;jct = j;ict = i; }
        }
        else {
            i_new = position[arr[j]] + 1;
            position[arr[j]] = j;

            len = j - i;
            if (len > lenmax) { lenmax = len;jct = j;ict = i; }
            printf("i:%d j:%i False \n", i + 1, j + 1);

            for (int m = i;m < i_new;m++) {
                boo[arr[m]] = true;
            }
            boo[arr[j]] = false;
            i = i_new;

        }
    }

    printf("%d---i:%d,j:%d", lenmax, ict + 1, jct + 1);
}
