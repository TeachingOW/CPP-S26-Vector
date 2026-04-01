#include <iostream>
#include "Vector.hpp"
#include <vector>
using namespace std;


int main(){

    Vector v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for(int i=0;i<v.length();i++)
        cout << v[i] <<" \n";


    v[0]=10;    


    for(int i=0;i<v.length();i++)
        cout << v[i] <<" \n";


    vector<int> s={1,2,3,4};
    auto end=v.end();
    for(Vector::iterator it=v.begin()
                ;it!=end;it++){
        cout << *it << " ";
        v.push_back(*it+1);
    }
    cout <<"---------------\n";
    for(auto l:v){

        cout << l;
    }
}