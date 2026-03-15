#include <iostream>

char l[26];
char r[26];

void preorder(char c)
{
    if (c == '.') return;
    
    std::cout << c;
    preorder(l[c - 'A']);
    preorder(r[c - 'A']);
}

void inorder(char c)
{
    if (c == '.') return;
    
    inorder(l[c - 'A']);
    std::cout << c;
    inorder(r[c - 'A']);
}

void postorder(char c)
{
    if (c == '.') return;
    
    postorder(l[c - 'A']);
    postorder(r[c - 'A']);
    std::cout << c;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    char a, b, c;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b >> c;
        
        l[a - 'A'] = b;
        r[a - 'A'] = c;
    }
    
    preorder('A');
    std::cout << '\n';
    
    inorder('A');
    std::cout << '\n';
    
    postorder('A');
}