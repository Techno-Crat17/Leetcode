class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> mp1;
        unordered_map<string, int> mp2;
        for (auto x : banned)
            mp1[x]++;
        int maxcnt = 0;
        paragraph += ".";//FOR PROCESSING LAST WORDS
        
        string word = "";
        string result = "";
        for (int i = 0; i < paragraph.size(); i++) {
            if (isalpha(paragraph[i]))
                word += tolower(paragraph[i]);

            else if (!word.empty()) {
                if (mp1.find(word) == mp1.end()) {
                    mp2[word]++;
                    if (mp2[word] > maxcnt) {
                        maxcnt = mp2[word];
                        result = word;
                    }
                }
                word="";
            }
        }

        return result;
    }
};