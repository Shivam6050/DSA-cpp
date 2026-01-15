#include<iostream>
using namespace std;

void squarePattern(int n,int choice){
    char alphabet = 'A';
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            switch(choice){
                case 1:
                   cout<<num;
                   num++;
                   break;
                case 2:
                   cout<<alphabet;
                   alphabet++;   
                   break;
                case 3:
                   cout << "Exiting...\n";
                   break;
                default:
                   cout << "Invalid choice! Please try again.\n";   
            }
        }
        cout<<endl;
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

        if(choice == 1 || choice == 2){
            cout << "Enter the size of square pattern: ";
            cin >> n;
            squarePattern(n, choice);
        }
        else if(choice == 3){
            cout << "Exiting...\n";
        }
        else{
            cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 3);

    return 0;
}