

Lab 6:


/* 1.

#include <iostream>
using namespace std;

class Circle
{
    
    public:
    int r;
    Circle(int radius)
    {
        r=radius;
    }
    double area()
    {
        double ar=3.14*r*r;
        return ar;
    }
    Circle()
    {
        r=0;
    }
};
class Rectangle: public Circle
{
    public:
    int b;
    Rectangle(int l,int br)
    {
        r=l;
        b=br;
    }
    double area()
    {
        double ar=2*(r+b);
        return ar;
    }
};
int main()
{
    Circle c(9);
    double cirArea=c.area();
    Rectangle r(3,7);
    double rArea=r.area();

    cout<<"\nCIRCLE AREA="<<cirArea;
    cout<<"\nRECTANGLE AREA="<<rArea;
}


*/





/* 2.

#include <iostream>
using namespace std;

class Circle
{
    
    public:
    int r;
    Circle(int radius)
    {
        r=radius;
    }
    double carea()
    {
        double ar=3.14*r*r;
        return ar;
    }
    Circle()
    {
        r=0;
    }
};
class Rectangle: public Circle
{
    public:
    int b;
    Rectangle(int l,int br)
    {
        r=l;
        b=br;
    }
    double rarea()
    {
        double ar=2*(r+b);
        return ar;
    }
    Rectangle()
    {
        r=0;
        b=0;
    }
};
class Box:public Rectangle
{
    public:
    int h;
    Box(float l,float br,float ht)
    {
        r=l;
        b=br;
        h=ht;
    }
    double Volume()
    {
        return r*b*h;
    }
};
int main()
{
    Box b(3.5,7,6.3);
    double cirArea=b.carea();
    double rArea=b.rarea();
    double vol=b.Volume();

    cout<<"\nCIRCLE AREA="<<cirArea;
    cout<<"\nRECTANGLE AREA="<<rArea;
    
    cout<<"\nVolume="<<vol;
}


*/




/* 3.

#include <iostream>
using namespace std;

class Circle
{
    
    public:
    int r;
    Circle(int radius)
    {
        r=radius;
    }
    double carea()
    {
        double ar=3.14*r*r;
        return ar;
    }
    Circle()
    {
        r=0;
    }
};
class Rectangle: public Circle
{
    public:
    int b;
    Rectangle(float l,float br)
    {
        r=l;
        b=br;
    }
    double rarea()
    {
        double ar=2*(r+b);
        return ar;
    }
};
class Cylinder:public Circle
{
    public:
    int h;
    Cylinder(float rd,float ht)
    {
        r=rd;
        h=ht;
    }
    double Volume()
    {
        return r*h;
    }
};
int main()
{
    Rectangle r(2.4,6.1);
    double cirArea=r.carea();
    double rArea=r.rarea();
    Cylinder c(8.1,10);
    double cArea=c.carea();
    double vol=c.Volume();
    cout<<"\nCIRCLE AREA FROM RECTANGLE CLASS="<<cirArea;
    cout<<"\nRECTANGLE AREA="<<rArea;

    cout<<"\n\nCIRCLE AREA FROM CYLINDER CLASS="<<cArea;
    cout<<"\nCYLINDER VOLUME="<<vol;

}


*/




LAB 7:



/* 1.

#include<iostream>
using namespace std;

class example
{
	int i,j,k;
	public:
		example(int a,int b,int c)
		{
			i=a;
			j=b;
			k=c;
		}
		void display()
		{
			cout<<"the values are \n"<<i<<"\n"<<j<<"\n"<<k<<"\n";			
		}
	void operator -()
	{
		i=i+3;
		j=j-3;
		k=k*3;
	}
};

int main()
{
	example e(10,9,7);
	e.display();
	cout<<"after changes ";
	-e;
	e.display();
	return 0;	
}

*/





