#include <iostream>
#include <vector>


struct node
{
    int data;
    node* next;
};

class link
{
    protected:
    node* head{NULL},*temp,*tail;
    public:
    void create(int n)
    {
        temp=new node;
        temp->data=n;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    void display()
    {
        node* ptr=head;
        while(ptr!=NULL)
        {
            std::cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
};

int main()
{
    link elm1,elm2,elm3;
    link array[3]{elm1,elm2,elm3};
    array[0].create(1);
    array[0].create(2);
    array[0].create(3);
    array[0].display();
    std::cout<<std::endl;
    array[1].create(1);
    array[1].create(2);
    array[1].create(3);
    array[1].create(4);
    array[1].create(5);
    array[1].display();
    std::cout<<std::endl;
    array[2].create(1);
    array[2].create(2);
    array[2].display();
    std::cout<<std::endl;
    return 0;
}
