#include<iostream>
using namespace std;
class Student
{
    private:
    int roll;
    char Name[20];
    int phy,chem,math,eng,comp;
    float tot,per;
    char grade;
    public:
    void input();
    void calculate();
    void show();
};
void Student::input()
{
 cout<<"\n Enter Name";
 cin>>Name;
 cout<<"Enter Roll Number";
 cin>>roll;
  cout<<"Enter Phy Marks";
 cin>>phy;
 cout<<"Enter Chem Marks";
 cin>>chem;
 cout<<"Enter Maths Marks";
 cin>>math;
 cout<<"Enter Computer Marks";
 cin>>comp;
 cout<<"Enter English Marks";
 cin>>eng;
  
}
void Student::calculate()
{
tot=phy+chem+comp+math+eng;
per=(tot*100)/500;
if(per >=90)
grade='A';
else if (per >=70)
grade='B';
else if (per >=50)
grade='C';
else if (per>=40)
grade='D';
else
grade='E';
}
void Student::show()
{
    cout<<"\n Name : "<<Name;
    cout<<"\n Roll : "<<roll;
    cout<<"\n Total Marks :"<<tot;
    cout<<"\n Percentage "<<per;
    cout<<"\n Grade    :"<<grade;

}
int main()
{
    Student x;
    x.input();
    x.calculate();
    x.show();
    return 0;
}