/* 2.

#include<iostream>
using namespace std;

class example
{
	int i,j,k;
	public:
		example(int a,int b,int c)
		{
			i=a;
			j=b;
			k=c;
		}
		void display()
		{
			cout<<"the values are \n"<<i<<"\n"<<j<<"\n"<<k<<"\n";			
		}
	friend void operator -(example &e1)
	{
		e1.i=e1.i+3;
		e1.j=e1.j-3;
		e1.k=e1.k*3;
	}
};

int main()
{
	example e(10,9,7);
	e.display();
	cout<<"after changes ";
	-e;
	e.display();
	return 0;	
}


*/






/* 3.

#include<iostream>
using namespace std;

class example
{
	int i,j,k;
	public:
		example(int a,int b,int c)
		{
			i=a;
			j=b;
			k=c;
		}
		void display()
		{
			cout<<"the values entered are \n"<<i<<"\n"<<j<<"\n"<<k<<"\n";			
		}
	void operator ++()
	{
		i=i+3;
		j=j-3;
		k=k*3;
	}
	void operator --()
	{
		i=i+5;
		j=j-5;
		k=k*5;
	}
};

int main()
{
	example e1(10,9,7);
	example e2(2,14,6);
	e1.display();
	e2.display();
	cout<<"after changes on first ";
	++e1;
	e1.display();
	cout<<"after changes on second ";
	--e2;
	e2.display();
	return 0;	
}


*/





/* 4.

#include<iostream>
using namespace std;

class example
{
	int i,j,k;
	public:
		example(int a,int b,int c)
		{
			i=a;
			j=b;
			k=c;
		}
		void display()
		{
			cout<<"the values entered are \n"<<i<<"\n"<<j<<"\n"<<k<<"\n";			
		}
	friend operator ++(example &e1)
	{
		e1.i=e1.i+3;
		e1.j=e1.j-3;
		e1.k=e1.k*3;
	}
	friend operator --(example &e2)
	{
		e2.i=e2.i+5;
		e2.j=e2.j-5;
		e2.k=e2.k*5;
	}
};

int main()
{
	example e1(10,9,7);
	example e2(2,14,6);
	e1.display();
	e2.display();
	cout<<"after changes on first ";
	++e1;
	e1.display();
	cout<<"after changes on second ";
	--e2;
	e2.display();
	return 0;	
}


*/




/* 5.

#include<iostream>
#include<conio.h>
using namespace std;
//Creating class Complex
class Complex
{
public:
int real,img;

//add function to add two matrices
void add(Complex c1,Complex c2)
{
int x,y;
x=c1.real+c2.real;
y=c1.img+c2.img;
cout<<"\n("<<c1.real<<"+"<<c1.img<<"i)+("<<c2.real<<"+"<<c2.img<<"i)=("<<x<<"+"<<y<<"i)";
}

//multiply function to multiply two complex numbers
void multiply(Complex c1,Complex c2)
{
int x,y;
x=c1.real*c2.real-c1.img*c2.img;
y=c1.real*c2.img+c1.img*c2.real;
cout<<"\n("<<c1.real<<"+"<<c1.img<<"i)*("<<c2.real<<"+"<<c2.img<<"i)=("<<x<<"+"<<y<<"i)";
}

//Overloading increment operator to increment complex number
Complex operator ++()
{
Complex x;
x.real=++real;
x.img=++img;
return x;
}
};

int main ()
{
Complex a,b,c,d,e;
cout<<"\nEnter real and imaginary part of first complex number:";
cin>>a.real>>a.img;
cout<<"\nEnter real and imaginary part of second complex number:";
cin>>b.real>>b.img;
c.add(a,b);
d.multiply(a,b);
cout<<"\n++("<<a.real<<"+"<<a.img<<"i)=(";
++a;
cout<<a.real<<"+"<<a.img<<"i)";
getch();
return 0;
}



*/




/* 9.

#include <iostream> 
using namespace std; 
  
class player
{
int player_no, score;
char name[20];
public: 
    void get() 
    {  
    cout<<"enter the player details\n";
	}
	
    friend ostream & operator << (ostream &out, player &p)
    { 
    out<<"number\tname\tscore\n";
	out <<p.player_no<<"\t"<<p.name<<"\t"<<p.score<<endl;
	}
	
    friend istream & operator >> (istream &in,  player &p)
    { 
    cout << "enter player number "; 
    in >>p.player_no; 
    cout << "enter player name "; 
    in >>p.name;
    cout<<"enter player score ";
    in>>p.score;
	}	 
}; 
int main() 
{ 
   player a1;
   cin>>a1;
   cout<< "the output is \n"; 
   cout<<a1;
   return 0;
}


*/



