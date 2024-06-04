#include <iostream>
#include"quetype.h"

using namespace std;

int main()
{

    QueType<int> q(5);

    if(q.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);

    if(q.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    if(q.IsFull())
    {
        cout << "Queue is Full" << endl;
    }
    else
    {
        cout << "Queue is not Full" << endl;
    }

    q.Enqueue(6);

    // Print the values in the queue
    for(int i = 0; i< 5; i++)
    {
        int item;
        q.Dequeue(item);
        cout << item << " ";
        q.Enqueue(item); // reinserting
    }
    cout << endl;

    if(q.IsFull())
    {
        cout << "Queue is Full" << endl;
    }
    else
    {
        cout << "Queue is not Full" << endl;
    }

    try{
        q.Enqueue(8);
    }catch(FullQueue&){
        cout << "Queue Overflow" << endl;
    }

    //dequeue 2 items
    int dummy;
    q.Dequeue(dummy);
    q.Dequeue(dummy);

    for(int i=0; i< 3; i++)
    {
        int item;
        q.Dequeue(item);
        cout << item << " ";
        q.Enqueue(item);
    }

    q.Dequeue(dummy);
    q.Dequeue(dummy);
    q.Dequeue(dummy);

    if(q.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    try
    {
        q.Dequeue(dummy);
    }catch(EmptyQueue&)
    {
        cout << "Queue Underflow" << endl;
    }




    //Task 2

    int n;
    cout << "Enter Binary value you want to genrate: ";

    cin >> n;

    QueType<string> binary;

    binary.Enqueue("1");
    for(int i = 0; i < n; i++)
    {
        string s;
        binary.Dequeue(s);
        cout << s << endl;
        binary.Enqueue(s + "0");
        binary.Enqueue(s + "1");
    }















    return 0;
}
