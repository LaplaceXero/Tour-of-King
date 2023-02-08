#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int N;  //number of 5 seat cars
	int M;  //number of 7 seat cars
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>N >>M;
	    
	    cout <<((N*5) + (M*7)) <<endl;
	}
	return 0;
}
