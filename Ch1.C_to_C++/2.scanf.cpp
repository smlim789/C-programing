#include <iostream>

int main(void)
{
  int val1, val2;
  cout<< "첫 번째 숫자 입력:";
  cin>>val1; // 데이터 입력 : cin >> 입력변수

  cout<< "두 번째 숫자 입력:";
  cin>>val2;

  int result=val1+val2;
  cout<<"덧셈 결과 :"<<result<<endl;
  return 0;
}
