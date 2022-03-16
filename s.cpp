#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std ;


int main()
{
    int t ;
    cin >> t ;
    for(int i =0 ; i  < t ; i++)
    {
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for(int i =0 ; i < n ; i++)
        {
            cin >> v[i] ;
        }

        vector<int> v1 = v ;

        sort(v.begin() , v.end());
        auto ip = unique(v.begin() , v.end());
        v.resize(distance(v.begin() , ip));

        vector<int> frq(v.size()) ;

        for(int i = 0 ; i < v.size() ; i++)
        {
            frq[i] = count(v1.begin() , v1.end() , v[i]) ;
        }

        int count = 0 ;
        int zcount = 0 ;

        for(int i = 0 ; i < frq.size(); i++)
        {
            if(frq[i] == 1)
            {
                if(v[i] == 0)
                {
                    zcount = 1 ;
                }
                
                else
                {
                    count++ ;
                }
            }
            else if(frq[i] >= 2)
            {
                if(v[i] == 0)
                {
                    zcount = 1 ;
                }
                
                else
                {
                    count += 2 ;
                }
            }
            else{
                if(v[i] == 0)
                {
                    zcount = 1 ;
                }
                
                else
                {
                    count++ ;
                }
            }
        }

        cout << count + zcount << "\n" ;


         
       
    }
}