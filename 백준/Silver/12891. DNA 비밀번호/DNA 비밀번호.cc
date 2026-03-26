#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int s, p;
    std::cin >> s >> p;
    
    std::string str;
    std::cin >> str;
    
    int a, c, g, t;
    std::cin >> a >> c >> g >> t;
    
    std::unordered_map<char, int> dna;
    int count = 0;
    
    for (int i = 0; i < p; i++)
        dna[str[i]]++;
    if (dna['A'] >= a && dna['C'] >= c && dna['G'] >= g && dna['T'] >= t) count++;
    
    for (int i = 0; i < s - p; i++)
    {
        dna[str[i]]--;
        dna[str[i + p]]++;
        if (dna['A'] >= a && dna['C'] >= c && dna['G'] >= g && dna['T'] >= t) count++;
    }
    
    std::cout << count;
}