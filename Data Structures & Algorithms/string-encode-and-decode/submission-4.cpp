class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for(string str : strs)
        {
            result += to_string(str.length());
            result += '*';
            result += str;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        
        int i = 0;
        
        int n = s.length();

        while(i < n)
        {
            string word = "";
            int j = i;
            while(s[j] != '*') j++;
            int wordSize = stoi(s.substr(i, j - i));

            i = j + 1;

            while(wordSize > 0)
            {
                word += s[i++];
                wordSize--;
            }

            ans.push_back(word);
        }

        return ans;
    }
};
