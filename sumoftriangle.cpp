#include<iostream>

using namespace std;
/*the sums of numbers that appear on the paths starting from the top towards the base is computed, so that:

    *on each path the next number is located on the row below, more precisely either directly below or below and one place to the right;
    *the number of rows is strictly positive, but less than 100
    *all numbers are positive integers between O and 99.

Input

In the first line integer n - the number of test cases . Then n test cases follow. Each test case starts with the number of lines which is followed by their content.
Output

For each test the determined value is written in a separate line.
Example

Input:
2
3
1
2 1
1 2 3
4 
1 
1 2 
4 1 2
2 3 1 1 

Output:
5
9
 */

int x,a[4950];  

void add(int n,int l,int t,int k)
{
	
	if(l<k)
	{
		
		n=n+a[(l*(l+1)/2)+t];
		l++;
		add(n,l,t,k);
	    add(n,l,t+1,k);
		
		
	}
	
	else
	{
		if(n>x)
		{
			x=n;
		}
    }
    
    
	
}


int main()
{
	int n,k,p;
	cin>>n;
    
	
	
	for(int q=0;q<n;q++)
	{
		cin>>k;
		x=0;
		for(p=0;p<(k*(k+1))/2;p++)
		cin>>a[p];
		
		add(0,0,0,k);
		cout<<x<<endl;
		
	
		
	}
	return 0;
	
   	
}
