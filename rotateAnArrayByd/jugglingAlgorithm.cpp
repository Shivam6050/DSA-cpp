#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}
void rotateArr(vector<int> &arr ,int d){
    int n = arr.size();
    d %= n;
    int g = gcd(n,d);

    for (int i = 0; i < g; i++)
    {
        int temp = arr[i];
        int j = i;
        while(true){
            int k = j+d;
            if(k >= n) k-=n;
            if(k==i) break;
            
            arr[j]=arr[k];
            j=k;
        }
        arr[j] = temp;
    }
    
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d;
    cout<<"Enter d:-"<<endl;
    cin>>d;
    rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}