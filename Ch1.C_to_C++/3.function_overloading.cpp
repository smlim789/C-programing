/* Codes that can't allow in C 
int function(void){
  return 010;
  }

int function(int a, intb){
  return a+b;
  }

int main(void)
{
  function();
  function(12, 13);
  return 0;
  }
*/

/* Codes that can't allow in C 
int function(void){
  return 010;
  }

int function(int a, intb){
  return a+b;
  }

int main(void)
{
  function();
  function(12, 13);
  return 0;
  }
*/

#include <iostream>

  //함수의 이름은 같지만 매개 변수의 타입이나 개수가 달라야 함
  void function(void)
  {
    std::cout<< "function(void) call"<<std::endl;
  }

  void function(char c)
  {
    std::cout<< "function(char c) call"<<std::endl;
  }

  void function(int a, int b)
  {
    std::cout<< "function(int a, int b) call"<<std::endl;
  }

  int main(void)
{
  function();
  function('a');
  function(12,13);

return 0;
}



