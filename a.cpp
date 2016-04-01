#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream infile("file.in", ios::in);
	if(!infile)
	{
		cerr << "Failed opening." << endl;
		exit(1);
	}
	
	int sum=0;
	int i=0,j;
	infile >> i;
	vector<int> arr(i);
	for(j=0;j<i;j++)
		infile >> arr.at(j);
	sort(arr.begin(),arr.end());
	for(j=i-1;j>=i-5;j--)
		sum+=arr.at(j);
	if(i!=0)
		cout << sum << endl;

	return 0;
}
		
