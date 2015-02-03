/* Given two sorted integer arrays A and B, merge B into A as one sorted array.
Note:
You may assume that A has enough space (size that is greater or equal to m + n) 
to hold additional elements from B. The number of elements initialized in A and B are m and n respectively. */

void merge(int A[], int m, int B[], int n) {
    if (n == 0) return ;
    int size = m + n - 1;
	int i, j;
	for(i=m-1, j=n-1; i>=0 && j>=0; )
	{
		if(A[i] > B[j])
		{
			A[size--] = A[i--];
		}
		else
		{
			A[size--] = B[j--];
		}
	}
	for(; i >= 0; ){
	    A[size--] = A[i--];
	}
	for(; j >= 0; ){
	    A[size--] = B[j--];
	}
}