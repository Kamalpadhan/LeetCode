class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            
            if(pq.size()==k)
            {
                pair<int,int> p=*itr;
                if(pq.top().first<p.second)
                {
                      pq.pop();               
                      pq.push({p.second,p.first});                    
                }              
            }
            else
            {
                pair<int,int> p=*itr;
                pq.push({p.second,p.first});
            }
        }
        mp.clear();
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            int num=pq.top().second;
            res.push_back(num);
            pq.pop();
        }
        return res;
    }
};
