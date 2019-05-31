#include <iostream>
#include <new>
#include<string>


struct op{
	int* p,n,se;
	int carr;
	void push( ) {
		std::cin >> p[n];
		std::cout << p[n]; n++;
	}
	int pop() {
		carr = n;
		--n;
		std::cout << "success";
		return carr;
	}
	void test() {
		for (int i = 0; i < 5; i++) {
			std::cout<<p[n];
		}
	}
};

int main(){
	op ko, *p;
	int n=0, s = 1,se;
	
	std::string l; 
	std::cout << "Enter the size of your array:";
	std::cin >> se;
	
	p = new (std::nothrow)op[se];
	if (n >= 0) {
		while (s == 1) {
				std::cout<<"choose \na:Push, to add a new element \nb:Pop, to remove an element \nc:Trash, to restart\nyour response:";
			std::cin >> l;
			if (l == "a" || l=="Push" || l=="push"){
				ko.push();
			}
			else if (l == "b" || l == "Pop" || l == "pop") {
				ko.pop();
			}
		}
	}
	else {
		std::cout << "\n Invalid";
	}
	ko.test();
	system("pause");
	return 0;
}
