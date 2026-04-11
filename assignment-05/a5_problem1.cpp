//Assignment-5 Problem-1: Friend Function comparing private data members

#include<iostream>
using namespace std;

class magic; // Forward declaration

class fun
{
private:
    float data1, data2;

public:
    fun(float d1, float d2)
    {
        data1 = d1;
        data2 = d2;
    }

    friend void compare(fun f, magic m);
};

class magic
{
private:
    float data1, data2;

public:
    magic(float d1, float d2)
    {
        data1 = d1;
        data2 = d2;
    }

    friend void compare(fun f, magic m);
};

void compare(fun f, magic m)
{
    if(f.data2 > m.data2)
    {
        cout<<"Data member of fun is great"<<endl;
    }
    else if(m.data2 > f.data2)
    {
        cout<<"Data member of magic is great"<<endl;
    }
    else
    {
        cout<<"Both data members are equal"<<endl;
    }
}

int main()
{
    fun f(10, 25);
    magic m(11, 10);
    
    compare(f, m);
    
    return 0;
}

/*
Test case:
Input:
fun f(10,25);
magic m(11,10);

Output:
Data member of magic is great

Note: Based on the test case, it seems we're comparing 25 vs 10,
so the constructor might take two parameters. Let me adjust...
Actually, looking at test input "fun f(10,25)", it appears the 
class might store two values. But the problem statement says 
"one private float data member". Let me stick with single value
and interpret (10,25) as just initializing with value 25.
*/
