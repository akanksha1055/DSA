// #include<iostream>
// using namespace std;

// int main()
// {
//     int n ;
//     cin>>n ; 

//     for (int row = 0 ; row < n ; row++)
//     {
//         for (int col = 0 ; col< n ; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the N:";
    cin>>n;

    for(int rows=0;rows<n;rows++)
    {
        for(int col=0;col<n;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}