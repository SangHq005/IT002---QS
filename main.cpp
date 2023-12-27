#include <iostream>
using namespace std;
bool IsPrime(int x)
{
	int y;
	for (y = 2; y < x; y++)
		if ( x % y == 0)
			return false;
	return true;
}
int Rev(int x)
{
	int y=0;
	while(x)
		y = y*10 + x%10,x /= 10;
	return y;
}
int main()
{
	int a,b,c,n;
	cin >> a >> b;
	for ( c = 0, n = a; n <= b; n++ )
		c +=( IsPrime(n) && IsPrime(Rev(n)) );
	cout << c;
	return 0;
}
