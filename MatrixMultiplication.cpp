#include<iostream>
using namespace std;

int main()
{

    int l,m,n;
    cin >> l >> m >> n;


    int a1[l][m];

    int a2[m][n];

    int ans[l][n];

    for (int i = 0; i < l; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cin>>a1[i][j]; 
        }
        
    }


    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cin>>a2[i][j]; 
        }

    }
     
    
    for (int i = 0; i < l; i++)
    {

        for (int j = 0; j < n; j++)
        {
            ans[i][j] = 0; 
        }


    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
           
            for (int k = 0; k < m; k++)
            {
                
                ans[i][j] += a1[i][k]*a2[k][j];
                
            }
            
            
        }
        
    }

    for (int i = 0; i < l; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] <<" "; 
        }
        cout << endl;
    }

    




    
}