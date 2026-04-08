//Assignment-4 Problem-1: Cricket Organization

#include<iostream>
using namespace std;

class cricketer
{
private:
    string name;
    int no_of_inn;
    int not_out_inn;
    int total_run;
    int total_wkt;
    float batting_avg;

public:
    void input()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"No_Of_Inn: ";
        cin>>no_of_inn;
        cout<<"Not_Out_Inn: ";
        cin>>not_out_inn;
        cout<<"Total_run: ";
        cin>>total_run;
        cout<<"Total_Wkt: ";
        cin>>total_wkt;
    }

    void calculate()
    {
        batting_avg = (float)total_run / (no_of_inn - not_out_inn);
    }

    void display()
    {
        cout<<"\nBatting Average: "<<batting_avg<<endl;
        
        // Check ALL ROUNDER first (satisfies both BATSMAN and BOWLER conditions)
        if(batting_avg > 35 && no_of_inn >= 50 && total_wkt > 49)
        {
            cout<<"He is an ALL ROUNDER"<<endl;
        }
        // Check if BATSMAN only
        else if(batting_avg > 35 && no_of_inn >= 50)
        {
            cout<<"He is a BATSMAN"<<endl;
        }
        // Check if BOWLER only
        else if(no_of_inn >= 50 && total_wkt > 49)
        {
            cout<<"He is a BOWLER"<<endl;
        }
        else
        {
            cout<<"Does not qualify for any category"<<endl;
        }
    }
};

int main()
{
    cricketer c;
    c.input();
    c.calculate();
    c.display();
    return 0;
}

/*
Test case-1:
Input:
Name: Rahul
No_Of_Inn: 120
Not_Out_Inn: 20
Total_run: 8500
Total_Wkt: 11

Batting Average = 8500 / (120 - 20) = 8500 / 100 = 85
Conditions: avg > 35? Yes, inn >= 50? Yes, wkt > 49? No

Output:
He is a BATSMAN

Test case-2:
Input:
Name: kapil
No_Of_Inn: 150
Not_Out_Inn: 30
Total_run: 7900
Total_Wkt: 450

Batting Average = 7900 / (150 - 30) = 7900 / 120 = 65.83
Conditions: avg > 35? Yes, inn >= 50? Yes, wkt > 49? Yes

Output:
He is an ALL ROUNDER
*/
