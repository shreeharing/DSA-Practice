class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n = words.size(), count = 0;

        for(int i=0;i<n-1;i++){
            unordered_set<char> set1 = insertIntoSet(words[i]);

            for(int j=i+1;j<n;j++){
                unordered_set<char> set2 = insertIntoSet(words[j]);
                if(similarStrings(set1,set2)){
                    count++;
                }
            }
        }
        return count;
    }
    unordered_set<char> insertIntoSet(string &word){
        unordered_set<char> st;
        for(auto letter : word){
            if(st.find(letter) == st.end()){
                st.insert(letter);
            }
        }
        return st;
    }

    bool similarStrings(unordered_set<char>set1, unordered_set<char>set2){
        int n = set1.size();
        if(n != set2.size()){
            return false;
        }

        for(auto it:set1){
            if(set2.find(it) == set2.end()){
                return false;
            }
        }
        return true;
    }
};