// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
void printUnion(int* a, int n, int* b, int m)
{
	
	// Defining map container mp
	map<int, int> mp;

	// Inserting array elements in mp
	for (int i = 0; i < n; i++){
		mp.insert({ a[i], i }); //see the format: map_name.insert({key, element})
    }
	for (int i = 0; i < m; i++){
		mp.insert({ b[i], i });}
    map<int, int>::iterator itr;
    int numbrOfElements =0;
	cout << "The union set of both arrays is :" << endl;
	for (itr = mp.begin(); itr != mp.end(); itr++){
		cout << itr->first  //So if you have a std::pair<X, Y> called p, p.first is an X object and p.second is a Y object.
			<< " "; // mp will contain only distinct
					// elements from array a and b
    numbrOfElements++;
    }
    cout<<endl<<numbrOfElements;
}

// Driver Code
int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8 };
	int b[] = { 6,7,8,9,10,11,2,3,1 };
    int sizeA = sizeof(a)/sizeof(a[0]);
    int sizeB = sizeof(b)/sizeof(a[0]);
	printUnion(a, sizeA, b, sizeB);
    return 0;
}
