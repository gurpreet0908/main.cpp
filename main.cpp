#include<iostream>
using namespace std;
int main()
{
    int hours;
    cout<<"enter the hours";
    cin>>hours;
    if (hours>=9 && hours<=18)
    {
        cout<<"its"<<" "<<hours<<" "<< "working hour";
    }
    else
    {
        cout<<"its"<<" "<<hours<<" "<<" leisure hours";
    }
return 0;
}
