#include<bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
    sort(people.begin(),people.end());
    int boats = 0;

    int i = 0, j = people.size()-1;

    while(i <= j){
        if(people[i]+people[j] <= limit){
            i++;
            j--;
        } else{
            j--;
        }
        boats++;
    }
    return boats;
}

int main() {
    vector<int> people = {3, 2, 2, 1};
    int limit = 3;

    cout << "Minimum boats needed: " <<numRescueBoats(people, limit) << endl;
    return 0;
}
