//GENERATING SUBARRAYS


#include <iostream>

using namespace std;

int
main ()	{
  int n;
  cin >> n;
  int a[1000];
int max_sum=0;
int current_sum=0;
int left=-1;    //for leftmost element of subarray
int right=-1; // for rightmost element of subarray


//INPUT ARRAY
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
//to generate all subarrays

//TRAVERSES ARRAY
  for (int i = 0; i < n; i++)	{

//TRAVERSES SUBARRAY
      for (int j = i; j < n; j++)	{

//OUTPUTS SUBARRAY (elements of subarray(i,j))
                   current_sum=0;

	  for (int k = i; k <=j; k++)
	    {
	      current_sum+=a[k];
	    }
	    //update max_sum
	   if(current_sum>max_sum) {
	max_sum=current_sum;
	left=i;
	right=j;	
	   }
	}
             }
	//print the max sum
	cout<<max_sum;	
//print the subarray
	for(int k=left;k<=right;<<k++) {
	cout<<a[k]<<",";
	}
  return 0;
}
///this is however not very well optimised
as we are using 3 nested loops so for 
worst case each loop taking n iterations 
the loop will run n^3 times at worst.
which is not very good optimisation 
therefore refer 
CPP-MAXIMUM SUBARRAY SUM 2
