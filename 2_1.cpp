#include <iostream>


using namespace std;

int main(){

	int a,b;

	cin >> a >> b;

	int x;

	for(x = -10001;a*x + b !=0 && x < 10000;x = x + 1){
		cout << "solution not found yet" << endl;
	
	}

	if(x==10001) cout <<  "NO Solution";
	else cout << x;


	return 0;
}