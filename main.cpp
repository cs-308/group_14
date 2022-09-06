#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<<endl;
    cout<<"The factorial of 5 is "<<factorial(5)<<endl;
    int x = 56, y = 98;
    cout<<"GCD of ("<<x<<","<<y<<") is "<< gcd(x, y)<<endl;
    cout<<"GCD of ("<<x<<","<<y<<") using recursive function is "<< gcdRecursive(x, y)<<endl;
    return 0;
}
