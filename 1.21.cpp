#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
int main()
{
	Sales_item book;
	cout << "Enter transactions:"<<endl;
	while(cin >> book)
	{
		cout << book << endl;
	}
	return 0;
}
