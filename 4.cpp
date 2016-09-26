#include <iostream>

using namespace std;

int main(){

	int t;

	cin >> t;

	for(int i = 1; t > 0; ++i){
		for(int j = 1; j <= i && t > 0; ++j){
			cout << i << " ";
			t--;
		}
	}



	return 0;
}