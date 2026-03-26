#include <iostream>
#include <string>
#include <vector>

std::vector<int> dna(26);
int a, c, g, t;

int count = 0;

void password_check()
{
    if (dna['A' - 'A'] >= a &&
        dna['C' - 'A'] >= c &&
        dna['G' - 'A'] >= g &&
        dna['T' - 'A'] >= t) count++;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int s, p;
    std::cin >> s >> p;
    
    std::string str;
    std::cin >> str;

    std::cin >> a >> c >> g >> t;

    for (int i = 0; i < p; i++)
        dna[str[i] - 'A']++;
    password_check();
    
    for (int i = 0; i < s - p; i++)
    {
        dna[str[i] - 'A']--;
        dna[str[i + p] - 'A']++;
        password_check();
    }
    
    std::cout << count;
}