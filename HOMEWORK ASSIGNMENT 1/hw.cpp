/* ===================================================================

This is an edited code for HOMEWORK ASSIGNMENT 1.
Hello, I am Nishan chettri
I am an Embedded firmware developer who loves open source projects!
connect with me on the collowing:

		Blog: www.nishanchettri.com
		Github: www.github.com/nishanchettri
		Linkedin: www.linkedin.com/nishanchettri
		
=======================================================================
*/

#include <iostream>
#include<vector>

using namespace std;

const int addTill=40; //#define to const

/** I have eliminated the int n from the function parameter
* the use of vector function i.e. size() does the same job
*  as n is nothing but size of vector "data"
*/

inline void sum( int*p , vector<int>&incomingValues )   //function to sum the incoming values of the vector
{
	*p = 0;
	for(int i = 0; i < incomingValues.size(); ++i)
	{
		*p += incomingValues[i]; //values from data vector are being added 
	}	
}

int main()

{
	
	vector<int>data; //blank vector
	int accum; 
	
	for(int i = 0; i < addTill; ++i)
	{
		data.push_back(i);  
	}

/** putting data till the addTill value in array/vector
 * push_back() function adds new value to the vector array
 * addTill value is the value till the data is filled in the vector
*/	

	sum(&accum,data); //giving *p an address to point to and accum gets the value held by p	
	
	cout<<"sum is "<< accum << endl;	
	
	return 0;
	
}

