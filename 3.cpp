#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	int i = n - 1;

	while(n%i!=0){
		i--;
	}

	cout << i;

	return 0;
}