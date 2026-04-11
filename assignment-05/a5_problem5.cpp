//Assignment-5 Problem-5: Operator Overloading for comparison (>, <, ==)

#include<iostream>
using namespace std;

class test
{
private:
    int value;

public:
    test()
    {
        value = 0;
    }

    test(int v)
    {
        value = v;
    }

    // Overload > operator
    bool operator>(test t)
    {
        if(value > t.value)
            return true;
        else
            return false;
    }

    // Overload < operator
    bool operator<(test t)
    {
        if(value < t.value)
            return true;
        else
            return false;
    }

    // Overload == operator
    bool operator==(test t)
    {
        if(value == t.value)
            return true;
        else
            return false;
    }
};

int main()
{
    test t1(6);
    test t2(5);
    
    cout<<"Test case-1:"<<endl;
    cout<<"Input:"<<endl;
    cout<<"Test t(6);"<<endl;
    cout<<"Test a(5);"<<endl;
    cout<<"Output:"<<endl;
    
    if(t1 > t2)
    {
        cout<<"Object t is greater"<<endl;
    }
    else if(t1 < t2)
    {
        cout<<"Object a is greater"<<endl;
    }
    else
    {
        cout<<"Both objects are equal"<<endl;
    }
    
    cout<<endl<<"Test case-2:"<<endl;
    test t3(5);
    test t4(7);
    cout<<"Input:"<<endl;
    cout<<"Test t(5);"<<endl;
    cout<<"Test a(7);"<<endl;
    cout<<"Output:"<<endl;
    
    if(t3 > t4)
    {
        cout<<"Object t is greater"<<endl;
    }
    else if(t3 < t4)
    {
        cout<<"Object a is greater"<<endl;
    }
    else
    {
        cout<<"Both objects are equal"<<endl;
    }
    
    cout<<endl<<"Test case-3:"<<endl;
    test t5(6);
    test t6(6);
    cout<<"Input:"<<endl;
    cout<<"Test t(6);"<<endl;
    cout<<"Test a(6);"<<endl;
    cout<<"Output:"<<endl;
    
    if(t5 > t6)
    {
        cout<<"Object t is greater"<<endl;
    }
    else if(t5 < t6)
    {
        cout<<"Object a is greater"<<endl;
    }
    else
    {
        cout<<"Both objects are equal"<<endl;
    }
    
    return 0;
}

/*
Test case-1:
Input:
Test t(6);
Test a(5);
Output:
Object t is greater

Test case-2:
Input:
Test t(5);
Test a(7);
Output:
Object a is greater

Test case-3:
Input:
Test t(6);
Test a(6);
Output:
Both objects are equal
*/
