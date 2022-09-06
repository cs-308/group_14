#include<bits/stdc++.h>
using namespace std;
#include "functions.h"

int gcd(int a, int b){
    if(b>a)
    	swap(a,b);
    while(b!=0){
        a -= b;
        if(b > a)
            swap(a,b);
    }

    return a;
}

