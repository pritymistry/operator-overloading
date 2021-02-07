#include<iostream>
using namespace std;
class month
{
    int monthNumber;
public:
    month()
    {
        cout<<"enter month number :";
        cin>>monthNumber;
    }
    void operator++()
    {
        if(monthNumber<12)
            monthNumber+=1;
        else
            monthNumber=1;
    }
    void display()
    {
        cout<<"next month number : "<<monthNumber<<endl;
    }
};
int main()
{
    month m;
    ++m;
    m.display();
    return 0;
}
