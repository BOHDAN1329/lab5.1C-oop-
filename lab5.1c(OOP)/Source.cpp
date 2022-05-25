//Source.cpp
#include <iostream>
#include "OpenBitString.h"
#include "CloseBitString.h"

using namespace std;

int main()
{
	OpenBitString b1;
	try {
		cin >> b1;
		cout << endl;
	}
	catch (BaseBitStringException* q) {
		cout << "BaseBitStringException: " << q->What() << endl;
	}
	catch (BaseBitStringException& q) {
		cout << "BaseBitStringException: " << q.What() << endl;
	}
	catch (Exception& q) {
		cout << "Exception: " << q.What() << endl;
	}

	catch (Exception* q) {
		cout << "Exception: " << q->What() << endl;
	}
	catch (invalid_argument q) {
		cout << "invalid_argument: " << q.what() << endl;
	}

	cout << b1 << endl;

}