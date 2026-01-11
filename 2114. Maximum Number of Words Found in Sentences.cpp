class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words = 0;
        for(auto sentence : sentences)
        {
            int total_word = count(sentence.begin(),sentence.end(),' ');
            max_words = max(total_word+1 , max_words);
        }
        return max_words;
    }
};
