#include <vector>
#include <queue>
#include <algorithm>

struct Job
{
    int idx;
    int req_time;
    int run_time;
};

struct Compare
{
    bool operator()(const Job& j1, const Job& j2) const
    {
        if (j1.run_time != j2.run_time)
            return j1.run_time > j2.run_time;
        if (j1.req_time != j2.req_time)
            return j1.req_time > j2.req_time;
        return j1.idx > j2.idx;
    }
};

int solution(std::vector<std::vector<int>> jobs)
{
    std::priority_queue<Job, std::vector<Job>, Compare> pq;
    
    std::sort(jobs.begin(), jobs.end());
    
    int job_count = jobs.size();
    
    int time = 0;
    int total_time = 0;
    
    int idx = 0;
    int count = 0;
    
    while (count < job_count)
    {
        while (idx < job_count && time >= jobs[idx][0])
        {
            pq.push({idx, jobs[idx][0], jobs[idx][1]});
            idx++;
        }
        
        if (pq.empty())
            time = jobs[idx][0];
        else
        {
            Job job = pq.top();
            pq.pop();
            
            time += job.run_time;
            total_time += (time - job.req_time);
            count++;
        }
    }
    
    int answer = total_time / job_count;
    return answer;
}