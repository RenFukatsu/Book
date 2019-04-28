#include<iostream>
#include<cstddef>

std::size_t digitsSoFar(int number);

int main()
{
    int x;
    std::cout<<"put a number"<<std::endl;
    std::cin>>x;
    std::size_t digits = digitsSoFar(x);
    std::cout<<"x = "<<x<<",  std::size_t = "<< digits<<std::endl;
    return(0);
}

// 10または-10の何乗のオーダーにいるかを返す関数
std::size_t digitsSoFar(int number)
{
    std::size_t digitsSoFar = 1;
    while((number /= 10) != 0) ++digitsSoFar;
    return digitsSoFar;
}
