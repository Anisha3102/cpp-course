// 19. Extract First Word from a Sentence
// Story: A chatbot receives messages like "Hello, how can I help you?". Extract the first word ("Hello") from the message.
// Goal: Extract the first word from a string.

#include<bits/stdc++.h>
using namespace std;

string extractFirstWord(const string& sentence) {
size_t pos = sentence.find(' ');

    if (pos == string::npos) {
        return sentence;
    }
    
    return sentence.substr(0, pos);
}

int main() {
    string message = "Hello, how can I help you?";
    string firstWord = extractFirstWord(message);
    
    cout << "First Word: " << firstWord << endl; 
    
    return 0;
}
