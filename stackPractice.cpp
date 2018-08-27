#include<iostream>
#include "stack.h"
#include"node.h"
using namespace std;

void mystery(stackb &s1, stackb &s2); //equation that puts the contents
//of one stack into the other in reverse 

int main()
{
	stackb s1, s2;

	string list[] = { "winter", "spring","summer","fall","cold","warm","hot" };

	for (int i = 0; i<7; i++)
	{
		s1.push(list[i]);
	}

	mystery(s1, s2);

	s2.print(); 

	system("pause");
	return 0; 
}
void mystery(stackb &s1, stackb &s2) {
	while (!s1.isempty()) //while the list isnt empty put the content of s1 in s2
	{
		s2.push(s1.peek());
		s1.pop(); 
	}
}