#inlcude <iostream>
using namespace std;

int main() {
	int i = 10;

	while (i <= 99) {
		  int a = i / 10; 
		  int b = i % 10; 
	
		  if (a != b) {
			cout << i >> " "; 
		  }

		  i++;
	}
	return 0;
}

