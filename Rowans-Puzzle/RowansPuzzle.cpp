#include <iostream>
#include <math.h>
#include <string>

using namespace std; 

int counter=0;
//Prints the array 
void printArr(int a[],int n) 
{
    int gooddeal=1;
	for (int i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
		    cout << a[i] << " ";
        }
        else
        {
            gooddeal=0;
        }
    } 
    cout << a[n-1] << " ";
	printf("\n"); 
    if(gooddeal){counter++;}
} 

// Generating permutation using Heap Algorithm 
void heapPermutation(int a[], int size, int n) 
{ 
	// if size becomes 1 then prints the obtained 
	// permutation 
	if (size == 1) 
	{ 
		printArr(a, n);
		return; 
	} 

	for (int i=0; i<size; i++) 
	{ 
		heapPermutation(a,size-1,n); 

		// if size is odd, swap first and last 
		// element 
		if (size%2==1) 
			swap(a[0], a[size-1]); 

		// If size is even, swap ith and last 
		// element 
		else
			swap(a[i], a[size-1]); 
	} 
} 

// Driver code 
int main() 
{ 
	int a[] = {1, 2, 2, 3, 3, 4, 4, 4}; 
	int n = sizeof a/sizeof a[0]; 
	heapPermutation(a, n, n); 
    cout << counter;
	return 0; 
} 
