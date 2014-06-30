#include<stdio.h>
#include<stdlib.h>

	void babl(int arr[ ] , int n)
	{
	
		int temp,i,j;
		
		for( i=n-1 ; i >= 0 ; i-- )
		{
			for( j=0 ; j < i ; j++ )
			{
				if( arr[j] > arr[j+1] )
				{
					temp = arr[j] ;
					arr[j] = arr[j+1] ;
  					arr[j+1] = temp ;
   				}
			}
		}
		printf("print the arr :    ");
		for( i = 0 ; i < n ; i++)
		printf("%d   ", arr[i]);
	}


		main()
		{
			int arr[400],i ,n;
			printf("entr the size of arr:  ");
			scanf("%d ",&n);
			printf("entr the arr :    ");
			for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
			babl(arr,n);
			printf("\n");
		}
			
