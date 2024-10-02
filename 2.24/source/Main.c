#include<stdio.h>

int main(void) {
    int num;

    printf("Please enter one number");
    scanf("%d", &num);

    //耞计琌计临琌案计
    if (num % 2 == 0) {
        printf("%d is even \n", num);
    }
    else {
        printf("%d is odd \n", num);
    }

    system("pause");
    return 0;
}
