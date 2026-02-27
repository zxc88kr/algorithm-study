#include <iostream>

int main()
{
    char yut[5] = { 'D', 'C', 'B', 'A', 'E' };
    
    for (int i = 0; i < 3; i++)
    {
        int n1, n2, n3, n4;
        std::cin >> n1 >> n2 >> n3 >> n4;
        
        int sum = 0;
        sum = n1 + n2 + n3 + n4;
        std::cout << yut[sum] << '\n';
    }
}