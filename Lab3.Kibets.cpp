#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	float result;
	int switch_on;

	cout << "Input variable: ";
	cin >> switch_on;

	switch (switch_on){
		case 1:{
			double a = 0.1f, b = 1.1f, x = -4.5,z;
			
			while (x <= 1) {
				z = pow(log(a), x);
				
				if (x <= a)
				{
					result = a + (sin(x) * b)+ pow(cos(x), 2);
					cout << "X: " << x << " If Number: 1, and result: " << result << endl;
				}
				else if ((a < x) && (x < log(b)))
				{
					result = sqrt(a + (b * x)) + (sin(x) * z);
					cout << "X: " << x << " If Number: 2, and result: " << result << endl;
				}
				else if (x > log(b))
				{
				
				result = log(a + (b * x) + z);
				cout << "X: " << x << " If Number: 3, and result: " << result << endl;
					}
				x += 0.5;
			} while (x <= 4.5);
			
			cout << "Completed" << endl;
			break;
		}
		case 2: {
			double a = 1.2, b = 5.5, z, x = -2;
				do{
				z = pow(log(b), x);

				if (x <= a)
				{
					result = a + (sin(x) * b)+ pow(cos(x), 2);
					cout << "X: " << x << " If Number: 1, and result: " << result << endl;
				}
				else if ((a < x) && (x < log(b)))
				{
					result = sqrt(a + (b * x)) + (sin(x) * z);
					cout << "X: " << x << " If Number: 2, and result: " << result << endl;
				}
				else if (x > log(b))
				{
				
				result = log(a + (b * x) + z);
				cout << "X: " << x << " If Number: 3, and result: " << result << endl;
					}
			x += 0.25;
			} while (x <= 2);

			cout << "Completed" << endl;
			break;
		}
		case 3: {
			double a = 3.3, b = 18.81, z, x;

			for (x = -3; x <= 3; x += 0.5) {
					z = pow(log(b * a), x);
					if (x <= a)
				{
					result = a + (sin(x) * b)+ pow(cos(x), 2);
					cout << "X: " << x << " If Number: 1, and result: " << result << endl;
				}
				else if ((a < x) && (x < log(b)))
				{
					result = sqrt(a + (b * x)) + (sin(x) * z);
					cout << "X: " << x << " If Number: 2, and result: " << result << endl;
				}
				else if (x > log(b))
				{
			    result = log(a + (b * x) + z);
				cout << "X: " << x << " If Number: 3, and result: " << result << endl;
				}
		    } 

			cout << "Completed" << endl;
			break;
		}
		default:
			cout << "Not supported variable, try more.";
			break;
	}
	return 0;
}