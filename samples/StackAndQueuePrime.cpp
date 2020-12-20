
#include <iomanip>
#include "Stack.h"
#include "Queue.h"
#include <stack>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int size = 3;
	
	Queue<int> q(size);
	Stack<int> s(size);

	int m = 12;
	int n = 13;
	int p = 15;

	q.push(m);
	q.push(n);
	q.push(p);

	s.push(m);
	s.push(n);
	s.push(p);

	cout << "удаление елементов в очереди ";

	cout << q.pop() << "\n";
	cout << q.pop() << "\n";
	cout << q.pop() << "\n";

	cout << "удаление элементов в стеке ";

	cout << s.pop() << "\n";
	cout << s.pop() << "\n";
	cout << s.pop() << "\n";
	
	return 0;
}


