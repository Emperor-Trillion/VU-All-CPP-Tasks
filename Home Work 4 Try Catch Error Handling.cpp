#include<iostream>
#include<cmath>
#include <stdexcept>
using namespace std;

double SurfaceArea(double& height, double& radius, double slant);		// First Function to calculate Surface Area of a cone. Returns type double/
double Volume(double height, double radius);							// Seond Function to calculate the Volume of a cone. Returns type double/
int main()							//This program takes 2 either the height, radius or slant to calculate for the surface area and volume of a cone./
{									//This programs uses the try and catch technique to prvent negative number from being inputted./
	double height, radius, slant;
	cout << "ONLY ENTER ANY TWO KNOWN VARIABLES AND ENTER ZERO(0) AS THE LAST UNKNOWN FOR THIS PROGRAM TO RUN" << endl;
	cout << endl;

	cout << "Inputs must not be less than Zero (0)" << endl;
	cout << endl;

	cout << "Enter the height (m) if known or Zero(0) if unknown:";
	cin >> height;
	cout << endl;
	cout << "Enter the radius (m) if known or Zero(0) if unknown:";
	cin >> radius;
	cout << endl;
	cout << "Enter the slant (m) if known or Zero(0) if unknown:";
	cin >> slant;
	cout << endl;
	if (height > 0 && radius > 0 && slant > 0)				// Checks if user inputs less than or greater than 2 unknown variables.
	{
		cout << "You have entered just 1 unknown variable or 3 known variables. Kindly restart and input 2 unknown variables";
	}
	else
	{
		try
		{
			if (height < 0 || radius < 0 || slant < 0)		//Checks to make sure non-negative numbers are not accepted./
			{
				throw runtime_error("Negative Input not Allowed");
			}

			SurfaceArea(height, radius, slant);
			double ResultSA = SurfaceArea(height, radius, slant);
			cout << "The Surface Area of the cone = " << ResultSA << " Meters square" << endl;

			Volume(height, radius);
			double ResultVol = Volume(height, radius);
			cout << "The Volume of the cone = " << ResultVol << " Meters cube" << endl;
			return 0;
		}
		catch (const runtime_error& e)
		{
			cerr << "Error: " << e.what() << endl;
		}
	}
}
double SurfaceArea(double& height, double& radius, double slant)
{
	if (height == 0)
	{
		height = sqrt((slant * slant) - (radius * radius));
	}
	else if (radius == 0)
	{
		radius = sqrt((slant * slant) - (height * height));
	}
	else if (slant == 0)
	{
		slant = sqrt((height * height) + (radius * radius));
	}
	double TheSurfaceArea = (3.142 * radius * slant) + (3.142 * radius * radius);
	return TheSurfaceArea;
}
double Volume(double height, double radius)
{
	double VolumeResult = ((1.0 / 3.0) * 3.142 * radius * radius * height);
	return VolumeResult;
}