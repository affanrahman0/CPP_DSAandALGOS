#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
class employee{
    public:
        string name;
        int salary;
        employee(string s,int n,int pass) //constructor
        {
            /*this->*/name=s;
            /*this->*/salary=n;
            /*this->*/password=pass;
        }     
        void print()
        {
            cout<< "Name of the employee is "<<this->name<< " and his salary is Rs"<<this->salary<<endl;
        }
        void print2();
        void printpass()
        {
            cout<<"The secret password is "<<this->password<<endl;
        }
    private:
        int password;    
        

};
class Child : public employee  // inheritance
{
    public:
      int id_c;
};
void employee::print2()
{
    cout<< this->name<<" dreams to get a salary of RS" <<this->salary<<endl;
}
int main()
{
    employee h("Joseph",250,7970709);

    // Child h;
    // h.name="affan";
    // h.salary=250;
    // h.id_c=8;
    h.print();
    h.print2();
    h.printpass();
    
    //cout<<"The secret password is "<<h.password<<endl;(not accessible)
    return 0;
}