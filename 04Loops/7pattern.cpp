/*

*
**
***
****
*****

*/
#include <iostream>
using namespace std;

void pattern1(int n)
{
    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    for(int i=n; i >= 1; i--){
        for(int j=n; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i=1; i <= n; i++){
        for(int j=i; j<n; j++){
            cout<<" ";
        }
        for(int k =1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    for(int i=1; i <= n; i++){
        for(int j=n; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern5(int n)
{
    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            if(i == j || i+j == n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern6(int n)
{
    int alpha = 65, num=0;
    // upper
    for(int i=1; i<=n; i++){
        for(int j=n; j>i; j--){
            cout<<" ";
        }
        // alphabets
        for(int k=0; k< i*2-1; k++){
            cout<<((char)(alpha + num++));
        }
        num =0;
        cout<<endl;
    }
    // downward
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k= (n-i)*2-1; k>0; k--){
            cout<<((char)(alpha + num++));
        }
        num = 0;
        cout<<endl;
    }
}
void pattern7(int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == n/2){
                cout<<"*";
            }else{
                if(j == n/2){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

}
void pattern8()
{
    int h=6, w=8,i,j;
    for(i=0; i<h; i++){
        cout<<endl;
        for(j=0; j<w; j++){
            if(i==0 || i==h-1 || j==0 || j==w-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
    }
}

void pattern9(int n)
{
    for(int i=1, k=0; i<= n; ++i, k=0){
        for(int s=1; s<=n-i; ++s){
            cout<<" ";
        }
        while(k != 2*i-1){
            cout<<"*";
            ++k;
        }
        cout<<endl;
    }
}

void pattern10(int n)
{
    int i,j,k;

    for(i=n+1; i>1; i--){
        for(j=i; j>2; j--){
            cout<<" ";
        }
        for(k=1; k<=(n-i+1); k++){
            if(k==1){
                cout<<(n-i+2);
            }else{
                cout<<" ";
            }
        }
        for(int m=k; m>=1; m--){
            if(m==1){
                cout<<(n-i+2);
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int size = 5;
    pattern1(size);
    cout<<endl;
    pattern2(size);
    cout<<endl;
    pattern3(size);
    cout<<endl;
    pattern4(size);
    cout<<endl;
    pattern5(size);
    cout<<endl;
    pattern6(size);
    cout<<endl;
    pattern7(size);
    cout<<endl;
    pattern8();
    cout<<endl;
    pattern9(size);
    cout<<endl;
    pattern10(size);
    return 0;
}
