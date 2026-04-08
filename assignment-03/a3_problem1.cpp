//Problem-3.1:

#include<iostream>
using namespace std;

class palindrome
{
private:
    long int num;
    long int result;
    bool isPalin;

public:
    void input()
    {
        cout<<"Enter the data: ";
        cin>>num;
    }

    void checkPalindrome()
    {
        long int original=num;
        long int reversed=0;
        long int temp=num;
        
        while(temp>0)
        {
            reversed=reversed*10+temp%10;
            temp=temp/10;
        }

        if(original==reversed)
        {
            isPalin=true;
        }
        else
        {
            isPalin=false;
        }
    }

    void calculate()
    {
        if(isPalin==true)
        {
            result=num*2;
        }
        else
        {
            result=num/2;
        }
    }

    void display()
    {
        if(isPalin==true)
        {
            cout<<"It is Palindrome number, so final result is "<<result<<endl;
        }
        else
        {
            cout<<"It is not Palindrome number, so final result is "<<result<<endl;
        }
    }
};

int main()
{
    palindrome object;
    object.input();
    object.checkPalindrome();
    object.calculate();
    object.display();
    return 0;
}

/*
Test case-1:
Input:
Enter the data: 161
Output:
It is Palindrome number, so final result is 322

Test case-2:
Input:
Enter the data: 244
Output:
It is not Palindrome number, so final result is 122
*/
