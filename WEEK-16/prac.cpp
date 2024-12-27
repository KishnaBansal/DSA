#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class TrieNode {
public:
    int data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(int val) {
        this -> data = val;
        for(int i=0;i<26;i++) {
            children[i] = NULL;
        }
        this -> isTerminal = false;
    }
};

void insertWord(TrieNode* root,string word) {
    // cout<<"For Insertion: "<<word<<endl;
    //base case
    if(word.length() == 0) {
        root -> isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;
    if(root->children[index] != NULL) {
        //present
        child = root->children[index];
    }
    else {
        //absent
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    //recursion
    insertWord(child,word.substr(1));   //First char will get removed and other will be a substring
}

bool searchWord(TrieNode* root,string word) {
    //base case
    if(word.length() == 0) {
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;

    if(root->children[index] != NULL) {
        //present or found
        child = root->children[index];
    }
    else {
        //not found
        return false;
    }
    //recursion
    bool recAns = searchWord(child,word.substr(1));
    return recAns;
}

void deleteWord(TrieNode* root,string word) {
    //base case
    if(word.length() == 0) {
        root->isTerminal = false;
        return;
    }
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root->children[index] != NULL) {
        //present
        child = root->children[index];
    }
    else {
        //absent
        return;
    }
    //Recursion
    deleteWord(child,word.substr(1));
}

void storeString(TrieNode* root,string input,vector<string>&ans,string &prefix) {
    if(root -> isTerminal == true) {
        ans.push_back(prefix + input);
    }
    for(char ch='a';ch<='z';ch++) {
        int i = ch-'a';
        TrieNode* next = root->children[i];
        if(next != NULL) {
            input.push_back(ch);
            //recursion
            storeString(next,input,ans,prefix);
            //backtrack
            input.pop_back();
        }
    }
}

void prefixString(TrieNode* root,string input,vector<string>&ans,string &prefix) {
    //base case
    if(input.length() == 0) {
        TrieNode* lastChar = root;
        storeString(lastChar,input,ans,prefix);
        return;
    }
    char ch = input[0];
    int i = ch-'a';
    TrieNode* child;
    if(root->children[i] != NULL) {
        child = root->children[i];
    }
    else {
        return;
    }
    //recursion
    prefixString(child,input.substr(1),ans,prefix);
}

vector<vector<string>> getSuggestions(TrieNode* root,string input)  {
    vector<vector<string>> output;
    TrieNode* prev = root;
    string inputHelper = "";
    for(int i=0;i<input.length();i++) {
        char ch = input[i];
        int index = ch -'a';
        TrieNode* curr = prev->children[index];
        if(curr != NULL) {
            vector<string> restAns;
            inputHelper.push_back(ch);
            string dummy = "";
            storeString(curr,inputHelper,restAns,dummy);
            output.push_back(restAns);
            prev = curr;
        }
        // else {
        //     break;
        // }
    }
    return output;
}

int main() {

    TrieNode* root = new TrieNode('-');
    // insertWord(root,"dona");
    
    insertWord(root,"cater");
    insertWord(root,"com");
    insertWord(root,"lover");
    insertWord(root,"loved");
    insertWord(root,"load");
    insertWord(root,"lov");
    insertWord(root,"bat");
    insertWord(root,"cat");
    insertWord(root,"car");

    // string input = "ca";
    // string prefix = input;
    // vector<string>ans;

    // prefixString(root,input,ans,prefix);

    // for(auto i : ans) {
    //     cout << i <<" ";
    // }

    vector<vector<string>>ans = getSuggestions(root,"loa");
    for(int i=0;i<ans.size();i++) {
        cout << i <<"->";
        for(auto str : ans[i]) {
            cout << str <<", ";
        }
        cout<<endl;
    }

    // cout<<endl;
}