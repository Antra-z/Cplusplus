/*#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
void dupwords(const string &s) {
    unordered_map<string,int> wordCount;
    string word="";
    bool flag=true;
    for(char c : s) 
    {
        if (isspace(c)) 
        {
                ++wordCount[word];
                //word.clear();
                word="";
        } 
        else 
        {
            word+=c;
        }
    }
    if(!word.empty())
    {
        ++wordCount[word];
    }
    for(auto pair : wordCount) 
    {
        if (pair.second>1) {
            cout<<"Word: "<<pair.first<<"  --  Count: "<<pair.second<<endl;
            flag=false;
        }
    }
    if(flag)
    {
        cout<<"No duplicate words"<<endl;
    }
}
int main() {
    string s= "";
    cout<<"Enter a string to find the duplicate words and their count: ";
    getline(cin,s);
    dupwords(s);
    return 0;
}
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    string x;
    getline(cin, x);

    stringstream obj(x);
    string temp;
    map<string, int> wordCount;
    while (obj >> temp) {
         wordCount[temp]++;
         cout<<temp;
    }
    for (const auto& entry : wordCount) {
        cout << entry.first << " : " << entry.second << "   ";
    }
    return 0;
}
*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void findDuplicateWords(const string &text) {
    // Convert the input string to a C-style string for tokenization
    char str[text.length() + 1];
    strcpy(str, text.c_str());
    
    // Arrays to store words and their counts
    char* words[100];
    int count[100] = {0};
    int totalWords = 0;
    
    // Tokenize the string into words
    char* word = strtok(str, " ");
    while (word != NULL) {
        // Check if the word is already in the list
        bool found = false;
        for (int i = 0; i < totalWords; ++i) {
            if (strcmp(words[i], word) == 0) {
                count[i]++;
                found = true;
                break;
            }
        }
        
        // If the word is not in the list, add it
        if (!found) {
            words[totalWords] = word;
            count[totalWords] = 1;
            totalWords++;
        }
        
        word = strtok(NULL, " ");
    }
    
    // Print the duplicate words
    for (int i = 0; i < totalWords; ++i) {
        if (count[i] > 1) {
            cout << "Word: " << words[i] << ", Count: " << count[i] << endl;
        }
    }
}

int main() {
    string text = "this is a test this is only a test";
    findDuplicateWords(text);
    return 0;
}






























/*#include <iostream>
#include <sstream>
#include <unordered_map>
#include <string>
using namespace std;
void dupwords(const  string &s) {
    unordered_map< string, int> wordCount;
     istringstream stream(s);
     string word;
    while (stream >> word) {
        ++wordCount[word];
    }
    for (const auto &pair : wordCount) {
        if (pair.second > 1) {
             cout << "Word: " << pair.first << ", Count: " << pair.second <<  endl;
        }
    }
}
int main() {
    string s="";
    cout<<"Enter a strinf to find duplicate words in it: ";
    cin>>s;
    dupwords(s);
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="this is absurd";

}*/