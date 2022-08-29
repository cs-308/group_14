#include "functions.h"

int factorial(int n){
	if(n<0){cout<<"Enter a positive number"<<endl;
	int p;
	cin>>p;
	factorial(p);}
    	else if(n!=1){
		return(n * factorial(n-1));
    	}
    	else return 1;
}
