// #include<iostream>
// using namespace std; 

// int main()
// {
//     int n ;
//     cout<<"enter no of rows :";
//     cin>>n;

//     for ( int row = 0 ;  row < n ; row++){
//         for(int col =0 ; col < n ; col++){
//             if( row == 0 || row ==n - 1 ){
//                 cout<<"* ";
//             }
//              else {
//                  if(col == 0 || col == n -1)
//                  {
//                      cout<<"* ";
//                  }
//                  else{
//                      cout<<"  ";
//                  }
//              }
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"ENter n :";
    cin>>n;

    for(int rows=0;rows<n;rows++)
    {
        for(int cols=0;cols<n;cols++)
        {
            if(rows!=0&&rows!=n-1)
            {
                if(cols==0 || cols==n-1)
                    cout<<"* ";
                else
                    cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
        
    }

}