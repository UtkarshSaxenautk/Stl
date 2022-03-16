 
#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std ;

bool f(char x , char y)
{
    return x > y;
}

int main()
{
    vector<char> v(20);
    vector<char>::iterator p ;

    p = v.begin();
    int i = 0 ;
    while(p != v.end())
    {
        *p = i + 'a' ;
        p++ ;
        i++ ;
    }

    cout << "Vector : " << endl;

    p = v.begin();
    while (p != v.end())
    {
        /* code */
        cout << *p << " " ;
        p++ ;
    }
    cout << "\n\n" ;
    
    p = v.begin();
    while(p != v.end())
    {
        *p = toupper(*p);
        p++ ;
    }

    cout << "Modified vector: " << "\n" ;

    p = v.begin();
    while(p != v.end())
    {
       cout << *p << " " ;
       p++ ;
    }

    cout << "\n\n" ;

    v.push_back('U');
    v.push_back('V');

    v.erase(p , p+2);

    p = v.begin();

    while(p != v.end())
    {
        cout << *p << " " ;
        p++ ;
    }


    bool present = binary_search(v.begin() , v.end() , 'U');
    cout << "\n" << present << endl;
    sort(v.begin() , v.end());
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i] << " "  ;
    }

    vector<char> :: iterator it = upper_bound(v.begin() , v.end() , 'U');
    vector<char> :: iterator it2 = lower_bound(v.begin() , v.end() , 'S');

    cout << "\n" ;

    cout << *it << "   " << *it2  ;
    cout << "\n" ;

    cout << it - it2 << "\n" ;

    sort(v.begin() , v.end() , f) ;
    vector<char> :: iterator it3 ;
    it3 = v.begin();
    while(it3 != v.end())
    {
        cout << *it3 << " " ;
        it3 = it3 + 1 ;
    }
        cout << "\n" ;



    // auto in c++ 
    auto it4 = lower_bound(v.begin(), v.end() , 'U');
    auto it5 = upper_bound(v.begin() , v.end() , 'S');

    cout << *it4 << "  " << *it5 << endl;
    cout << it4 - it5 << endl;

    for(char x : v)
    {
        cout << x << "  " ;
    }
        cout << "\n" ;



    return 0 ;
}