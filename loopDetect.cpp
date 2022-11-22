
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    // int connterSize()
    bool detectLoop(Node* head)
    {
       Node * slow = head ;
       Node * fast = head;
       while(fast!= NULL && fast-> next !=NULL && slow!=NULL)
       {


           slow = slow -> next;
            fast =fast -> next -> next;

           if(slow == fast)
           {
               return 1;
           }
       }
       return 0;
    }
};