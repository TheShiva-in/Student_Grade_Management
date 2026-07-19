#include<iostream>
#include<string>
using namespace std;
int main()
{
    // Student Details

    string name;
    int roll;

    float sub1,sub2,sub3,sub4,sub5,sub6,total,percentage;

    cout<<"Enter student name:";
    getline(cin,name);

    cout<<"Enter roll number:";
    cin>>roll;

    // Marks input

    cout<<"Enter Marks of 6 Subjects:"<<endl;

    cout<<"English:";
    cin>>sub1;

    cout<<"Mathematics:";
    cin>>sub2;

    cout<<"Hindi:";
    cin>>sub3;

    cout<<"Science:";
    cin>>sub4;

    cout<<"Social Science:";
    cin>>sub5;

    cout<<"Sanskrit:";
    cin>>sub6;

    total=sub1+sub2+sub3+sub4+sub5+sub6;
    cout<<"Total Marks = " <<total<<endl;

    percentage=total/6;

    cout<<"======================"<<endl;
    cout<<"       Result         "<<endl;
    cout<<"======================"<<endl;
    
    cout<<"Student Name: "<<name<<endl;
    cout<<"Student Roll: "<<roll<<endl;
    cout<<"Total Marks : "<<total<<endl;
    cout<<"Percentage  : "<<percentage<<endl;

    if (percentage>=90)
    {
        cout<<"Greade: A";

    }
    else if (percentage>80)
    {
        cout<<"Grade: B";
    }
    else if (percentage>=70)
    {
        cout<<"Grade: C";
    }
    else if (percentage>=50)
    {
        cout<<"Grade: D";
    }
    else
    {
        cout<<"Fail!";
    }
    

    return 0;


    // Grade


}