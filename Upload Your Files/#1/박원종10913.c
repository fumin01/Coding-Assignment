#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x;

	while (1) {

		printf("���ϴ� ����� �����ϼ���.\n");
		printf("-----------------------------------------------\n");
		printf("1 : ���� ���̿� �ѷ�\n");
		printf("2 : 2�� �������� �Ǳ� ���ϱ�\n");
		printf("�׿ܴ� ����\n\n");
		printf("-----------------------------------------------\n\n");
		printf("�Է� : ");

		scanf_s("%d", &x);

		if (x == 1) {
			printf("\n");
			double radius, area, peri;

			printf("���� �������� �Է��Ͻÿ�: ");
			scanf("%lf", &radius);

			area = 3.14159265358979 * radius * radius;
			peri = 3.14159265358979 * 2 * radius;

			printf("���Ǹ���: %f\n", area);
			printf("���ǵѷ�: %f\n\n", peri);

		}
		else if (x == 2) {
			printf("\n");


			double a, b, c, dis, value;

			printf("���a���Է��Ͻÿ�: ");
			scanf("%lf", &a);

			printf("���b���Է��нÿ�: ");
			scanf("%lf", &b);

			printf("���c���Է��Ͻÿ�: ");
			scanf("%lf", &c);


			if (a == 0) {
				printf("�������Ǳ���%f�Դϴ�.\n\n", -c / b);
			}
			else {
				dis = b*b - 4.0*a*c;
				if (dis > 0) {
					value = sqrt(dis);
					printf("�������Ǳ��� %f�Դϴ�.\n\n", (-b + value) / (2.0*a));
					printf("�������Ǳ��� %f�Դϴ�.\n\n", (-b - value) / (2.0*a));
				}
				else if (dis == 0) {
					printf("�������Ǳ���%f�Դϴ�.\n\n", (-b) / (2.0*a));
				}
				else {
					printf("�Ǳ������������ʽ��ϴ�.\n\n");
				}
			}
		}

		else {
			printf("1�ϰ� 2������� �� ��û��!\n");
			exit(0);
		}
	}

	return 0;
}