/* 10.

#include<iostream> 
#include<stdlib.h> 
  
using namespace std; 
class student 
{ 
    string name; 
    int age; 
public: 
    student() 
    { 
        cout<< "Constructor is called\n" ;  
    } 
    student(string name, int age) 
    { 
        this->name = name; 
        this->age = age; 
    } 
    void display() 
    { 
        cout<< "Name:" << name << endl; 
        cout<< "Age:" << age << endl; 
    } 
    void * operator new(size_t size) 
    { 
        cout<< "Overloading new operator with size: " << size << endl; 
        void * p = ::new student();  
        //void * p = malloc(size); will also work fine 
      
        return p; 
    } 
  
    void operator delete(void * p) 
    { 
        cout<< "Overloading delete operator " << endl; 
        free(p); 
    } 
}; 
  
int main() 
{ 
    student * p = new student("Yash", 24); 
  
    p->display(); 
    delete p; 
} 


*/





Lab 8: 



/* 1.

#include<iostream>
using namespace std;
class item
{
			int code;
			float price;
		public:
			void getdata(int a,float b)
			{
				code=a;
				price=b;	
			}
			void show(void)
			{
					cout<<"CODE :"<<code<<"\n";
					cout<<"PRICE :"<<price<<"\n";
			}	
};
const int size =2;
int main()
{
			item *p=new item[size];
			item *d=p;
			int x,i;
			float y;
			for(i=0;i<size;i++)
			{
				cout<<"input code and price for item "<<i+1;
				cin>>x>>y;
				p->getdata(x,y);
				p++;
			}
			for(i=0;i<size;i++)
			{
				cout<<"item:"<<i+1<<"\n";
				d->show();
				d++;
			}
			return 0;
}



*/



/* 2.

#include<iostream>
using namespace std;
class Item
{
  private:
    int item_number;
    int item_price;
  public:
    Item();
    void display();
};

int main()
{
  int n;
  cout<<"No of Items: ";
  cin>>n;
  Item *ptr = new Item[n];
  cout<<"\nItem Number      Price:\n";
  for(int i=0; i<n; i++)
    (ptr+i)->display();
  return 0;
}

Item :: Item()
{
  cout<<"Item number: ";
  cin>>item_number;
  cout<<"Item price: ";
  cin>>item_price;
}

void Item :: display()
{
  cout<<"    "<<item_number;
  cout<<"            "<<item_price<<endl;
}


*/




/* 3.


#include <iostream>
using namespace std;

class Base
{
    protected:
    int x;
    public:
    Base(){};
    Base(int x1): x(x1) {};
    void show()
    {
        cout<<"x = "<<x<<endl;
    }
    virtual void printData()
    {
        cout<<"x = "<<x<<endl;
    }

};

class Derived: public Base
{
    int y;
    public:
    Derived(){};
    Derived(int x1, int y1): Base(x1), y(y1) {};
    void showXY()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    void printData()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};

int main()
{
    Base *d1 = new Derived(1,2);
    d1->show(); 
    d1-> printData(); 
    d1->~Base();  

}


*/




/* 4.


#include<iostream> 

using namespace std; 

class Test 
{ 

private: 

   int x; 

public: 

   void setX (int x) 

   { 

       // The 'this' pointer is used to retrieve the object's x 

       // hidden by the local variable 'x' 

       this->x = x; 

   } 

   void print() { cout << "x = " << x << endl; } 
}; 

  

int main() 
{ 

   Test obj; 

   int x = 20; 

   obj.setX(x); 

   obj.print(); 

   return 0; 
}


*/



