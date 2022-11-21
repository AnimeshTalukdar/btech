// C++ implementation of the approach
#include <stdio.h>
#include <math.h>

// Function to return the square root of
// a number using Newtons method
double squareRoot(double n, float l)
{
	// Assuming the sqrt of n as n only
	double x = n;

	// The closed guess will be stored in the root
	double root;

	// To count the number of iterations
	int count = 0;

	while (1) {
		count++;

		// Calculate more closed x
		root = 0.5 * (x + (n / x));

		// Check for closeness
		if (abs(root - x) < l)
			break;

		// Update root
		x = root;
	}

	return root;
}

// Driver code
int main()
{
	double n = 327;
	float l = 0.00001;

	printf("%d",squareRoot(n, l));

	return 0;
}

