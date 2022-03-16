#include <map>
#include <iostream>
using namespace std ;


int main()
{
    map<int , int> m1 ;
    m1[0] = 10 ;
    m1[2] = 20 ;
    m1[3] = 30 ;
    m1[4] = 40 ;
    m1[5] = 25 ;

    auto it = m1.upper_bound(20) ;
    
    auto itr = m1.begin() ;
    while(itr != m1.end())
    {
        cout << itr->first << " = " << itr->second << " \n" ;
        itr++ ;
    }

    map<char , int> m2 ;
    string s = "utkarsh saxena" ;
    for(char x : s)
    {
        m2[x]++ ;
    }
    cout <<"a = " << m2['a'] << " and " << " s = " << m2['s']  << endl;


}