/* 5.


#include<iostream>
using namespace std;

class ABC
{
  public:
    void display()
    {
      cout<<"Base class\n";
    }
};

class BBC : public ABC
{
  public:
    void display()
    {
      cout<<"Derieved class BBC\n";
    }
};

class KBC : public ABC
{
  public:
    void display()
    {
      cout<<"Derieved class KBC\n";
    }
};

int main()
{
  ABC x, *ptr;
  BBC y;
  KBC z;
  ptr = &x;
  ptr->display();
  ptr = &y;
  ptr->display();
  ptr = &z;
  ptr->display();
  return 0;
}


*/



/* 6.

#include<iostream>
using namespace std;

class ABC
{
  public:
    virtual void display() = 0;
};

class BBC : public ABC
{
  public:
    void display()
    {
      cout<<"Derieved class BBC\n";
    }
};

class KBC : public ABC
{
  public:
    void display()
    {
      cout<<"Derieved class KBC\n";
    }
};

int main()
{
  ABC *ptr;
  BBC x;
  KBC y;
  ptr = &x;
  ptr->display();
  ptr = &y;
  ptr->display();
  return 0;
}


*/




Lab 9:


/* 1.


#include<conio.h>
#include<iostream>
using namespace std;
 
template<class min>
void minelement(min e[10], int n)
{
    int i, j;
    min small = e[0];
 
    for(i=0;i<n;i++)
    {
        if(small>e[i])
        {
            small = e[i];
        }
    }
    cout<<"\nSmallest Element:"<<small;
}
 
int main()
{
    int n=5;
    int a[5] = {3,2,4,1,5};
    float b[5] = {1.2,1.9,2.3,1.4,1.5};
    char c[5] = {'k','b','z','d','e'};
    minelement(a,n);
    minelement(b,n);
    minelement(c,n);
    getch();
    return 0;
}



*/




/* 2.

#include<iostream>
#include<stdio.h>

using namespace std;

template <class T>
void swap(T&a,T&b)      //Function Template
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x1=4,y1=7;
    float x2=4.5,y2=7.5;
    cout<<“Before Swap:”;
    cout<<“nx1=”<<x1<<“ty1=”<<y1;
    cout<<“nx2=”<<x2<<“ty2=”<<y2;

    swap(x1,y1);
    swap(x2,y2);

    cout<<“nnAfter Swap:”;
    cout<<“nx1=”<<x1<<“ty1=”<<y1;
    cout<<“nx2=”<<x2<<“ty2=”<<y2;

    return 0;
}



*/




/* 3.


#include <iostream>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 5

using namespace std;

// Template Declaration

template<class T>

// Generic Template Function for Search
T getSearch(T x[], T element) {
    int i;

    cout << "\nYour Data   :";
    for (i = 0; i < MAX_SIZE; i++) {
        cout << "\t" << x[i];
    }

    //* for : Check elements one by one - Linear 
    for (i = 0; i < MAX_SIZE; i++) {
        //* If for Check element found or not 
        if (x[i] == element) {
            cout << "\nFunction Template : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

    if (i == MAX_SIZE)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}

int main() {

    int arr_search[MAX_SIZE], i, element;
    float f_arr_search[MAX_SIZE], f_element;

    cout << "Simple Function Template Array Program Example : Search Number\n";
    cout << "\nEnter " << MAX_SIZE << " Elements for Searching Int : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> arr_search[i];

    cout << "\nEnter Element to Search (Int) : ";
    cin>>element;

    // Passing int Array to Template Function
    getSearch(arr_search, element);

    cout << "\nEnter " << MAX_SIZE << " Elements for Searching Float : " << endl;
    for (i = 0; i < MAX_SIZE; i++)
        cin >> f_arr_search[i];

    cout << "\nEnter Element to Search (Float) : ";
    cin>>f_element;

    // Passing int Array to Template Function
    getSearch(f_arr_search, f_element);

    getch();

    return 0;
}


*/





