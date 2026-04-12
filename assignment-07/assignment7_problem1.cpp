
// Problem 1: Engineer/MBA Recruitment System
#include<iostream>
#include<string>
using namespace std;

// Base class for Engineer
class Engineer {
protected:
    string engineering_stream;
    string project_code;
    int total_salary;
    int CAT_score;
    int incentive_Rs_9000;  // For engineering

public:
    void inputEngineer() {
        cout << "Engineering stream: ";
        cin >> engineering_stream;
        cout << "P_Code: ";
        cin >> project_code;
        cout << "Total Salary: ";
        cin >> total_salary;
        cout << "CAT Score: ";
        cin >> CAT_score;
        incentive_Rs_9000 = 9000;
    }

    void displayEngineer() {
        cout << "Engineering stream: " << engineering_stream << endl;
        cout << "P_Code: " << project_code << endl;
        cout << "CAT Score: " << CAT_score << endl;
    }
};

// Base class for MBA
class MBA {
protected:
    string MBA_institute;
    string specialization;
    int incentive_Rs_10000;  // For management

public:
    void inputMBA() {
        cout << "MBA Institute: ";
        cin.ignore();
        getline(cin, MBA_institute);
        cout << "Specialization: ";
        getline(cin, specialization);
        incentive_Rs_10000 = 10000;
    }

    void displayMBA() {
        cout << "MBA Institute: " << MBA_institute << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

// Derived class using Multiple Inheritance
class BTech_MBA_Candidate : public Engineer, public MBA {
private:
    int engineering_responsibility;  // Percentage
    int management_responsibility;   // Percentage
    int engineering_incentive;
    int management_incentive;
    int grand_total_salary;

public:
    void inputCandidate() {
        cout << "Input:" << endl;
        inputEngineer();
        inputMBA();
        cout << "Engineering responsibility: ";
        cin >> engineering_responsibility;
        cout << "Management responsibility: ";
        cin >> management_responsibility;
    }

    void calculateSalary() {
        // Engineering incentive = 65% of job responsibility
        engineering_incentive = (incentive_Rs_9000 * engineering_responsibility) / 100;
        
        // Management incentive = 35% of job responsibility
        management_incentive = (incentive_Rs_10000 * management_responsibility) / 100;
        
        grand_total_salary = total_salary + engineering_incentive + management_incentive;
    }

    void displayResult() {
        cout << "\nOutput:" << endl;
        displayEngineer();
        displayMBA();
        
        cout << "\nTotal salary           : " << total_salary << endl;
        cout << "Engineering incentive: " << engineering_incentive;
        cout << " [60% of Rs. " << incentive_Rs_9000 << "]" << endl;
        cout << "Management incentive:  " << management_incentive;
        cout << " [40% of Rs. " << incentive_Rs_10000 << "]" << endl;
        
        cout << "\nGrand total salary:     " << grand_total_salary << endl;
    }
};

int main() {
    BTech_MBA_Candidate candidate;
    
    cout << "Test case:" << endl;
    candidate.inputCandidate();
    candidate.calculateSalary();
    candidate.displayResult();
    
    return 0;
}

/*
Test case:
Input:
Engineering stream: IT
P_Code: P001
Total Salary: 45000
CAT Score: 925
MBA Institute: IIM Calcutta
Specialization: Marketing
Engineering responsibility: 60
Management responsibility: 40

Output:
Engineering stream: IT
P_Code: P001
CAT Score: 925
MBA Institute: IIM Calcutta
Specialization: Marketing

Total salary           : 45000
Engineering incentive: 5400 [60% of Rs. 9000]
Management incentive:  4000 [40% of Rs. 10000]

Grand total salary:     54400
*/
