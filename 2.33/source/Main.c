#include <stdio.h>

int main() {

    float totalMiles, costPerGallon, milesPerGallon, parkingFees, tolls, dailyCost;

    printf("�п�J�C�Ѿr�p���`���{�]�^���^: ");
    scanf("%f", &totalMiles);
    printf("�п�J�C�[�ڨT�o������]�����^: ");
    scanf("%f", &costPerGallon);
    printf("�п�J�����C�[�ڦ�p�����{�]�^���^: ");
    scanf("%f", &milesPerGallon);
    printf("�п�J�C�Ѫ������O�]�����^: ");
    scanf("%f", &parkingFees);
    printf("�п�J�C�Ѫ��L���O�]�����^: ");
    scanf("%f", &tolls);

    dailyCost = (totalMiles / milesPerGallon) * costPerGallon + parkingFees + tolls;

    printf("�z�C�Ѿr�p�������O�G$%.2f\n", dailyCost);

    system("pause");
    return 0;
}