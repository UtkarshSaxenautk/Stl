#include <bits/stdc++.h>
using namespace std ;
 

bool check(int arr[1000][1000], int r , int c , int rb , int cb , int rd , int cd)
{
    int count1 =  0 ;
    int count2 = 0 ;
    for(int i =1 ; i <= r ; i++)
    {
        if(arr[i][c] == 1)
        {
            count1++ ;
        }
    }
    for(int j = 1 ; j <= c ; j++)
    {
        if(arr[r][j] == 1)
        {
            count2++ ;
        }
    }
    if(count1 == 2 || count2 == 2)
    {
        return true ;
    }
    return false ;
}

int main()
{
    int t ;
    cin >> t ;
    while(t < 0)
    {
        int r , c , rb , cb , rd , cd ;
        cin >> r >> c >> rb >> cb >> rd >> cd ;
        int arr[1000][1000] ;
        for(int i =1 ; i <= r ; i++)
        {
            for(int j = 1 ; j <= c ; j++)
            {
                arr[i][j] = 0 ;
            }
        }
        
        arr[rb][cb] = 1 ;
        arr[rd][cd] = 1 ;
        
        int mr = rb ;
        int mc = cb ;
        int steps = 0 ;
        
        while(check(arr , r , c , rb , cb , rd , cd) != true)
        {
            if(rb == r  && cb < c )
            {
                if(cb < c/ 2)
                {
                rb-- ;
                cb++ ;
                steps++ ;
                }
                else
                {
                    rb-- ;
                    cb-- ;
                    steps++ ;
                }
            }
            else if(rb == 1 && cb < c)
            {
                 if(cb < c/ 2)
                {
                rb++ ;
                cb++ ;
                steps++ ;
                }
                else
                {
                    rb++ ;
                    cb-- ;
                    steps++ ;
                }
            }
            else if(rb == 1 && cb == 1)
            {
                rb++ ;
                cb++ ;
                steps++ ;
            }
            else if(rb == 1 && cb == c)
            {
                rb++ ;
                cb-- ;
                steps++ ;
            }
            else if(rb == r && cb == 1)
            {
                rb-- ;
                cb++ ;
                steps++ ;
            }
            else if(rb == r && cb == r)
            {
                rb-- ;
                cb-- ;
                steps++ ;
            }
            else if(cb == c && rb < r)
            {
                if(rb < r/2)
                {
                    rb++ ;
                    cb-- ;
                    steps++ ;
                }
                else
                {
                    rb-- ;
                    cb-- ;
                    steps++ ;
                }
            }
            else if(cb == 1 && rb < r)
            {
                if(rb < r/2)
                {
                    rb++ ;
                    cb++ ;
                    steps++ ;
                }
                else
                {
                    rb-- ;
                    cb++ ;
                    steps++ ;
                }
            }
            else 
            {
                rb++ ;
                cb++ ;
                steps++ ;
            }
            
        }
        cout << steps << "\n" ;
        t-- ;
        
    }
    
    
}