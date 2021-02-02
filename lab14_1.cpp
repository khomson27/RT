#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int *z = x;

	cout << a << " " << b << " " <<  c << " " <<  x << " " <<  (void *)y << " " << z << endl;
	cout << &a << " " << (void *)&b << " " <<  (void *)&c << " " <<  &x << " " <<  &y << " " << &z << endl;
	c = 'F';
	cout << a << " " <<  b << " " <<  c << " " <<  x << " " <<  (void *)y << " " << z << endl;
	c = 'W';
	cout << a << " " <<  b << " " <<  c << " " <<  x << " " <<  (void *)y << " " << z << endl;
	a = 6;
	cout << a << " " <<  b << " " <<  c << " " <<  x << " " << (void *) y << " " << z << endl;
	a = 7;
	cout << a << " " <<  b << " " <<  c << " " <<  x << " " << (void *) y << " " << z << endl;




	
	
	return 0;
}
