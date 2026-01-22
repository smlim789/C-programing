#include <iostream>

//length, width, height들이 매개변수
//void와 default 매개변수를 동시에 접근하는 경우 컴파일 에러
int BoxVolume(int length, int width=1, int height=1);

int main()
{
    std::cout<<"[3,3,3]: "<<BoxVolume(3,3,3)<<std::endl;
    std::cout<<"[5,5,def]: "<<BoxVolume(5,5)<<std::endl;
    std::cout<<"[7,def,def]: " <<BoxVolume(7)<<std::endl;
}

int BoxVolume(int length, int width, int height)
{
    return length*width*height;
}
