#include <iostream>
#include <unordered_map>
#include <string>

std::unordered_map<std::string, std::string> parent;
std::unordered_map<std::string, int> count;

std::string getParent(std::string s)
{
    if (parent[s] == s) return s;
    else return parent[s] = getParent(parent[s]);
}

void unionParent(std::string a, std::string b)
{
    a = getParent(a);
    b = getParent(b);
    
    if (a > b)
    {
        parent[a] = b;
        count[b] += count[a];
    }
    else if (a < b)
    {
        parent[b] = a;
        count[a] += count[b];
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    while (t--)
    {
        parent.clear();
        count.clear();
        
        int f;
        std::cin >> f;
        
        std::string a, b;
        for (int i = 0; i < f; i++)
        {
            std::cin >> a >> b;
            
            if (parent.find(a) == parent.end())
            {
                parent[a] = a;
                count[a] = 1;
            }
            if (parent.find(b) == parent.end())
            {
                parent[b] = b;
                count[b] = 1;
            }
            
            unionParent(a, b);
            std::cout << count[getParent(a)] << '\n';
        }
    }
}