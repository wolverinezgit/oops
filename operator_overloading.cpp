#include <bits/stdc++.h>


using namespace std;



class vars
{
    public:
static int xx;//class variable or member variable

int x1=3;
//FOR BINARY OPERATOR
vars operator+ (vars ob)
{
vars temp;
temp.x1=this->x1+ob.x1;
return temp;
}


// FOR UNARY OPERATORS

vars operator+ ()
{
vars temp;
temp.x1=this->x1+1;
return temp;
}




};
int main()
{

    vars a1,a2;
    vars a3=a1+a2;// a1 is caller object 
    // vars a3=a1.operator+(a2);ALTERNATIVE
    cout<<a3.x1<<endl;

//FOR UNARY ADDITION
    vars a4=+a1;
    cout<<a4.x1<<endl;
 

}
