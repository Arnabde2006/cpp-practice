// C++ Programming - LAB Assignment
// BCA 1st Year 2nd Semester
// Assignment-6: Inheritance
// Problem 4: Student with Sports marks

#include<iostream>
#include<string>
using namespace std;

// Base class
class Student {
protected:
    int roll;
    string name;
    int marks[5];

public:
    void inputStudent() {
        cout << "Student's Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Roll: ";
        cin >> roll;
        cout << "Marks of 5 subjects: ";
        for(int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    void displayStudent() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << endl;
        for(int i = 0; i < 5; i++) {
            cout << "Marks of subject " << (i+1) << ": " << marks[i] << endl;
        }
    }

    int calculateTotal() {
        int total = 0;
        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }
};

// Derived class
class Sports : public Student {
private:
    string sports_name;
    int score;

public:
    void inputSports() {
        cout << "Sports name: ";
        cin.ignore();
        getline(cin, sports_name);
        cout << "Score ";
        cin >> score;
    }

    void displayResult() {
        displayStudent();
        
        cout << endl;
        cout << "Sports: " << sports_name << endl;
        cout << "Score: " << score << endl;
        
        int subject_total = calculateTotal();
        int sports_marks = 0;
        
        // Add 40% of sports score to total if score >= 50
        if(score >= 50) {
            sports_marks = (score * 40) / 100;
        }
        
        int final_total = subject_total + sports_marks;
        cout << "Total Marks: " << final_total << endl;
    }
};

int main() {
    Sports s1;
    
    cout << "Test case-1:" << endl;
    cout << "Input:" << endl;
    s1.inputStudent();
    s1.inputSports();
    
    cout << endl << "Output:" << endl;
    s1.displayResult();
    
    return 0;
}

/*
Test case-1:
Input:
Student's Name: Rohan
Roll: 1
Marks of 5 subjects: 80 95 66 75 85
Sports name: Cricket
Score 60

Output:
Roll: 1
Name: Rohan

Marks of subject 1: 80
Marks of subject 2: 95
Marks of subject 3: 66
Marks of subject 4: 75
Marks of subject 5: 85

Sports: Cricket
Score: 60
Total Marks: 425
*/
