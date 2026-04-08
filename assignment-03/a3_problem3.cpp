//Problem-3.3:

#include<iostream>
#include<iomanip>
using namespace std;

class student
{
private:
    int roll;
    string name;
    int age;
    int m1,m2,m3,m4,m5;
    int total;

public:
    void input()
    {
        cout<<"Enter Roll number: ";
        cin>>roll;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter marks of subject 1: ";
        cin>>m1;
        cout<<"Enter marks of subject 2: ";
        cin>>m2;
        cout<<"Enter marks of subject 3: ";
        cin>>m3;
        cout<<"Enter marks of subject 4: ";
        cin>>m4;
        cout<<"Enter marks of subject 5: ";
        cin>>m5;
    }

    void calculate()
    {
        total=m1+m2+m3+m4+m5;
    }

    int getTotal()
    {
        return total;
    }

    int getRoll()
    {
        return roll;
    }

    int getAge()
    {
        return age;
    }

    string getName()
    {
        return name;
    }

    void display()
    {
        cout<<roll<<"\t"<<name<<"\t"<<age<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<"\t"<<m5<<endl;
    }
};

int main()
{
    student s[5];
    int i;
    int highestMarks=0;
    int topperIndex=0;

    for(i=0;i<5;i++)
    {
        cout<<"\nStudent-"<<(i+1)<<" Details:"<<endl;
        s[i].input();
        s[i].calculate();
    }

    cout<<"\n\tDetails of All student"<<endl;
    cout<<"ROLL\tNAME\tAGE\tSUB-1\tSUB-2\tSUB-3\tSUB-4\tSUB-5"<<endl;

    for(i=0;i<5;i++)
    {
        s[i].display();
    }

    // Find the topper
    highestMarks=s[0].getTotal();
    topperIndex=0;

    for(i=1;i<5;i++)
    {
        if(s[i].getTotal()>highestMarks)
        {
            highestMarks=s[i].getTotal();
            topperIndex=i;
        }
    }

    cout<<"\nTopper of the BCA 3rd semester"<<endl;
    cout<<"\nHighest Marks="<<highestMarks<<endl;
    cout<<"Roll Number of Highest Scorer="<<s[topperIndex].getRoll()<<endl;
    cout<<"Age of Highest Scorer="<<s[topperIndex].getAge()<<endl;

    return 0;
}

/*
Test case:
Input:
Student-1: Roll=1, Name=Rohit, Age=19, m1=81, m2=67, m3=78, m4=90, m5=85
Student-2: Roll=2, Name=Binoy, Age=20, m1=34, m2=56, m3=81, m4=70, m5=65
Student-3: Roll=3, Name=Mohit, Age=19, m1=45, m2=56, m3=46, m4=55, m5=60
Student-4: Roll=4, Name=Sourav, Age=21, m1=70, m2=75, m3=80, m4=65, m5=72
Student-5: Roll=5, Name=Anik, Age=19, m1=50, m2=60, m3=55, m4=45, m5=70

Output:
Topper of the BCA 3rd semester

Highest Marks=401
Roll Number of Highest Scorer=1
Age of Highest Scorer=19
*/
