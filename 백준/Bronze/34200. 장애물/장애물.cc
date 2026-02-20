#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> obj(n);
    for (int i = 0; i < n; i++)
        std::cin >> obj[i];
    
    int count = 0;
    std::vector<bool> v(obj[n - 1] + 1, true);
    for (int i = 0; i < n; i++)
    {
        if (v[obj[i]] && v[obj[i] - 1])
        {
            v[obj[i]] = v[obj[i] - 1] = false;
            count++;
        }
        else
        {
            std::cout << -1;
            return 0;
        }
    }
    
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i])
        {
            if (v[i + 1]) i++;
            count++;
        }
    }
    std::cout << count;
}