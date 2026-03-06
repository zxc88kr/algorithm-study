#include <iostream>
#include <vector>

std::vector<int> parent;

int getParent(int x)
{
    if (parent[x] == x) return x;
    else return parent[x] = getParent(parent[x]);
}

void unionParent(int a, int b)
{
    a = getParent(a);
    b = getParent(b);
    
    if (a > b) parent[a] = b;
    else parent[b] = a;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    int m;
    std::cin >> m;
    
    parent.resize(n + 1);
    for (int i = 1; i <= n; i++)
        parent[i] = i;
    
    int linked;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            std::cin >> linked;
            if (linked == 1) unionParent(i, j);
        }
    
    int x;
    std::cin >> x;
    
    int prev = getParent(x);
    for (int i = 1; i < m; i++)
    {
        std::cin >> x;
        if (prev != getParent(x))
        {
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES";
}