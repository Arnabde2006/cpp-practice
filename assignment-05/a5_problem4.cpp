//Assignment-5 Problem-4: Operator Overloading for ++ and --

#include<iostream>
using namespace std;

class test
{
private:
    int a, b, c;

public:
    test()
    {
        a = 0;
        b = 0;
        c = 0;
    }

    test(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout<<"A= "<<a<<", B = "<<b<<", C = "<<c<<endl;
    }

    // Overload ++ operator (prefix)
    void operator++()
    {
        ++a;
        ++b;
        ++c;
    }

    // Overload -- operator (prefix)
    void operator--()
    {
        --a;
        --b;
        --c;
    }
};

int main()
{
    test t(1, 2, 3);
    
    cout<<"Input"<<endl;
    cout<<"Test t(1,2,3);"<<endl;
    t.display();
    
    cout<<"t++;"<<endl;
    ++t;
    t.display();
    
    cout<<"t--;"<<endl;
    --t;
    t.display();
    
    cout<<"\nOutput:"<<endl;
    t.display();
    
    return 0;
}

/*
Test case:
Input:
Test t(1,2,3);
Ldisplay();
t++;
Ldisplay();
t--;
Ldisplay();

Output:
A=1, B = 2, C = 3
A= 2, B = 3, C = 4
A= 1, B = 2, C = 3
*/
