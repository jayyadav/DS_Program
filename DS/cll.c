#include<stdio.h>
#include<stdlib.h>

   		struct clinklist
  		 {
     		 	int data;
      			struct clinklist *next;
 		  };

 		typedef struct clinklist CLL;

  		CLL *createlist()
   		{
			
	      		  CLL *head;
			  CLL *temp;
			//temp=(CLL *)malloc(sizeof(CLL ));
			head=(CLL *)malloc(sizeof(CLL ));
			//temp=NULL;
			temp=head;
			temp->next=head;
			
      			  return head;
  		 }

//Insertion at 1 st position

			void insertbeg(CLL **head,int data )
                        {
				
				CLL *current,*newnode;
        			newnode=(CLL *)malloc(sizeof(CLL ));
			
				if(!newnode)
				{
                                   printf("memory error");
				}
      				newnode->data=data;
				newnode->next=newnode;
				
                   	 	current=*head;
				
				 while(current->next !=(* head))  
				 current = current->next;
 
				if(*head == NULL)
				{
					*head= newnode;
				}
				else
				{
				  newnode->next=*head;
				  current->next=newnode;
				*head=newnode;
                               }
				return;
			}


//Insertion at last position
		void insertlast(CLL **head,int data )
                        {
				CLL *current,*newnode;
        			newnode=(CLL *)malloc(sizeof(CLL ));
				if(!newnode)
				{
                                   printf("memory error");
				}
      				newnode->data=data;
				newnode->next=newnode;
				
                   	 	current=*head;
				
				 while(current->next != (*head)) { 
				 current = current->next;
 				}
				if(head == NULL)
				{
					*head= newnode;
				}
				else
				{
				  newnode->next=(*head);
				  current->next=newnode;
                               }
				return;
			}
//deletetion of 1st element

			void deletefirst(CLL **head)
			{
				CLL *current,*temp;
				current=*head;
				if(*head==NULL)
				{
					printf("list empty");
					return;
				}
				
				while(current != *head){
					temp=current;  
					current=current->next;}
			
					temp->next=current->next;
					(*head)=current->next;
					free(current);
				return;
			}

//deletetion of last element

			void deletelast(CLL **head)
			{
				CLL *current,*temp;
				current=*head;
				if(*head==NULL)
				{
					printf("list empty");
				}
				
				while(current->next != *head) 
				{
					temp=current; 
					current=current->next;
				}
			
					temp->next=current->next;
		
					free(current);
				
			}

//Printing

			void display(CLL *head)
			 {
				CLL *current= head;
				
				if(head == NULL)  
				{
				printf("Empty list\n");
				return;
				}	
				printf("List : ");
				
				do{
					printf("  %d  ",current->data);
     					current=current->next;
					}while(current != head);
				
			printf("\n");
			 }

int main()
 {
		int choice,data;
		

       		 CLL *head;
		head=createlist();
		
		while(1)
       		 {
				printf("\n 1 : Insert at begining,     ");
				printf(" 2 : Insert at last,     ");
				printf(" 3: Delete first element,     ");
				printf(" 4: Delete last element,     ");
				printf("5: Display ,     ");
				printf("        6:EXIT   \n");
				printf("\nEnter ur choice: ");
				scanf("%d",&choice);
	

       				 switch(choice)
  				 {
					case 1:
							printf("Enter the data at begining : ");
							scanf("%d",&data);
							insertbeg( &head  ,data );
							                       
							break;
					case 2:
							printf("Enter the data at last : ");
							scanf("%d",&data);
							insertlast( &head , data );                        
							break;

					case 3:
							printf("\nDelete first element:   ");
							deletefirst(&head);
							break;
					case 4:
							printf("\nDelete last element:   ");
							deletelast(&head);
							break;
					case 5:
							display(head);
							break;
					case 6:
							exit(0);

					default:
							printf("operation is not correct \n");
			
				   }
		    }
return ;
   }
					
				

