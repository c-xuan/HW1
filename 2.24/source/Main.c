#include<stdio.h>

int main(void) {
    int num;

    printf("Please enter one number�G");
    scanf("%d", &num);

    //�P�_�Ʀr�O�_���٬O����
    if (num % 2 == 0) {
        printf("%d is even \n", num);
    }
    else {
        printf("%d is odd \n", num);
    }

    system("pause");
    return 0;
}
