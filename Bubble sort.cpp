#include <iostream>
using namespace std;

//bubble sort
void bubble_sort(int a[ ],int n)  {


// for 1 itr loop runs n-1 times
for(int itr=1 ; itr<= n-1; itr++)  {

//pairwise swapping in the unsorted array
	for (int j=0; j<=(n-itr-1); j++ )  {

	      if (a[j] >a[j+1])  {

	      swap (a[j],a[j+1]) ;
	       }
	}
   }
  }
int main( )  {
	itn n, key;
	cin>> n;

	int a[1000];
	for (int i =0; i<n ;i++) {
	    cin>>a[i];
	}
	bubble_sort (a,n);
	for (int i =0; i<n ;i++)  {
		cout<<a[i]<<",";
	}
