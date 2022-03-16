#include <bits/stdc++.h>
#include <set>
#include <iostream>
using namespace std ;

int main()
{
    set<int> S ;
    S.insert(-5);
    S.insert(-2);
    S.insert(-3);
    S.insert(5);
    S.insert(0);
    for(int x : S)
    cout << x <<"   " ;
    cout << "\n";

    // Pointing 
    auto it1 = S.find(-3);
    if(it1 == S.end())
    {
        cout << "Not present" << "\n" ;
    }
    else{
        cout << "Present" << "\n" ;
        cout << *it1 << " \n" ;
    }

    auto it2 = S.upper_bound(-1);
    if(it2 == S.end())
    {
        cout << "Not present" << "\n" ;
    }
    else{
        cout << "Present" << "\n" ; 
        cout << *it2 << " \n" ;
    }

    auto it3 = S.lower_bound(-1);
    if(it3 == S.end())
    {
        cout << "Not present" << "\n" ;
    }
    else{
        cout << "Present" << "\n" ;
        cout << *it3 << " \n" ;
    }

}