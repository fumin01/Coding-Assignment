#include <stdio.h>

 int main(void){

 int input;
 int h = 0; //�ð�
 int m = 0; //��
 int s = 0; //��
 
 printf("��(second) �Է� : ");
 scanf_s("%d", &input);

 //�Է°����� �ʸ� c�� �����ϰ� ��ü�ð����� c�� ��
 if (input % 60 < 60){
      s = input % 60;
      input = input - s;
      m = input / 60;

        //���� 59���� ũ�� �ð��� ������ ��������
        if (m > 59){
            h = m / 60; //�ð��� ��
            m = m % 60; //���� ������
        }
 

 else
   m = m; //���� 60���� ������� �׳� m�� ���


  }

 printf("[h:%d, m:%d, s:%d]", h, m, s);

 return 0;
}