/* 4 .


#include <iostream> 
using namespace std; 
   
// A template function to implement bubble sort. 
// We can use this for any data type that supports 
// comparison operator < and swap works for it. 
template <class T> 
void bubbleSort(T a[], int n) { 
    for (int i = 0; i < n - 1; i++) 
        for (int j = n - 1; i < j; j--) 
            if (a[j] < a[j - 1]) 
              swap(a[j], a[j - 1]); 
} 
   
// Driver Code 
int main() { 
    int a[5] = {10, 50, 30, 40, 20}; 
    int n = sizeof(a) / sizeof(a[0]); 
   
    // calls template function  
    bubbleSort<int>(a, 5); 
   
    cout << " Sorted array : "; 
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; 
    cout << endl; 
   
  return 0; 
} 


*/




/* 6.


#include <iostream>
using namespace std;
 
template<class t1>
void sum(t1 a,t1 b,t1 c)
{
    cout<<"\nTemplate function 1: Sum = "<<a+b+c<<endl;
}
 
template <class t1,class t2>
void sum(t1 a,t1 b,t2 c)
{
    cout<<"\nTemplate function 2: Sum = "<<a+b+c<<endl;
}
 
void sum(int a,int b)
{
    cout<<"\nNormal function: Sum = "<<a+b<<endl;
}
 
int main()
{
    int a,b;
    float x,y,z;
    cout<<"\nEnter two integer data: ";
    cin>>a>>b;
    cout<<"\nEnter three float data: ";
    cin>>x>>y>>z;
    sum(x,y,z); // calls first template function
    sum(a,b,z); // calls first template function
    sum(a,b); // calls normal function
    return 0;
}


*/



/* 7.


#include <iostream>
using namespace std;
 
template<class t1,class t2>
void sum(t1 a,t2 b) // defining template function
{
    cout<<"\nSum="<<a+b<<endl;
}
 
int main()
{
    int a,b;
    float x,y;
    cout<<"\nEnter two integer data: ";
    cin>>a>>b;
    cout<<"\nEnter two float data: ";
    cin>>x>>y;
    sum(a,b); // adding two integer type data
    sum(x,y); // adding two float type data
    sum(a,x); // adding a float and integer type data
    return 0;
}


*/





/* 8.

#include<iostream>
using namespace std;
template<class T>
class vector
{
    T v[20];
    int size;
   
    public:
        void create();
        void modify();
        void mult();
        void display();
};

template<class T>
void vector<T>::create()
{
    int i;
    T value;
    char ans;
    size=0;
    do{
        cout<<"\nEnter the index & value:";
        cin>>i>>value;
        v[i]=value;
        size++;
        cout<<"\nDo you want more elements?";
        cin>>ans;
    }while(ans=='y'||ans=='Y');
}

template<class T>
void vector<T>::modify()
{
    int key;
    T newval;
    cout<<"\nEnter index for modificaion:";
    cin>>key;
    cout<<"\nEnter new value:";
    cin>>newval;
    v[key]=newval;
}

template<class T>
void vector<T>::mult()
{
    int i;
    int scalarval;
    cout<<"\nEnter scalar value for multiplication";
    cin>>scalarval;
    for(i=0;i<size;i++)
    v[i]=v[i]*scalarval;
}

template<class T>
void vector<T>::display()
{
    int i;
   
    cout<<"\nSize of vector is:"<<size;
    cout<<"\nElements in vector are:";
    cout<<"(";
    for(i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<")";
}

int main()
{
    int ch;
    vector<int>obj;
    cout<<"\nProgram for template class";
    do
    {
        cout<<"\nMAIN MENU";
        cout<<"\n1.Create";
        cout<<"\n2.Display";
        cout<<"\n3.Mult";
        cout<<"\n4.Modify";
        cout<<"\n0.Exit";
        cout<<"\nEnter your choice:";
        cin>>ch;
       
        switch(ch)
        {
            case 1:
                obj.create();
                break;
               
            case 2:
                obj.display();
                break;
               
            case 3:
                obj.mult();
                break;
               
            case 4:
                obj.modify();
                break;
               
            case 0:
                cout<<"\nExit\n";
                break;
               
            default:
                cout<<"\nInvalid choice";
                break;
        }
    }while(ch!=0);
    return 0;
}


*/



