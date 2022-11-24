#include<iostream>

#include<vector>

using namespace std;

void rotate(vector<vector<int>>& matrix)
{
    int N=matrix[0].size();

    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {

            int temp = matrix[i][j];
            matrix[i][j] = matrix[N - 1 - j][i];
            matrix[N - 1 - j][i] = matrix[N - 1 - i][N - 1 - j];
            matrix[N - 1 - i][N - 1 - j] = matrix[j][N - 1 - i];
            matrix[j][N - 1 - i] = temp;
        }
    }
}

int main()
{

    int row , col;
    cout<<"Enter number of rows : ";
    cin>>row;
    cout<<"Enter number of columns :";
    cin>>col;
    vector<vector<int>>arr(row , vector<int>(col));

    if(row == col){
        for(int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                cin>>arr[i][j];
            }
        }
    }
    else{
        cout<<"Row and col must be same:"<<endl;
    }

    rotate(arr);

    cout<<"The rotated matrix is as shown below : "<<endl;

    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
