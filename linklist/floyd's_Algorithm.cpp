// function code for floyd's algorithm

// for the detection of cycle in linklist

bool detectcylce(node *&head)
{
    node *fast, *slow;
    fast = head;
    slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

//for the removal of linking in cycle 

void removecycle(node *&head)
{
    node *fast, *slow;
    fast = head;
    slow = head;

    do
    {
        fast = fast->next->next;
        slow = slow->next;

    } while (fast != slow);

    fast = head;

    while (slow->next != fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }

    slow->next = NULL;
}