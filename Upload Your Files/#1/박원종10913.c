#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x;

	while (1) {

		printf("원하는 기능을 선택하세요.\n");
		printf("-----------------------------------------------\n");
		printf("1 : 원의 넓이와 둘레\n");
		printf("2 : 2차 방정식의 실근 구하기\n");
		printf("그외는 종료\n\n");
		printf("-----------------------------------------------\n\n");
		printf("입력 : ");

		scanf_s("%d", &x);

		if (x == 1) {
			printf("\n");
			double radius, area, peri;

			printf("원의 반지름을 입력하시오: ");
			scanf("%lf", &radius);

			area = 3.14159265358979 * radius * radius;
			peri = 3.14159265358979 * 2 * radius;

			printf("원의면적: %f\n", area);
			printf("원의둘레: %f\n\n", peri);

		}
		else if (x == 2) {
			printf("\n");


			double a, b, c, dis, value;

			printf("계수a를입력하시오: ");
			scanf("%lf", &a);

			printf("계수b를입력학시오: ");
			scanf("%lf", &b);

			printf("계수c를입력하시오: ");
			scanf("%lf", &c);


			if (a == 0) {
				printf("방정식의근은%f입니다.\n\n", -c / b);
			}
			else {
				dis = b*b - 4.0*a*c;
				if (dis > 0) {
					value = sqrt(dis);
					printf("방정식의근은 %f입니다.\n\n", (-b + value) / (2.0*a));
					printf("방정식의근은 %f입니다.\n\n", (-b - value) / (2.0*a));
				}
				else if (dis == 0) {
					printf("방정식의근은%f입니다.\n\n", (-b) / (2.0*a));
				}
				else {
					printf("실근이존재하지않습니다.\n\n");
				}
			}
		}

		else {
			printf("1하고 2누르라고 이 멍청아!\n");
			exit(0);
		}
	}

	return 0;
}