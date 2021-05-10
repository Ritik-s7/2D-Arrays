#include<iostream>
using namespace std;

// Matrix is sorted

int main()
{

    int n,m,num;
    cin >> n >> m >> num;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j]; 
        }
        
    }

// One way is to search Linearly but for this time complexity will be O(mn) for a m x n matrix
// Other way is coded below


int row = 0, col = m-1;
bool found = false;
while (row < n && col >= 0)
{
    if (arr[row][col] == num)
    {
        found = true;
        break;
    }

    if (arr[row][col] > num)
    {
        col--;
        cout<<row<<","<<col<<endl;
    }

    else
    {
        row++;
        cout<<row<<","<<col<<endl;
    } 
}

if (found == true)
{
    cout<<"Element found at "<< row <<", "<< col;
}

else
{
    cout<<"Element not found";
}


}

