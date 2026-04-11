//Assignment-5 Problem-2: Swap two numbers using friend function

#include<iostream>
using namespace std;

class swap_class
{
private:
    int a, b;

public:
    void input()
    {
        cout<<"Value before exchange a and b:"<<endl;
        cin>>a>>b;
    }

    void display()
    {
        cout<<"Value after exchange a and b:"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
    }

    friend void swap_values(swap_class &obj);
};

void swap_values(swap_class &obj)
{
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
}

int main()
{
    swap_class sc;
    sc.input();
    swap_values(sc);
    sc.display();
    return 0;
}

/*
Test Case:
Input:
Value before exchange a and b:
100
200

Output:
Value after exchange a and b:
200
100
*/
