class MyCalendarTwo {
public:
    vector<pair<int,int>> existingEvents;
    vector<pair<int,int>> doublebookRegions;
    MyCalendarTwo() {

    }
    
    bool book(int startTime, int endTime) {
        for (auto &pr: doublebookRegions) {
            if (max(pr.first, startTime) < min(pr.second, endTime)) 
                return false;
        }
        
        for (auto &pr: existingEvents) {
            if (max(pr.first, startTime) < min(pr.second, endTime)) 
                doublebookRegions.push_back({max(pr.first, startTime), min(pr.second, endTime)});
        }
        existingEvents.push_back({startTime, endTime});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */