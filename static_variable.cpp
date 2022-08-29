#include <bits/stdc++.h>


using namespace std;



class vars
{
    public:
static int xx;//class variable or member variable





};

int vars::xx;
int main()
{


    static int x;//static local variable
    cout<<x<<endl;
cout<<vars::xx<<endl;//printing the variable
    return 0;
}