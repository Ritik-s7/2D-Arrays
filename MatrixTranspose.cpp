#include<iostream>
using namespace std;

int main()
{

    int n,m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j]; 
        }
        
    }

    int Transpose [m][n];

     for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            Transpose[i][j] = arr[j][i];
        }
        
    }
    
       for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << Transpose[i][j] <<" "; 
        }
        cout << endl;
    }


}