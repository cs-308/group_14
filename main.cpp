#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<<endl;
    cout<<"The factorial of 5 is "<<factorial(5)<<endl;
    cout<<"GCD of 6, 36 is "<< gcd(6, 36)<<endl;
    return 0;
}
