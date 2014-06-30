#include<stdio.h>
#include<stdlib.h>

	void sel(int arr[ ] , int n)
	{
	
		int temp,i,j;
		
		for( i=0 ; i < n-1 ; i++ )
		{
			for( j = i+1 ; j < n ; j++ )
			{
				if( arr[i] > arr[j] )
				{
					temp = arr[i] ;
					arr[i] = arr[j] ;
  					arr[j] = temp ;
   				}
			}
		}
		printf("print the arr :    ");
		for( i = 0 ; i < n ; i++ )
		printf("%d  ", arr[i]);
	}


		main()
		{
			int arr[400],i ,n;
			printf("entr the size of arr:  ");
			scanf("%d ",&n);
			printf("entr the arr :    ");
			for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
			sel(arr,n);
			printf("\n");
		}
			
