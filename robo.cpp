#include <iostream>
using namespace std ;


int main()
{
   /* #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif*/

    int t ;
    cin >> t ;
    for(int i = 0 ; i < t ; i++)
    {
        int r, c , rb , cb , rd , cd ;
        cin >> r >> c >> rb >> cb >> rd >> cd ;
        long long int dr = 1 ;
        long long int dc = 1 ;
        int steps = 0 ;
        while(1){

        
        if(rb == rd || cb == cd)
        {
            break ;
        }
        if(dr = 1 && rb == r)
        {
            dr = -1 * dr ;
        }
        else if(dr == 1 && rb == 1)
        {
           dr = 1 ;
        }
    
        if(dc == 1 && cb == c)
        {
            dc = -1 * dc ;
        }else      if(dc = -1 && cb == 1)
        {
            dc = 1 ;
        }
           rb += dr ;
           cb += dc ;
           steps++ ;

        }

        cout << steps << "\n" ;
    
    }
}