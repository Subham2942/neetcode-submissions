class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(auto word : strs) {
            result += to_string(word.size());
            result += '*';
            result += word;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.size()){
            string word = "";
            int j = i;

            while(s[j] != '*') j++;

            int size = stoi(s.substr(i, j-i+1));

            i = j + 1;
            while(size > 0)
            {
                word.push_back(s[i++]);
                size--;
            }

            result.push_back(word);
            
        }

        return result;
    }
};
