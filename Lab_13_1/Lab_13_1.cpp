#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

#define PRINTR(w) printf ("%f\t", (double)w)
#define PRINTI(w) printf ("%d\n", w) 

int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;

	x = x_p;
	while (x <= x_k)
	{
		sum();

		PRINTR(x);
		PRINTR(s);
		PRINTR(log(x));
		PRINTI(n);

		x += dx;
	}

	cin.get();
	system("pause");
	return 0;
}
