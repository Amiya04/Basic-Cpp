#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;
    int num=1;

    while (row<=n)
    {   
        int col=1;
        while (col<=n)
        {
           cout<<n*n-num+1<<" ";
           num=num+1;
           col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}


/*

Output:
9 8 7
6 5 4
3 2 1

*/