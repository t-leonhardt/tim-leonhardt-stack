#include <iostream>
#include "tim-leonhardt-stack-node.h"
#include "tim-leonhardt-stack-stack.h"

using namespace std;

int main() {
	Stack stack;
	stack.getSize();
	stack.pop();
	stack.push(6);
	stack.push(8);
	stack.peek();
	stack.pop();
	stack.getSize();
	stack.~Stack();
}
