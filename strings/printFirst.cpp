#include <bits/stdc++.h>
using namespace std;
void printFirstOccurence(string &str){
    unordered_set<char> charset;
    int i=0;
    cout << str[i] << " ";
    charset.insert(str[i]);
    i++;
    while(str[i]!='\0'){
        if(charset.count(str[i])==0){
            charset.insert(str[i]);
            cout << str[i] << " ";
        }
        i++;
    }
}
int main() {
    string word="whatinthehellishappeningxxxxxaaaaaalllbb";
    printFirstOccurence(word);
    return 0;
}