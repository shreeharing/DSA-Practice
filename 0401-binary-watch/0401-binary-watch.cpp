class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>result;

        for(int hour = 0; hour < 12; hour++){
            for(int minute = 0; minute < 60; minute++){
                if(countSetBits(hour) + countSetBits(minute) == turnedOn){
                    string time = to_string(hour) + ":";

                    if (minute < 10){
                        time += "0";
                    }
                    time += to_string(minute);

                    result.push_back(time);
                }
            }
        }
        return result;
    }
    int countSetBits(int n){
        int count=0;
        while(n != 0){
            n = n&(n-1);
            count++;
        }
        return count;
    }
};