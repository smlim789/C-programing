#include <iostream>

namespace A_COM
{
  void function(void)
{
  std::cout<<"A.com에서 정의한 함수"<<std::endl;
}
}

//범위 지정 연산 없이 그냥 호출 : using
using A_COM::function;

int main(void)
{
  function();
  return 0;
}

/*std없이 써보기

#include <iostream>

using namespace std;

int main(void)
{
  cout<<"Hello World!"<<endl;
  cout<<"Hello"<<"World!"<<endl;
  cout<1<<'a'<<"String"<<endl;
  return 0;
}
*/
