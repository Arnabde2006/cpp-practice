//Problem-3.2:

#include<iostream>
#include<iomanip>
using namespace std;

class student
{
private:
    int roll;
    string name;
    int age;
    int m1,m2,m3;
    int total;
    float average;

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
    }

    void calculate()
    {
        total=m1+m2+m3;
        average=(float)total/3;
    }

    void display()
    {
        cout<<roll<<"\t"<<name<<"\t"<<age<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<endl;
    }

    void displayTotal(int num)
    {
        cout<<"Total marks of Student-"<<num<<" is: "<<total<<endl;
        cout<<"Average marks of student-"<<num<<" is: "<<fixed<<setprecision(2)<<average<<endl;
    }
};

int main()
{
    student s[3];
    int i;

    for(i=0;i<3;i++)
    {
        cout<<"\nStudent-"<<(i+1)<<" Details:"<<endl;
        s[i].input();
        s[i].calculate();
    }

    cout<<"\n\tDetails of All student"<<endl;
    cout<<"ROLL\tNAME\tAGE\tSUB-1\tSUB-2\tSUB-3"<<endl;

    for(i=0;i<3;i++)
    {
        s[i].display();
    }

    cout<<endl;
    for(i=0;i<3;i++)
    {
        s[i].displayTotal(i+1);
    }

    return 0;
}

/*
Test case:
Input:
Student-1: Roll=1, Name=Rohan, Age=19, m1=81, m2=67, m3=78
Student-2: Roll=2, Name=Saikat, Age=20, m1=34, m2=56, m3=81
Student-3: Roll=3, Name=Manoj, Age=19, m1=45, m2=56, m3=46

Output:
        Details of All student
ROLL    NAME    AGE     SUB-1   SUB-2   SUB-3
1       Rohan   19      81      67      78
2       Saikat  20      34      56      81
3       Manoj   19      45      56      46

Total marks of Student-1 is: 226
Average marks of student-1 is: 75.33
Total marks of Student-2 is: 171
Average marks of student-2 is: 57.00
Total marks of Student-3 is: 147
Average marks of student-3 is: 49.00
*/
