#include <iostream>
#include <cstdlib>
using namespace std;
void MM (int n, int a[][3], int b[][3], int c[][3]);

int main()
{
    //const int i = 2;
    const int n = 3;
    int a[n][n];
    int b[n][n];
    int c[n][n];

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            a[i][j] = rand()%10;
            b[i][j] = rand()%10;
        }
    }

    cout << "First Matrix" << endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Second Matrix" << endl;
     for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            c[i][j]=0;
        }
        cout << endl;
    }

    cout << "Matrix Multiplication" << endl;
    MM (n, a, b, c);

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void MM (int n, int a[][3], int b[][3], int c[][3])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}
