#include<iostream>
using namespace std;

void butterfly(int n){

    //top
    for(int i = 0; i < n; i++){

        //left stars
        for(int j = 0; j < i; j++){
            cout<<"*";
        }

        //spaces
        for(int j = 0; j < 2*(n-i); j++){
            cout<<" ";
        }

        //right stars
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //bottom
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        //spaces
        for(int j = 0; j < 2*(n-i); j++){
            cout<<" ";
        }

        //right stars
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of stars:-";
    cin>>n;
    butterfly(n);
    return 0;
}