#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
	Matrix t;

	t.Read();
	t.Enter();
	t.Display();
	t.Change();
	t.Display();
	t.DisplayUnif();

	cin.get();
	system("pause");
}
