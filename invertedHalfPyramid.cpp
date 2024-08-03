// #include<iostream>
// using namespace std; 

// int main()
// {
//     int n ; 
//     cout<<"enter no of rows :";
//     cin>>n;

//     for (int row = 0 ; row< n ; row++){
//         for (int col = 0 ; col <n - row ; col++)
//         {
//             if( row == 0 ){
//                 cout<<"* ";

//             }
//             else 
//             {
//                 if (col == 0 || col == n-(row+1))
//                     cout<<"* ";
//                 else 
//                 {
//                     cout<<"  ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter n :";
    cin>>n;

    for(int rows=0;rows <n; rows++)
    {
        for(int col=0 ; col<n-rows; col++)
        {
            if(rows==0)
            {
                cout<<"* ";
            }
            else{
                if(col==0 || col== n-(rows+1))
                    cout<<"* ";
                else
                {
                    cout<< "  ";
                }
            }
        }
        cout<<endl;
    }
}