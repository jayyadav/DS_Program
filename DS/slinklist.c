#include<stdio.h>
#include<stdlib.h>

   		struct slinklist
  		 {
     		 	int data;
      			struct slinklist *next;
 		  };

 		typedef struct slinklist SLL;

  		SLL *createlist()
   		{
	      		  SLL *head=NULL;
      			  return head;
  		 }

//Insertion
			void insert(SLL **head,int data,int position)
                        {
			        int k=1;
				SLL *p,*q,*newnode;
        			newnode=(SLL *)malloc(sizeof(SLL ));
				if(!newnode)
				{
                                   printf("memory error");
				}
      				newnode->data=data;
				
                   	 	p=*head;
				
				if(position==1)
                                {
                     		    newnode->next=(*head);
                                    (*head)=newnode;
				}

				else
				{

				  while((p != NULL) && (k < position))  
				  {
					k++;
					q=p;
					p=p->next;
				  }

				  newnode->next=p;
				  q->next=newnode;
                               }
			}

//deletetion

			void delete(SLL **head,int position)
			{
				int k=1;
				SLL *p,*q;
				p=*head;
				if(*head==NULL)
				{
					printf("list empty");
				}
				
				if(position==1)
				{
					(*head)=(*head)->next;
					free(p);
 					return;
				}
				else
				{

					while((p->next!=NULL)&&(k<position))  
					{
						k++;
						q=p;
						p=p->next;
					}
				
			

					q->next=p->next;
					free(p);
				}
			}

//Printing

			void display(SLL *head)
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
		int choice,position,data;
	
       		 SLL *head;
		head=createlist();
	
		while(1)
       		 {
				printf("\n 1 : Insert,     ");
				printf(" 2: Delete,     ");
				printf("3: Display ,     ");
				printf("        4:EXIT   \n");
				printf("\nEnter ur choice: ");
				scanf("%d",&choice);
	

       				 switch(choice)
  				 {
					case 1:
							printf("Enter the data and position : ");
							scanf("%d %d",&data,&position);
							insert(&head,data,position);                        
							break;

					case 2:
							printf("\nEnter position :   ");
							scanf("%d",&position);
							delete(&head,position);
							break;

					case 3:
							display(head);
							break;
					case 4:
							exit(0);

					default:
							printf("operation is not correct \n");
			
				   }
		    }
   }
					
				

