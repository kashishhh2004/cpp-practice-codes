#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter the no. of rows :" << endl;
    cin >> n;
    cout << "enter the no. of columns :" << endl;
    cin >> m;
    int arr[n][m];
    cout << "enter elements of the matrix: "; // example 1 2
                                              //         3 4
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "element at [" << i << "][" << j << "] : ";

            cin >> arr[i][j];
        }
    }
    cout << "matrix is :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " "; // arr= matrix
        }
        cout << endl;
    }
    bool flag = false;
    int x;
    cout << "enter element to search :" << endl;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
}