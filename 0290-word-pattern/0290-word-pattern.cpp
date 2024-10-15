class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char,string> maps;    //char to word mapping
        unordered_map<string,char> rev_map;   //word to char mapping
        vector<string> words;
        string str = "";

        // Extract words from the string
        for (int i = 0; i <= s.size(); i++) 
        {
            if (i == s.size() || s[i] == ' ') {
                words.push_back(str);   // add the word to the words vector
                str = "";               // reset the string for the next word
            } else {
                str += s[i];            // build the word character by character
            }
        }

        if(pattern.size() != words.size())
            return false;
        
        for(int j = 0; j < pattern.size() ; j++)
        {
            if(maps.count(pattern[j]) && maps[pattern[j]] != words[j])
                return false;
            
            if(rev_map.count(words[j]) && rev_map[words[j]] != pattern[j])
                return false;
            
            maps[pattern[j]] = words[j];
            rev_map[words[j]] = pattern[j];
        }

        return true;
        
    }
};