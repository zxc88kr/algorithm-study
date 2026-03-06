#include <iostream>
#include <vector>
#include <queue>

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
    int v1;
    int v2;
    int w;
};

struct Compare
{
    bool operator() (const Edge& e1, const Edge& e2)
    {
        return e1.w > e2.w;
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
    
    std::priority_queue<Edge, std::vector<Edge>, Compare> pq;
    
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        pq.push({a, b, c});
    }
    
    int cost = 0;
    int count = 0;
    for (int i = 0; i < e; i++)
    {
        Edge edge = pq.top();
        pq.pop();
        
        if (getParent(edge.v1) == getParent(edge.v2)) continue;
        
        unionParent(edge.v1, edge.v2);
        count++;
        cost += edge.w;
        
        if (count == v - 1) break;
    }
    std::cout << cost;
}