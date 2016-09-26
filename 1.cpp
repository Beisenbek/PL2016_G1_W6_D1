#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	int i = n;

	while(i>=1){
		if(n%i == 0){
			cout << i  << " ";
		}

		--i;	
	}


	return 0;
}