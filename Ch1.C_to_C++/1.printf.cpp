#include <iostream> // C <stdio.h> -> C++ <iostream.h>

int main(void)
{
  std::cout<<"Hello World!!"<<std::endl; // cout << 출력 대상
  std::cout<<"Hello"<<"Wolrd!"<<std::endl; // cout << 출력 대상1 << 출력 대상2
  std::cout<<1<<'a'<<"String"<<std::endl; // endl : 개행 문자 출력+출력 버퍼 비움
  return 0;
}
