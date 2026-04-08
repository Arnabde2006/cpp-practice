//Assignment-4 Problem-2: Employee Salary System

#include<iostream>
using namespace std;

class employee
{
private:
    int age;
    float basic;
    int year_exp;
    float da;
    float ta;
    float extra;
    float total_salary;

public:
    void input()
    {
        cout<<"Age: ";
        cin>>age;
        cout<<"Basic: ";
        cin>>basic;
        cout<<"Year_Exp: ";
        cin>>year_exp;
    }

    void calculate()
    {
        da = basic * 0.60;  // DA = 60% of basic
        ta = basic * 0.10;  // TA = 10% of basic
        
        // Extra allowance for experience > 5 years
        if(year_exp > 5)
        {
            extra = 1200;
        }
        else
        {
            extra = 0;
        }
        
        // Total salary = Basic + DA + TA + Extra
        total_salary = basic + da + ta + extra;
    }

    void display(int emp_num)
    {
        cout<<"\nEmployee-"<<emp_num<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Basic: "<<basic<<endl;
        cout<<"Year_Exp: "<<year_exp<<endl;
        cout<<"Total salary: "<<total_salary<<endl;
    }

    float getTotalSalary()
    {
        return total_salary;
    }
};

int main()
{
    employee emp[3];
    int i;
    float total_cost = 0;

    cout<<"Enter following information of the employees:-"<<endl;
    
    for(i=0; i<3; i++)
    {
        emp[i].input();
        emp[i].calculate();
        cout<<endl;
    }

    cout<<"Output:"<<endl;
    
    for(i=0; i<3; i++)
    {
        emp[i].display(i+1);
    }

    // Calculate total cost
    for(i=0; i<3; i++)
    {
        total_cost = total_cost + emp[i].getTotalSalary();
    }

    cout<<"\nTotal salary paid to all employees: "<<total_cost<<endl;

    return 0;
}

/*
Test case:
Input:
Enter following information of the employees:-
Age: 38
Basic: 12000
Year_Exp: 8

Age: 41
Basic: 14000
Year_Exp: 4

Age: 38
Basic: 8000
Year_Exp: 9

Output:
Employee-1
Age: 38
Basic: 12000
Year_Exp: 8
Total salary: 21600
(Calculation: 12000 + 7200(DA) + 1200(TA) + 1200(Extra) = 21600)

Employee-2
Age: 41
Basic: 14000
Year_Exp: 4
Total salary: 23800
(Calculation: 14000 + 8400(DA) + 1400(TA) + 0(Extra) = 23800)

Employee-3
Age: 38
Basic: 8000
Year_Exp: 9
Total salary: 14800
(Calculation: 8000 + 4800(DA) + 800(TA) + 1200(Extra) = 14800)

Total salary paid to all employees: 60200
*/
