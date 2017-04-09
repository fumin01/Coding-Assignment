#include <stdio.h>

 int main(void){

 int input;
 int h = 0; //시간
 int m = 0; //분
 int s = 0; //초
 
 printf("초(second) 입력 : ");
 scanf_s("%d", &input);

 //입력값에서 초를 c에 저장하고 전체시간에서 c를 뺌
 if (input % 60 < 60){
      s = input % 60;
      input = input - s;
      m = input / 60;

        //분이 59보다 크면 시간과 분으로 구분해줌
        if (m > 59){
            h = m / 60; //시간은 몫
            m = m % 60; //분은 나머지
        }
 

 else
   m = m; //분이 60보다 작을경우 그냥 m을 출력


  }

 printf("[h:%d, m:%d, s:%d]", h, m, s);

 return 0;
}


