#include "iter.hpp"

int main()
{
    int tab[]= {1, 2, 3, 4};

    std::cout << "Print int array:" << std::endl;
    iter(tab, 4, print<int>);

    std::cout << "Increment + print:" << std::endl;
    iter(tab, 4, increment<int>);
    iter(tab, 4, print<int>);

    const std::string tab2[] = {"hello", "world"};

    std::cout << "Print const string array:" << std::endl;
    iter(tab2, 2, printConst<std::string>);

    return 0;
}