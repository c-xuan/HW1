#include <stdio.h>

int main(void) {

    float weight, height, bmi;

    printf("Please enter weight(kg)¡G");
    scanf("%f", &weight);
    printf("Please enter height(m)¡G");
    scanf("%f", &height);
    bmi = weight / (height * height);

    printf("You BMI is¡G%.2f\n", bmi);

    if (bmi < 18.5) {
        printf("under weight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("normal weight\n");
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        printf("over weight\n");
    }
    else {
        printf("fat\n");
    }

    system("pause");
    return 0;
}
