#include<stdio.h>

int main(void)
{
	for (int i = 1;i < 10; i++) {
		if (i == 1 || i == 9) //�����
		{
			printf("*********");
		}
		else
		{
			printf("*       *");
		}
		printf("         ");
		if (i == 1 || i == 9)//���
		{
			printf("   ***   ");
		}
		else if (i == 2 || i == 8)
		{
			printf(" *     * ");
		}
		else
		{
			printf("*       *");
		}
		printf("         ");
		if (i == 2)//�b�Y
		{
			printf("   ***   ");
		}
		else if (i == 3)
		{
			printf("  *****  ");
		}
		else
		{
			printf("    *    ");
		}
		printf("         ");
		if (i == 1 || i == 9)//�٧�
		{
			printf("    *    ");
		}
		else if (i == 2 || i == 8)
		{
			printf("   * *   ");
		}
		else if (i == 3 || i == 7)
		{
			printf("  *   *  ");
		}
		else if (i == 4 || i == 6)
		{
			printf(" *     * ");
		}
		else
		{
			printf("*       *");
		}
		printf("\n");
	}
	printf("\n");
	printf("*********            ***                *                 *\n");
	printf("*       *          *     *             ***               * *\n");
	printf("*       *         *       *           *****             *   *\n");
	printf("*       *         *       *             *              *     *\n");
	printf("*       *         *       *             *             *       *\n");
	printf("*       *         *       *             *              *     *\n");
	printf("*       *         *       *             *               *   *\n");
	printf("*       *          *     *              *                * *\n");
	printf("*********            ***                *                 *\n");

	system("pause");
	return 0;
}
