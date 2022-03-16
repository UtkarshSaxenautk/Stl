#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std ;

vector<int> remove(vector<int> &v)
{
    auto end = v.end();
    for(auto it = v.begin() ; it != end ; ++it)
    {
        end = remove(it + 1 , end , *it);
    }
    v.erase(end , v.end());
    return v ;
}

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
        //vector<int>::iterator ip ;
        unordered_set<int> s ;
        bool hasdup = false ;
        for(int i =0 ; i < v.size() ; i++)
        {
            if(s.find(v[i]) != s.end())
            {
                hasdup = true ;
            }
            else{
                s.insert(v[i]);
            }
        }


        vector<int> v3 ;
        v3 = v ;
        remove(v3);


       // remove(v);



       /* vector<int>:: iterator itp ;
        itp = unique(v.begin() , v.end());
        v.resize(distance(v.begin() , itp));*/
/*
        for(int a : v )
        cout << a << " " ;
        cout << "\n" ;


        for(int x : s)
        cout << x <<"   " ;
        cout << "\n";  */

         
       /* vector<int> v2 ;

        for(int i =0 ; i < s.size() ; i++)
        {
            auto it = s.begin();
            v2.push_back(*it * -1);

        }


      /*  vector<int> sum ;

        for()

              // for(int i =0 ; i < )  

        */
      // int sumo = v.size() - s.size();
       //cout << sumo ;
       
       int sum = v.size() - s.size();
       cout << sum + v3.size();

    }     
}