class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(int i = 0; i<timePoints.size(); i++){
        string current = timePoints[i];
        int hours = stoi( current.substr(0,2) );
        int min = stoi ( current.substr(3,2) );
        int totalminutes = hours*60 + min ;
        minutes.push_back(totalminutes);
        }

        sort(minutes.begin() , minutes.end() );

        int mini = INT_MAX;
        int n = minutes.size() - 1;
        for(int i = 0; i<n; i++){
            int differnce = minutes[i+1] - minutes[i];
            mini = min(mini,differnce);
        }

         int finaldiffernce = minutes[0] + 1440 - minutes[n];
        mini = min(mini , finaldiffernce);
        return mini;
    }
};