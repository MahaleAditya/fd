#include<iostream>
#include<string.h>
using namespace std;
#define max 50

class stack
{
public:
    int top;
    char a[max];

    stack()
    {
        top = -1;
    }

    void push(char x)
    {
        if (top == max - 1)
        {
            cout << "stack is overflow:";
        }
        top++;
        a[top] = x;

    }
    char pop()
    {
        if (top == -1)
        {
            cout << "stack is underflow";
            return -1;
        }
        return a[top--];
    }
    void display()
    {
        if (top == -1)
        {
            cout << "stack is empty";
        }
        cout << "stack is:";
        for (int i = 0; i <= top; i++)
        {
            cout << a[i] << "\t";
        }
        cout << endl;
    }
};
int main()
{
    stack s;
    string str;

    cout << "enter the sting:";
    getline(cin, str);
    s.display();
    int i;

    string org_str = "";
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch < 'z')
        {
            ch = (char)(ch - 'a' + 'A');  //b=98    a=97  A=65 98-97+65=66   (B=66)
        }
        if (ch >= 'A' && ch <= 'Z')
        {
            s.push(ch);
            org_str.push_back(ch);
        }
    }
    cout << endl;
    s.display();
    int character;
    int flag = 1;
    while (s.top != -1)
    {
        while (org_str[i] != '\0')
        {
            character = s.pop();
            if (character != org_str[i])

                flag = 0;
            i++;

        }

    }
    cout << "Given String is " << (flag ? "" : "Not ") << "a Palindrome.";
}





