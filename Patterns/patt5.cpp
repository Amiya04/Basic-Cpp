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
           cout<<num<<" ";
           num=num+1;
           col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}


/*

Output:
123
456
789

*/