/* 10.


#include <iostream>
#include <cstdlib>
using namespace std;

// define default capacity of stack
#define SIZE 10

// Class for stack
template <class X>
class stack
{
	X *arr;
	int top;
	int capacity;

public:
	stack(int size = SIZE);	// constructor

	void push(X);
	X pop();
	X peek();

	int size();
	bool isEmpty();
	bool isFull();

	// destructor
	~stack(){
		delete[] arr;
	}
};

// Constructor to initialize stack
template <class X>
stack<X>::stack(int size)
{
	arr = new X[size];
	capacity = size;
	top = -1;
}

// function to add an element x in the stack
template <class X>
void stack<X>::push(X x)
{
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << x << endl;
	arr[++top] = x;
}

// function to pop top element from the stack
template <class X>
X stack<X>::pop()
{
	// check for stack underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << peek() << endl;

	// decrease stack size by 1 and (optionally) return the popped element
	return arr[top--];
}

// function to return top element in a stack
template <class X>
X stack<X>::peek()
{
	if (!isEmpty())
		return arr[top];
	else
		exit(EXIT_FAILURE);
}

// Utility function to return the size of the stack
template <class X>
int stack<X>::size()
{
	return top + 1;
}

// Utility function to check if the stack is empty or not
template <class X>
bool stack<X>::isEmpty()
{
	return top == -1;	// or return size() == 0;
}

// Utility function to check if the stack is full or not
template <class X>
bool stack<X>::isFull()
{
	return top == capacity - 1;	// or return size() == capacity;
}

int main()
{
	stack<string> pt(2);

	pt.push("A");
	pt.push("B");

	pt.pop();
	pt.pop();

	pt.push("C");

 	// Prints the top of the stack
 	cout << "Top element is: " << pt.peek() << endl;

	// Returns the number of elements present in the stack
	cout << "Stack size is " << pt.size() << endl;

	pt.pop();

	// check if stack is empty or not
	if (pt.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";

	return 0;
}


*/





/* 12.


#include <iostream>
#include <cstdlib>
using namespace std;

// define default capacity of the queue
#define SIZE 10

// Class for queue
template <class X>
class queue 
{
	X *arr; 		// array to store queue elements
	int capacity;   // maximum capacity of the queue
	int front;  	// front points to front element in the queue (if any)
	int rear;   	// rear points to last element in the queue
	int count;  	// current size of the queue

public:
	queue(int size = SIZE);		// constructor

	void dequeue();
	void enqueue(X x);
	X peek();
	int size();
	bool isEmpty();
	bool isFull();
};

// Constructor to initialize queue
template <class X>
queue<X>::queue(int size)
{
	arr = new X[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

// Utility function to remove front element from the queue
template <class X>
void queue<X>::dequeue()
{
	// check for queue underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << arr[front] << '\n';

	front = (front + 1) % capacity;
	count--;
}

// Utility function to add an item to the queue
template <class X>
void queue<X>::enqueue(X item)
{
	// check for queue overflow
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << item << '\n';

	rear = (rear + 1) % capacity;
	arr[rear] = item;
	count++;
}

// Utility function to return front element in the queue
template <class X>
X queue<X>::peek()
{
	if (isEmpty()) 
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}
	return arr[front];
}

// Utility function to return the size of the queue
template <class X>
int queue<X>::size()
{
	return count;
}

// Utility function to check if the queue is empty or not
template <class X>
bool queue<X>::isEmpty()
{
	return (size() == 0);
}

// Utility function to check if the queue is full or not
template <class X>
bool queue<X>::isFull()
{
	return (size() == capacity);
}

int main()
{
	// create a queue of capacity 4
	queue<string> q(4);

	q.enqueue("a");
	q.enqueue("b");
	q.enqueue("c");
	
	cout << "Front element is: " << q.peek() << endl;
	q.dequeue();
	
	q.enqueue("d");

	cout << "Queue size is " << q.size() << endl;

	q.dequeue();
	q.dequeue();
	q.dequeue();
	
	if (q.isEmpty())
		cout << "Queue Is Empty\n";
	else
		cout << "Queue Is Not Empty\n";

	return 0;
}


*/
