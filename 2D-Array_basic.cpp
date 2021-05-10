#include<iostream>
using namespace std;


int main(){

int arr[3][4];

int ele;
cin>>ele;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cin>>arr[i][j];
    }
    
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        // cout<<arr[i][j]<<"";
        // For searching an element in matrix
        if (arr[i][j] == ele)
        {
            cout << "Element found at "<< i+1 << j+1 <<endl;
            return 0;
        }
    
    }
    cout<<"\n";
}
cout<<"Element not found";

}