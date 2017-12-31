#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
#include <vector>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
int main() {
	/*string a = "9";
	string b = "1999999999";
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	cout << b << endl;
	stringstream test(b);
	int n1 = atoi(a.c_str());
	long n2;
	test >> n2;
	long finalnum = n1 + n2;
	cout << n1 << endl;
	cout << n2 << endl;
	cout << finalnum << endl;*/
	int n = 5;
	for (int i = 1; i <= n; i++) {
		if (i % 15 == 0) {
			cout << "FizzBuzz" << endl;
			
		}
		else if (i % 3 == 0) {
			cout << "Buzz" << endl;
		}
		else if (i % 5 == 0) {
			cout << "Fizz" << endl;
		}
		else {
			cout << i << endl;
		}
		
	}
	system("pause");
	return 0;
}