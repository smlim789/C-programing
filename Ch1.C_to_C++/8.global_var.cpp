#include <iostream>

int val=100;

int main(void)
{
  int val=100;
  ::val+=1; // 전역 변수가 1 증가
  val+=1; // 지역변수가 1 증가
  return 0;
}
