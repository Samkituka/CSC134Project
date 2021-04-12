// Project 2
	
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// variables
	int gSpeed, pSpeed, cores, resolution, Ncomputers;
	double multiplier, performanceScore, lowest, highest;
	string resolutionString, quality;
	string title = "Computer Hardware Graphics Quality Recommendation Tool";
	
	// Continuation of project 1 
	// Get the number of computers to be processed.
	cout << " How many computers are being processed? \n" ;
	cin>> Ncomputers;
	// Validation of the number of computer 
	while ( Ncomputers < 1 )
	{
		cout << " Invalid number entered! Please enter a valid number of computers : " ;
		cin >> Ncomputers; 
	} 
	
	// Displaying the title
	cout << endl << endl << title << endl << endl;
	
	for (int c =1; c <= Ncomputers; c++ )

 {
	// input of the graphics card speed
	cout << "Please enter the clock speed (in Megahertz) of your graphics card: ";
	cin >> gSpeed;
	
	// validate the input of the graphics card
	while (gSpeed < 800 or gSpeed >2000 )
	{
		cout << "Invalid graphics card speed entered. \n";
		cout << " Please enter a number between 800 and 2000 \n ";
		cin >> gSpeed ;
		return 0;
	}
	
	// input of the processor speed
	cout << "Please enter the clock speed (in Megahertz) of your processor: ";
	cin >> pSpeed;
	
	// validate the input of the processor
	while (pSpeed < 1000 or pSpeed >5500 )
	{
		cout << "Invalid processor speed entered. \n";
		cout << " Please enter a number between 1000 and 5500 \n" ;
		cin >> pSpeed ;
		return 0;
	}
	
	// input of the number of cores
	cout << "Please enter the number cores of your processor: ";
	cin >> cores;
	
	// validate the input of the number of cores
	while (cores < 1 or cores >16 )
	{
		cout << "Invalid number of cores entered. \n";
		cout << " Please enter a number between 1 and 16 \n";
		cin >> cores ;
		return 0;
	}
	
	// display the menu for the resolution
	cout << "What is the resolution of your monitor? \n";
	cout << "\t 1. 1280 x 720 \n"; 
	cout << "\t 2. 1920 x 1080 \n";
	cout << "\t 3. 2560 x 1440 \n";
	cout << "\t 4. 3840 x 2160 \n";
	cout << "Please select from the options above: ";
	cin >> resolution;
	 
	 // Validation of the menu selection. 
	 while ( resolution <1 or resolution > 4 )
	 {
	 	cout << " Invalid number of resolution entered \n ";
	 	cout << " Please enter a number between 1 and 16 for your resolution: \n";
	 	cout << "What is the resolution of your monitor? \n";
       	cout << "\t 1. 1280 x 720 \n"; 
    	cout << "\t 2. 1920 x 1080 \n";
	    cout << "\t 3. 2560 x 1440 \n";
	    cout << "\t 4. 3840 x 2160 \n";
	    cout << "Please select from the options above: ";
	 	cin >> resolution;
	 }
	 
	// use the resolution choice to calculate the multiplier and set the resolution 
	// string
	switch(resolution)
	{
		case 1: // 1280 x 720
			multiplier = 1;
			resolutionString = "1280 x 720";
			break;
		case 2: // 1920 x 1080
			multiplier = 0.75;
			resolutionString = "1920 x 1080";
			break;
		case 3: // 2560 x 1440
			multiplier = 0.55;
			resolutionString = "2560 x 1440";
			break;
		case 4: // 3840 x 2160
			multiplier = 0.35;
			resolutionString = "3840 x 2160";
			break;
	
	}
	
	// calculate the performance score
	performanceScore = ((5 * gSpeed) + (cores * pSpeed)) * multiplier;
	
	// compute the recommended graphics quality
	if(performanceScore > 17000)
	{
		quality = "Ultra";
	}
	else if(performanceScore > 15000 and performanceScore <= 17000)
	{
		quality = "High";
	}
	else if(performanceScore > 13000 and performanceScore <= 15000)
	{
		quality = "Medium";
	}
	else if(performanceScore > 11000 and performanceScore <= 13000)
	{
		quality = "Low";
	}
	else
	{
		quality = "Unable to Play";
	}
	
	// output
	cout << setprecision(2) << showpoint << fixed;
	cout << "GPU Clock Speed: " << gSpeed << " MHz" << endl;
	cout << "CPU Clock Speed: " << pSpeed << " MHz" << endl;
	cout << "Number of cores: " << cores << endl;
	cout << "Monitor Resolution: " << resolutionString << endl;
	cout << "Performance Score: " << performanceScore << endl;
	cout << "Recommended Graphics Quality: " << quality << endl<< endl;
	
	system("pause");
	
	
 }
	
	
	
	
	
	
	
	
	
	
	return 0 ;
	
}
