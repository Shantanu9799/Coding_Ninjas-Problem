#include <iostream>
#include <string>
#include <sstream>
#include <vector>


string reverseString(string &str){
	// Write your code here.	
	// Trim leading and trailing spaces
    auto start = str.find_first_not_of(" ");
    auto end = str.find_last_not_of(" ");
    if (start == string::npos || end == string::npos) {
        return ""; // the string is all spaces
    }
    str = str.substr(start, end - start + 1);
    
    // Use a stringstream to split the string into words
    stringstream ss(str);
    string word;
    vector<string> words;
    
    while (ss >> word) {
        words.push_back(word);
    }
    
    // Reverse the order of words
    reverse(words.begin(), words.end());
    
    // Combine the words into the final reversed string
    string reversedStr;
    for (int i = 0; i < words.size(); ++i) {
        reversedStr += words[i];
        if (i != words.size() - 1) {
            reversedStr += " ";
        }
    }
    
    return reversedStr;
}
