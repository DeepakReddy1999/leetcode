class AuthenticationManager {
    unordered_map<string, pair<int,int>> mp;
    int ttl=0;
public:
    
    AuthenticationManager(int timeToLive) {
        ttl=timeToLive;
        mp={};
    }
    
    void generate(string tokenId, int currentTime) {
        mp[tokenId]={currentTime,currentTime+ttl};
    }
    
    void renew(string tokenId, int currentTime) {
        if(mp.find(tokenId)!=mp.end() && mp[tokenId].second >currentTime){
            mp[tokenId]={currentTime,currentTime+ttl};
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int count=0;
        for(auto i:mp){
            if(i.second.second>currentTime){
                count++;
            }
        }
        return count;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */