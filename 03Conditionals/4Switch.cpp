/*
Caculator using Switch statements.
*/
#include<iostream>
using namespace std;

int main()
{
    char op;
    float x,y;
    cout<<"Enter two numbers to peform operation: ";
    cin>>x>>y;
    cout<<"Choose the operation (+ - * / ): ";
    cin>>op;

    switch (op) {
        case '+':
            cout<<x<<" + "<<y<<" = "<<x+y<<endl;
            break;
        case '-':
            cout<<x<<" - "<<y<<" = "<<x-y<<endl;
            break;
        case '*':
            cout<<x<<" * "<<y<<" = "<<x*y<<endl;
            break;
        case '/':
            cout<<x<<" / "<<y<<" = "<<x/y<<endl;
            break;
        defalut:
            cout<<"Enter valid operation: "<<endl;
    }
    return 0;
}
