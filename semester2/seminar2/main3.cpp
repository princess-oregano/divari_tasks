#include <iostream>
using namespace std;

template <class Q>

class Queue
{
    int a[100];
    short int N,f,r;

public:
    Queue(short int s)
    {
        N=s;
        f=r=0;
        cout<<"The size of the queue is assigned as:::"<<N;
        cout<<endl;
    }

    Q size()
    {
        return (N-f+r)%N;
    }

    bool isEmpty()
    {
        if(r==f)
            return true;
        else
            return false;
    }

    Q front()
    {
        try
        {
            if(isEmpty()==true)
            {
                short int t=0;
                throw t;
            }
            else
                return a[f];
        }
        catch(...)
        {
            cout<<"Queue EmptyException"<<endl;
        }
    }

    void enQueue(Q m)
    { 
        try
        {
            if(size()==N-1)
            { 
                short int r=0;
                throw r;
            }

            else
            {
                a[r]=m;
                r=(r+1)%N;
            }
        }
        catch(...)
        {
            cout<<"Queue full exception"<<endl;
        }
    }
    Q deQueue()
    {

        try
        {
            if(isEmpty()==true)
            {
                short int k=0;
                throw k;
            }
            else
            {
                short int temp;
                temp=a[f];
                f=(f+1)%N;
                return temp;
            }
        }
        catch(...)
        {
            cout<<"Queue Empty Exception"<<endl;
        }
    }

};

int main()
{ 
    char s; 
    int a; 
    cout<<"---------------------------"<<endl;
    cout<<"Welcome to Josephus Problem"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"press any key to continue"<<endl;
    getchar();
    do
    {
        cout<<"1.New Game"<<endl; 
        cout<<"2.Exit"<<endl; 
        cout<<"Enter the choice"<<endl; 
        cin>>a; 

        switch(a) 
        {

        case 1:
            {
                short int j;
                cout<<"Enter the size of the Queue"<<endl;
                cin>>j;
                Queue<int>q1(j);
                short int n,k;
                int count=1;
                cout<<"Enter the number of people::"<<endl;
                cin>>n;
                cout<<"Enter the number of Successive cut"<<endl;
                cin>>k;

                for(int i=1;i<=n;i++)
                {
                    q1.enQueue(i);
                }

                while(n>0)
                {

                    if(q1.size()==1)
                    {
                        int a;
                        a=q1.deQueue();
                        cout<<"The person escaped is"<<a<<endl;
                        break;
                    }
                    else
                    {
                        if(count%k==0)
                        {
                            q1.deQueue();
                            n--;
                            count++;
                            continue;
                        }
                        else
                        {
                            short int b;
                            b=q1.deQueue();
                            q1.enQueue(b);
                            count++;
                            continue;
                        }
                    }
                }

                break;
            }
        case 2:
            {
                cout<<"Do you want to exit press E"<<endl;
                break;
            }
        }
        cout<<"press S to continue"<<endl;
        cin>>s;
    }while(s=='S');
}
