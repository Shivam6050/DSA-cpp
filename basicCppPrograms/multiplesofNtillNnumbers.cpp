//To print the multiples of number n upto m.

/*#include<iostream>
using namespace std;

void multiple(int n,int m){
        for(int i = n; i <= m; i += n){
                cout<<i<<endl;
        }
}

int main(){
    int n,m;
    cout<<"Enter the no. whose multiple you want:-"<<endl;
    cin>>n;
    cout<<"Enter the no. upto which you want the multiple of  "<< n << "  :-  "<<endl;
    cin>>m;
    cout<<"The multiples are:-\n" ;
    multiple(n,m);
    return 0;
}*/

#include <iostream>
using namespace std;

void multiple(int n, int m, int &sum, long long &product, int &sumSquares){
    sum = 0;
    product = 1;
    sumSquares = 0;

    cout << "The multiples are:\n";

    for(int i = n; i <= m; i += n){
        cout << i << endl;
        sum += i;
        product *= i;
        sumSquares += (i * i);
    }
}

int main(){
    int n, m;
    cout << "Enter the number whose multiples you want: ";
    cin >> n;

    cout << "Enter the number up to which you want multiples of " << n << ": ";
    cin >> m;

    int sum, sumSquares;
    long long product;

    multiple(n, m, sum, product, sumSquares);

    int choice;

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Sum of all multiples\n";
        cout << "2. Product of all multiples\n";
        cout << "3. Sum of squares of all multiples\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Sum of all multiples = " << sum << endl;
                break;

            case 2:
                cout << "Product of all multiples = " << product << endl;
                break;

            case 3:
                cout << "Sum of squares of all multiples = " << sumSquares << endl;
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 4);   // repeats until user chooses Exit

    return 0;
}
