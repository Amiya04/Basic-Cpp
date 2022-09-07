#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
     while (row<=n)
     {
        int col=1;
        char ch= 'A'+ row -1;

        while (col<=row)
        {
            cout<<ch;
            ch=++ch;
            col=++col;
        }
        cout<<endl;
        row=++row;
     }
     
}


/*

Output :
A
BC
CDE
DEFG


*/