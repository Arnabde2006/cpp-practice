//Assignment-4 Problem-3: Electric Bill Calculator

#include<iostream>
using namespace std;

class electricbill
{
private:
    int customer_id;
    string customer_name;
    int units;
    float cost;

public:
    void input()
    {
        cout<<"Customer id: ";
        cin>>customer_id;
        cout<<"Customer name: ";
        cin>>customer_name;
        cout<<"Unit: ";
        cin>>units;
    }

    void calculate()
    {
        cost = 0;
        
        if(units <= 100)
        {
            // Up to 100 units: Rs. 1.2 per unit
            cost = units * 1.2;
        }
        else if(units <= 300)
        {
            // First 100 units at Rs. 1.2
            // Remaining units (up to 300) at Rs. 2
            cost = 100 * 1.2 + (units - 100) * 2;
        }
        else
        {
            // First 100 units at Rs. 1.2
            // Next 200 units at Rs. 2
            // Remaining units at Rs. 3
            cost = 100 * 1.2 + 200 * 2 + (units - 300) * 3;
        }
    }

    void display()
    {
        cout<<"\nCost: "<<cost<<endl;
        
        // Display calculation method for units > 300
        if(units > 300)
        {
            cout<<"Calculation method: 100*1.2+200*2+"<<(units-300)<<"*3="<<cost<<endl;
        }
        else if(units > 100)
        {
            cout<<"Calculation method: 100*1.2+"<<(units-100)<<"*2="<<cost<<endl;
        }
        else
        {
            cout<<"Calculation method: "<<units<<"*1.2="<<cost<<endl;
        }
    }
};

int main()
{
    electricbill eb;
    eb.input();
    eb.calculate();
    eb.display();
    return 0;
}

/*
Test case:
Input:
Customer id: 101
Customer name: Sayan
Unit: 400

Output:
Cost: 820
Calculation method: 100*1.2+200*2+100*3=820

Breakdown:
- First 100 units: 100 × 1.2 = 120
- Next 200 units: 200 × 2 = 400
- Remaining 100 units: 100 × 3 = 300
- Total: 120 + 400 + 300 = 820
*/
