#include<iostream>
using namespace std;

void numberPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << (i+1) << " ";
        }
        cout << endl;
    }
}

void alphabetPattern(int n){
    char alphabet = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << alphabet << " ";
        }
        cout << endl;
         alphabet++;
    }
}

int main(){
    int n, choice;

    do{
        cout << "\nChoose an operation:\n";
        cout << "1. Numbers Pattern\n";
        cout << "2. Alphabet Pattern\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter size of triangle: ";
                cin >> n;
                numberPattern(n);
                break;

            case 2:
                cout << "Enter size of triangle: ";
                cin >> n;
                alphabetPattern(n);
                break;

            case 3:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 3);

    return 0;
}
