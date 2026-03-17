#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int A_element, B_element;
    std::cin >> A_element >> B_element;

    std::vector<int> A(A_element);
    for (int i = 0; i < A_element; i++)
        std::cin >> A[i];
    std::sort(A.begin(), A.end());

    int intersection = 0;
    for (int i = 0; i < B_element; i++)
    {
        int B;
        std::cin >> B;
        if (std::binary_search(A.begin(), A.end(), B)) intersection++;
    }
    std::cout << (A_element + B_element) - (intersection * 2);
}