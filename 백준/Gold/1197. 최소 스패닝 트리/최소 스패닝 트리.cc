#include <iostream>
#include <vector>
#include <algorithm>

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

struct Edge
{
    int w;
    int v1;
    int v2;
    
    bool operator<(const Edge& other) const
    {
        return w < other.w;
    }
};

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int v, e;
    std::cin >> v >> e;
    
    parent.resize(v + 1);
    for (int i = 1; i <= v; i++)
        parent[i] = i;
    
    std::vector<Edge> edge(e);
    
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        edge[i] = {c, a, b};
    }
    
    std::sort(edge.begin(), edge.end());
    
    int cost = 0;
    int count = 0;
    for (int i = 0; i < e; i++)
    {
        int a = getParent(edge[i].v1);
        int b = getParent(edge[i].v2);
        
        if (a == b) continue;
        
        unionParent(a, b);
        count++;
        cost += edge[i].w;
        
        if (count == v - 1) break;
    }
    std::cout << cost;
}