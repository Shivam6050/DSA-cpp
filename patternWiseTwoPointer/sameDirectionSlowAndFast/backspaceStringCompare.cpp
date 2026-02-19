#include<iostream>
#include<string>
using namespace std;

int build(string &s) {
    int slow = 0;

    for(int fast = 0; fast < s.size(); fast++) {

        if(s[fast] != '#') {
            s[slow] = s[fast];
            slow++;
        } 
        else {
            if(slow > 0) {
                slow--;
            }
        }
    }

    return slow; 
}

bool backspaceCompare(string s, string t) {
    int lenS = build(s);
    int lenT = build(t);

    if(lenS != lenT) return false;

    for(int i = 0; i < lenS; i++) {
        if(s[i] != t[i]) return false;
    }

    return true;
}

int main(){

    string s = "ab#c";
    string t = "ad#c";

    if(backspaceCompare(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}