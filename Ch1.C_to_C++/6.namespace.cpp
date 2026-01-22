/* compile error
#include <iostream>

void function(void)
{
  std::cout<< "A.com에서 정의한 함수" <<std::endl;
}

void function(void)
{
  std::cout<< "B.com에서 정의한 함수" <<std::endl;
}

int main(void)
{
  function();
  return 0;
}
*/

#include <iostream>

namespace A_COM
{
  void function(void)
  {
    std::cout<< "A.com에서 정의한 함수" <<std::endl;
  }
}

namespace B_COM
{
  void function(void)
    {
      std::cout<< "B.com에서 정의한 함수" <<std::endl;
    }
}

    int main(void)
    {
      A_COM::function();
      B_COM::function();
      return 0;
    }
