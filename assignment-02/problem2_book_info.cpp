// Problem 2: Store and display book information (title, ISBN, price etc.) 
// with Using array of object concept

#include<iostream>
using namespace std;

class Book {
private:
    string title;
    string ISBN;
    float price;

public:
    void input() {
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter ISBN: ";
        cin >> ISBN;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "\n--- Book Information ---" << endl;
        cout << "Title: " << title << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    int n;
    cout << "How many books do you want to enter? ";
    cin >> n;
    
    Book books[n];
    
    for(int i = 0; i < n; i++) {
        cout << "\nBook " << (i+1) << ":" << endl;
        books[i].input();
    }
    
    cout << "\n--- Displaying All Books ---" << endl;
    for(int i = 0; i < n; i++) {
        books[i].display();
    }
    
    return 0;
}
