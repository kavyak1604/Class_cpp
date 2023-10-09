#include <iostream>
using namespace std;
class cube
{
    public:
    double side=1.0;

};
int main()
{
    struct cube cu1;
    cout<<"enter the side:";
    cin>>cu1.side;
    double vol=cu1.side*cu1.side*cu1.side;
    cout<<vol;



}
/*enter the side:4
64/*
