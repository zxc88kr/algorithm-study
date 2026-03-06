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

void findParent(int a, int b)
{
    a = getParent(a);
    b = getParent(b);
    
    if (a == b) std::cout << "YES\n";
    else std::cout << "NO\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    parent.resize(n + 1);
    for (int i = 1; i <= n; i++)
        parent[i] = i;
    
    int o, a, b;
    for (int i = 0; i < m; i++)
    {
        std::cin >> o >> a >> b;
        
        if (o == 0) unionParent(a, b);
        else if (o == 1) findParent(a, b);
    }
}