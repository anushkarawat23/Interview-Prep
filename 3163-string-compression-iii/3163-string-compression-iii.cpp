class Solution {
public:
    string compressedString(string word) {

        string temp = "";
        string comp = "";

        temp += word[0];
        for(int i = 1; i < word.size() ; i++)
        {
            if(word[i] == temp[0] && temp.size() < 9)
            {
                temp += word[i];
            }
            else
            {
                string str = to_string(temp.size());
                comp += str;
                comp += temp[0];
                temp = "";
                temp += word[i];
            }
        }

        string str = to_string(temp.size());
        comp += str;
        comp += temp[0];

        return comp;
        
    }
};