//Assignment-5 Problem-3: Calculate sum and average using friend functions

#include<iostream>
using namespace std;

class calculation
{
private:
    float num1, num2, num3;
    float sum;
    float avg;

public:
    void input()
    {
        cout<<"Input: calculate(";
        cin>>num1;
        cout<<", ";
        cin>>num2;
        cout<<", ";
        cin>>num3;
        cout<<");"<<endl;
    }

    friend void calculate(calculation &c, int n1, int n2, int n3);
    friend void calculate(calculation &c, float n1, float n2, int n3);
    friend void calculate(calculation &c, int n1, float n2, float n3);

    void display()
    {
        cout<<"Output: Sum = "<<sum<<endl;
        cout<<"Average = "<<avg<<endl;
    }
};

// Function for 3 integers
void calculate(calculation &c, int n1, int n2, int n3)
{
    c.sum = n1 + n2 + n3;
    c.avg = c.sum / 3.0;
}

// Function for 2 float, 1 integer
void calculate(calculation &c, float n1, float n2, int n3)
{
    c.sum = n1 + n2 + n3;
    c.avg = c.sum / 3.0;
}

// Function for 1 int, 2 float
void calculate(calculation &c, int n1, float n2, float n3)
{
    c.sum = n1 + n2 + n3;
    c.avg = c.sum / 3.0;
}

int main()
{
    calculation c1, c2;
    
    cout<<"Test case-1:"<<endl;
    cout<<"Input: calculate(4, 8, 6);"<<endl;
    calculate(c1, 4, 8, 6);
    c1.display();
    
    cout<<endl<<"Test case-2:"<<endl;
    cout<<"Input: calculate(6, 4.5, 3);"<<endl;
    float f1 = 6.0f, f2 = 4.5f;
    int i3 = 3;
    calculate(c2, f1, f2, i3);
    c2.display();
    
    return 0;
}

/*
Test case-1:
Input: calculate(4, 8, 6);
Output: Sum = 18
Average = 6

Test case-2:
Input: calculate(6, 4.5, 3);
Output: Sum = 13.5
Average = 4.5
*/
