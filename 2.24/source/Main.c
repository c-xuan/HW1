#include<stdio.h>

int main(void) {
    int num;

    printf("Please enter one number：");
    scanf("%d", &num);

    //判斷數字是奇數還是偶數
    if (num % 2 == 0) {
        printf("%d is even \n", num);
    }
    else {
        printf("%d is odd \n", num);
    }

    system("pause");
    return 0;
}
