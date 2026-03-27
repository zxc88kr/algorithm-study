#include <vector>
#include <queue>

int solution(std::vector<int> scoville, int K)
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq(scoville.begin(), scoville.end());
    
    int answer = 0;
    
    while (pq.size() > 1 && pq.top() < K)
    {
        int low = pq.top();
        pq.pop();
        int second_low = pq.top();
        pq.pop();
        
        pq.push(low + second_low * 2);
        answer++;
    }
    
    if (pq.top() < K) answer = -1;

    return answer;
}