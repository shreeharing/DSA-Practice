class Solution {
public:
    int countOfSubstrings(string word, int k) {
        return (countSubstrings(word,k) - countSubstrings(word,k+1));
    }
    bool isVowel(char c){
        if (c == 'a' || c == 'e' || c== 'i' || c== 'o' || c== 'u'){
            return true;
        }
        return false;
    }

    int countSubstrings(string &word, int k){
        if(k<0)return 0;
        unordered_map<char,int>vowelsMap;

        int l = 0, r = 0, wordSize = word.size();
        int consonantCount = 0, ans = 0;

        while(r < wordSize && l < wordSize){
            if(isVowel(word[r])){
                vowelsMap[word[r]]++;
            }else{
                consonantCount++;
            }
            
            while(vowelsMap.size() == 5 && l < wordSize && consonantCount >= k){
                if(isVowel(word[l])){
                    vowelsMap[word[l]]--;

                    if(vowelsMap[word[l]] == 0){
                        vowelsMap.erase(word[l]);
                    }
                }else{
                    consonantCount--;
                }
                l++;
            }
            ans += l;
            r++;
        }
        return ans;
    }
};