#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	int display = 1;
	int counter = 0;

	for(int i = 1; i <= t; ++i){                                                             
		cout << display << " ";
		counter++;
		if(counter == display) {
		 display++;
		 counter = 0;
		}
 
			
	}

	return 0;
}          
