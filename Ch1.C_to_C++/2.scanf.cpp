#include <iostream>

int main(void)
{
  int val1, val2;
  int result=0;
  
  std::cout<< "두 개의 숫자 입력:";
  std::cin>>val1>>val2; // 데이터 입력 : cin >> 입력변수1 >> 입력변수2

  if(val1<val2)
  {
    for(int i=val1+1; i<val2; i++) 
      result+=i;
  }
  else
  {
    for(int i=val2+1; i<val1; i++)
      result+=i;
  }

  std::cout<<"두 수 사이에 존재하는 정수의 합 :"<<result<<std::endl;
  return 0;
}
