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
int gcdRecursive(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a%b);
}
