class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged_word = "";
        int min_word_length = min(word1.length(), word2.length());
        for (int i = 0; i < min_word_length; i++) {
            merged_word += word1[i];
            merged_word += word2[i];
        }
        if (min_word_length < word1.length()) {
            for (int i = min_word_length; i < word1.length(); i++) {
                merged_word += word1[i];
            }
        } else if (min_word_length < word2.length()) {
            for (int i = min_word_length; i < word2.length(); i++) {
                merged_word += word2[i];
            }
        }
        return merged_word;
    }
};