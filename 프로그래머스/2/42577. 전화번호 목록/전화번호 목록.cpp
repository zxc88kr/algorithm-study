#include <vector>
#include <string>
#include <unordered_set>

bool solution(std::vector<std::string> phone_book)
{
    int size = phone_book.size();
    std::unordered_set<std::string> book;
    
    for (int i = 0; i < size; i++)
        book.insert(phone_book[i]);
    
    for (int i = 0; i < size; i++)
        for (int j = 1; j < phone_book[i].size(); j++)
            if (book.count(phone_book[i].substr(0, j)))
                return false;
        
    return true;
}