/*
Program to check wheather the number can be expressed as a sum of two prime numbers.

*/
#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    int f1 = 2, f2 = 1, f3=0;
    cout<<"Enter +ve Integer:" ;
    cin>>n;  // 14
    i=3;
    do{
        f1=f2=1;
        j = 2;
        do{
            if(i%j == 0){
                f1 = 0;
                j = i;
            }
            j = 2;
            do{
                if((n-i)%j == 0){
                    f2 = 0;
                    j = n-i;
                }
                j++;
            }
            while(j< n-i);

            if(f1==1 && f2==1){
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                f3 = 1;
            }
            j++;
        }
        while(j<i);
        i++;
    }
    while(i < n/2);
    if(f3 == 0){
        cout<<n<<" can no be expressed as sum of two Prime Numbers.";
    }
    return 0;
}
