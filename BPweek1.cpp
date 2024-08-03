#include<iostream>
#include<math.h>
using namespace std;

// decimal to binary 

// int decimal_to_binary(int n)
// {
//     int binarynum =0;
//     int i =0;
//     while (n>0)
//     {
//         int bit = n%2 ; //(n&1);  =>bitwise method      
//         binarynum = bit * pow(10 , i++) + binarynum;
//         n = n /2; //n>>1;  =>bitwise method 

//     }
//     return binarynum;

// }

// int main ()
// {
//     int num ; 
//     cout <<"NUMBER : "<<endl;
//     cin>> num ;
//     int binary = decimal_to_binary(num);
//     cout<<binary;

//     return 0 ;

// }

// binary to decimal 
int binary_to_decimal (int n)
{
    int decimal =0;
    int i =0;
    while (n>0)
    {
       int bit = n % 10 ; 
       decimal = bit * pow(2 , i++) + decimal ;
       n = n /10; 
       
    }
    return decimal;

}

int main()
{
    int binary ; 
    cout << "enter binary number :";
    cin >> binary;

    int decimal = binary_to_decimal(binary);
    cout<<decimal;
}
