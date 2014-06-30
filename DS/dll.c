#include<stdio.h>
#include<stdlib.h>

	struct dlinklist
	{
		int data;
		struct dlinklist *prev;
		struct dlinklist *next;
	};

	typedef struct dlinklist DLL;

     //creating a list

	DLL *createlist()
	{
		DLL *head;
		head=NULL;	
		return head;
	}
	
	//insert data at given position

    void insert(DLL **head,int data ,int position)
	{
		int k=1;
		DLL *newnode,*p,*q;
		newnode=(DLL *)malloc(sizeof(DLL));
		if(!newnode)
		{
			printf("memory error");
		}

		newnode->data=data;
		//newnode->next=NULL;
		//newnode->prev=NULL;

		p=*head;
		
		if(position == 1)
		{
			newnode->next=*head;
			newnode->prev=NULL;
			if(*head)
				(*head)->prev=newnode;
				*head = newnode;
				return;
		}
				while( ( p->next != NULL)  &&  ( k < position ) )
				{
					k++;
					p= p->next;
				}
				if( k != position )
				printf("desire position not exit");
       				
				newnode->next=p->next;
				newnode->prev=p;
				if(p->next)
					p->next->prev=newnode;
					p->next=newnode;
					return;
           }

//delete  an element
	
	void delete(DLL **head,int position)
	{
		DLL *p,*q;
 		int k=1;
  		
		if( *head  ==  NULL )
		{
			printf(" list is empty ");
 			return;
		}
		p=*head;

		if( position == 1 )		 				
		{
 			(*head)=( *head)->next;
			if(*head != NULL)
				(*head)->prev= NULL;
				free(p);
				return;		
		}

		while( ( p->next != NULL)  &&  ( k < position ) )
		{
			k++;
			p=p->next;
		}
		if(k!= position)
		{
			printf("position is not ext \n");
     		}

		q=p->prev;
		q->next=p->next;
		if(p->next)
 			p->next->prev=q;
		free(p);
		return;
	}

//display
	
			void display(DLL *head)
			 {
				if(head == NULL)  
				{
				printf("Empty list\n");
				return;
				}	
				printf("List : ");

				while(head != NULL)
				{
					printf("  %d  ",head->data);
     					
					head=head->next;
				}
			printf("\n");
			 }
				





	main()
	{
		int choice,data,position;
		
		DLL *head;
		head=createlist();
	
		
		while(1)
		{
			printf(" 1: FOR INSERT \n");
			printf(" 2: FOR DELETE \n");
			printf(" 3: FOR DISPLAY \n");
 			printf(" 4: FOR EXIT\n");	

			printf("Enter ur choice: ");
     			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1: 
						printf("Enter the data AND position : \t");
						scanf("%d  %d",&data,&position);
						insert(&head,data,position);
						break;

				case 2:
						printf("Enter the position : \t");
 						scanf("%d",&position);
						delete(&head,position);
						break;

				case 3:
						printf("Display the list of data \n");
						display(head);
						break;

				case 4 :
						exit(0);

				default:
						printf("wrng choice");
			}
		}
	}
