#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
class SE
{   public:
    struct node *insert();
    void display(struct node*);
    void intersect(struct node* , struct node* );
    void unio(struct node*, struct node*);
    void diff(struct node*, struct node*,struct node*);

};
struct node* SE::insert()
{
    struct node *temp, *start=NULL, *newnode;
    int n, i;
    cout << "enter the  number of student:\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        newnode = new node;
        cout << "enter the roll number :";
        cin >> newnode->data;
        newnode->next = NULL;
        if (start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
      
    }
    return start;
}
void SE::display(struct node* temp)
{
    node* t;
    t = temp;
    int count = 0;
    while (t != NULL)
    {
        cout << t->data<<"\t";
        t = t->next;
        count++;
    }
    cout << "\n total number of student:" << count;
}
void SE::intersect(struct node* p, struct node* q)
{
    node* temp;
    while (p != NULL)
    {
        temp = q;
        while (temp != NULL)
        {
            if (p->data == temp->data)
            {
                cout << p->data<<endl;
                break;
            }
            temp = temp->next;
        }
        p = p->next;
    }
}
void SE::diff(struct node* p, struct node* q,struct node *s)
{
    struct node* t1 = p;
    struct node* t2 = q;
    int found;
    while (s != NULL)
    {
        t1 = p;
        t2 = q;
        found = 0;
        while (t1 != NULL)
        {
            if (t1->data == s->data)
            {
                found = 1;
                break;
            }
            t1 = t1->next;
        }
        while (t2 != NULL)
        {
            if (t2->data == s->data)
            {
                found = 1;
                break;
            }
            t2 = t2->next;

        }
        if (found == 0)
        {
            cout << s->data << "\t";
        }
        s= s->next;

    }
}
int main()
{
    struct node* head = NULL, * head1 = NULL, * sehead = NULL;
    SE s;
    cout << "total number of SE student\n";
    sehead=s.insert();
    while (1) {
        cout << "\n1.insert the record\n";
        cout << "2.display the record\n";
        cout << "3.Set of students who like both vanilla and butterscotch \n";
        cout << "4.Set of students who like either vanilla or butterscotch or not both\n";
        cout << "5.Number of students who like neither vanilla nor butterscotch\n";
        cout<<"6.exit\n";
        int ch;
        cout << "enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Students Like Vanilla: ";
            head = s.insert();
            cout << "Students Like Butterscotch: ";
            head1 = s.insert();
            break;
        case 2:
            cout << "Student who like vanilla: \n";
            s.display(head);
            cout << "Student who like butterscotch: \n";
            s.display(head1);
            break;
        case 3:
            cout << "Students Who Like Both" << endl;
            s.intersect(head, head1);
            break;
        case 4:
            cout << "Students Who like either Vanilla or Butterscotch or not both" << endl;
            //s.unio(head, head1);
            s.display(sehead);
            break;
        case 5:

            cout << "Students who not like neither Vanilla nor Butterscotch\n";
            s.diff(head, head1, sehead);
            break;
        case 6:
                exit(0);
        }


    }
    return(0);
}
