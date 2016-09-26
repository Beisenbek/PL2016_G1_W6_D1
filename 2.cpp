#include <iostream>


using namespace std;

int main(){

	int a,b,x = -10001;

	cin >> a >> b;


	while(a * x + b != 0 && x <= 10000){
		x++;	
	}

	if(x==10001) cout <<  "NO Solution";
	else cout << x;


	return 0;
}