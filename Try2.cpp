#include <iostream>
#include <new>
#include<string>

void top(std::string l,int n,int timer){
	
	if (l == "a" || l == "Push" || l == "push") {
		
		if (timer != 0) {
			n++;
		}
		
		std::cout << n << std::endl;
		timer = 1; 
	}
	else if (l == "b" || l == "Pop" || l == "pop") {
		if (timer != 0)
			n--;
		timer = 1;
	}
}
int main() {
	int n = 0, t = 0, s = 1, i, carr, timer = 0;;
	int* p;
	std::string l;
	std::cout << "Enter the size of your array:";
	std::cin >> i;
	p = new int[i];
	if (i > 0) {
		while (s == 1) {
			std::cout << "choose \na:Push, to add a new element \nb:Pop, to remove an element \nc:Trash, to restart\nyour response:";
			std::cin >> l;
			top(l,n,timer);
			timer = 1;
			if (l == "a" || l == "Push" || l == "push") {
			    std::cin >> p[n];
				carr=p[n]; 
				
			}
			else if (l == "b" || l == "Pop" || l == "pop") { 
				std::cout<<carr<<"std::endl";
				carr = p[n];
			}	
		}
	}
	else {
		std::cout << "\n Invalid";
	}
	system("pause");
	return 0;
}
