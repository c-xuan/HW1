#include <stdio.h>

int main() {

    float totalMiles, costPerGallon, milesPerGallon, parkingFees, tolls, dailyCost;

    printf("請輸入每天駕駛的總里程（英里）: ");
    scanf("%f", &totalMiles);
    printf("請輸入每加侖汽油的價格（美元）: ");
    scanf("%f", &costPerGallon);
    printf("請輸入平均每加侖行駛的里程（英里）: ");
    scanf("%f", &milesPerGallon);
    printf("請輸入每天的停車費（美元）: ");
    scanf("%f", &parkingFees);
    printf("請輸入每天的過路費（美元）: ");
    scanf("%f", &tolls);

    dailyCost = (totalMiles / milesPerGallon) * costPerGallon + parkingFees + tolls;

    printf("您每天駕駛的成本是：$%.2f\n", dailyCost);

    system("pause");
    return 0;
}