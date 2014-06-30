#include<stdio.h>
#include<stdlib.h>

	void in(int arr[ ] , int n)
	{
	
		int temp,i,j;
		
		for( i=2 ; i < n ; i++ )
		{
			temp = arr[i];
			j=i;

			while(arr[ j-1 ] > temp && j >= 1)
			{
					arr[ j ] = arr[ j-1 ] ;
					j--;
   				
			}
			arr[ j ] = temp ;
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
			in(arr,n);
			printf("\n");
		}
			
