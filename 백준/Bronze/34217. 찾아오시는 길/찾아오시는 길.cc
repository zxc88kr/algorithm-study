#include <iostream>
#include <string>

int main()
{
    int a, b, c, d;
    std::string station;
    
    std::cin >> a >> b;
    std::cin >> c >> d;
    
    station = (a + c == b + d) ? "Either" :
    ((a + c < b + d) ? "Hanyang Univ." : "Yongdap");
    std::cout << station;
}