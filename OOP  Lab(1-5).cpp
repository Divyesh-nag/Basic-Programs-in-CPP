

Lab 1:


/* 1.

#include<iostream>
using namespace std;
int main()
{
	cout<<"\n the size of fundamental data types are\n";
	cout<<"the size of char is\t"<<sizeof(char)<<" bytes\n";
	cout<<"the size of int is\t"<<sizeof(int)<<" bytes\n";
	cout<<"the size of float is\t"<<sizeof(float)<<" bytes\n";
	cout<<"the size of double is\t"<<sizeof(double)<<" bytes\n";
	cout<<"the size of long double is\t"<<sizeof(long double)<<" bytes\n";
	cout<<"the size of short is\t"<<sizeof(short)<<" bytes\n";
	return 0;
}

*/




/* 2.

#include<iostream>
using namespace std;
bool test(int x,int y)
{
	return abs (x % 10)==abs (y % 10);
}
int main()
{
	cout<<test(123,14)<<endl;
	cout<<test(232,62)<<endl;
	cout<<test(91,55)<<endl;
	cout<<test(47,17)<<endl;
	return 0;
}


*/



/*3.


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c;
float x1,x2,discriminant,real,imaginary;
cout<<"enter the coefficient of a,b,c in the quadratic equation ax^2+bx+c\n";
cin>>a>>b>>c;
cout<<"the quadratic equation is\t"<<a<<"x^2 + "<<b<<"x + "<<c<<"\n";
if(a==0)
 {
 	cout<<"this is not a quadratic equation\n";
 } 
else
{
	discriminant=b*b-4*a*c;
	if(discriminant>0)
	{
		x1=(-b+sqrt(discriminant))/(2*a);
		x2=(-b-sqrt(discriminant))/(2*a);
		cout<<"the roots are real and distinct\n"<<x1<<"\t"<<x2;
	}
	else if(discriminant=0)
	{
		x1=x2=-b/(2*a);
		cout<<"the roots are real and same\n"<<x1;
	}
	else
	{
		real=-b/(2*a);
		imaginary=sqrt(discriminant)/(2*a);
		cout<<"the roots are imaginary\n"<<real<<"+/-"<<imaginary<<"i";
	}
}
cout<<"\n";
return 0;
}

*/



/*4.


#include<iostream>
using namespace std;
int main()
{
	int n,i,m,flag=0;
	cout<<"enter the number to check prime or not\n";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"the number is not prime\n";
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"the number is prime \n";
	return 0;
}


*/




/* 5.


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	float x1,x2,discriminant,real,imaginary;
	cout<<"enter the coefficients of the quadratic quation in the form of ax^2+bx+c\n";
	cin>>a>>b>>c;
	cout<<"the quadratic equation is \t"<<a<<"x^2 + "<<b<<"x + "<<c;
	if(a==0)
	{
		cout<<"this is no a quadratic quation\n";
	}
	else
	{
		discriminant = b*b-4*a*c;
		if(discriminant>0)
		{
			x1=(-b+sqrt(discriminant))/(2*a);
			x2=(-b-sqrt(discriminant))/(2*a);
			cout<<"\nthe roots are real and distinct\n";
			cout<<"roots are\t"<<x1<<"änd\t"<<x2;
		}
		else if(discriminant==0)
		{
			x1=x2=-b/(2*a);
			cout<<"\nthe roots are real and same\n";
			cout<<"root is \t"<<x1;
		}
		else
		{
		real=-b/(2*a);
		imaginary=sqrt(discriminant)/(2*a);
		cout<<"\nthe roots are imaginary\n";
		cout<<"roots are\t"<<real<<"+/-"<<imaginary<<"i\n";
		}
	}
	cout<<"\n";
	return 0;
	
}
	
*/





/*6.

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double sum=0,a;
int n,i;
cout<<"to find the sum of the series  1+1/2^2+1/3^3.....+1/n^n\n";
cout<<"enter the value of n\n";
cin>>n;
for(i=0;i<=n;i++)
{
	a=1/pow(i,i);
	cout<<"1/"<<i<<"^"<<i<<"="<<a<<"\n";
	sum+=a;
}
cout<<"the sum of the series is \t"<<sum<<endl;
return 0;
}


*/




/* 7.

#include<iostream>
using namespace std;
int main()
{
	int i,ar[10],n,mx,mn;
	cout<<"enter the total number of elements in the array\n";
	cin>>n;
	cout<<"\n enter the array elements\n";
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
mx=ar[0];
mn=ar[0];
for(i=0;i<n;i++)
{
	if(ar[i]>mx)
	{
	mx=ar[i];
	}
	if(ar[i]<mn)
	{
	mn=ar[i];
	}
}
cout<<"\nthe largest number is \t"<<mx<<"\nthe smallest number is \t"<<mn;
cout<<"\n";
return 0;
}

*/



/* 8.

#include<iostream>
#include<math.h>
using namespace std;
void prime_factor(int n)
{
int i;
	while(n%2==0)
	{
		cout<<"2\t";
		n=n/2;
	}
	for(i=3;i<=sqrt(n);i=i+2)
		while(n%i==0)
		{
			cout<<i<<"\t";
			n=n/i;
		}
	if(n>2)
	cout<<n<<"\t";
}

int main()
{
int n;
cout<<"enter any number to know the prime factors\n";
cin>>n;
cout<<"the prime factors is/are :\n";
prime_factor(n);
return 0;
}

*/



/* 9.

#include<iostream>
using namespace std;
struct book
{
	char author[100];
	char title[100];
	float price;
};
int main()
{	
book b[20];
int n,i;
cout<<"enter the number of books to be entered\n";
cin>>n;
	cout<<"enter the author,title and price of the books respectively one by one\n";
	for(i=0;i<n;i++)
	{
		cout<<"author name\t";
		cin>>b[i].author;
		cout<<"title\t";
		cin>>b[i].title;
		cout<<"price\t";
		cin>>b[i].price;
	}
	for(i=0;i<n;i++)
	{
	cout<<"\n book deatail \t"<<i+1;
	cout<<"\n the author name is \t";
	cout<<b[i].author;
	cout<<"\n title name \t";
	cout<<b[i].title;
	cout<<"price is \t"<<b[i].price<<"\n";
	}
return 0;
}


*/




Lab 2:



/* 1.


#include <iostream>  
using namespace std;  
void swap_val(int n1,int n2)
  {
cout<<"\nthe values input for by call by value is\t "<<n1<<"\t"<<n2;  
	int t;
	t=n1;
	n1=n2;
	n2=t;
cout<<"\nthe swapped value by call by value is\t\t "<<n1<<"\t"<<n2;  
  }  
void swap_ref(int *n3,int *n4)
  {
cout<<"\nthe values input for call by reference is\t "<<*n3<<"\t"<<*n4;  
	int t;
	t=*n3;
	*n3=*n4;
	*n4=t;
cout<<"\nthe swapped value by call by reference is\t "<<*n3<<"\t"<<*n4;  
  }  
void swap_add(int &n5,int &n6)
  {
cout<<"\nthe values input for call by address is\t\t "<<n5<<"\t"<<n6;
	int t;
	t=n5;
	n5=n6;
	n6=t;
cout<<"\nthe swapped value by call by address is\t\t "<<n5<<"\t"<<n6<<endl;
  }  
int main()  
{  
int *p,*q;
int data1 = 3,data2 = 5,data3 = 6,data4 = 2,data5 = 4,data6 = 9;
p=&data5;
q=&data6; 
swap_val(data1,data2); 
swap_ref(&data3,&data4);
swap_add(*p,*q);
return 0;  
}  


*/




/* 2.


#include<iostream>  
using namespace std; 
int x=5;
int main() 
{ 
  int x;
  cout<<"enter any number\n";
  cin>>x; 
  cout << "Value of global x is " << ::x; 
  cout << "\nValue of local x is " << x;   
  return 0; 
} 


*/




/* 3.

#include<iostream>
using namespace std;
float area_vol(int r)
{
	return(3.14*r*r);
}
float area_vol(float r1)
{
	return((4*3.14*r1*r1*r1)/3);
}
int main()
{
int r;
float r1;
cout<<"Enter radius of circle\n";
cin>>r;
cout<<"Enter radius of sphere: ";
cin>>r1;
cout<<"\narea of circle is:  "<<area_vol(r);
cout<<"\nVolume of sphere is:  "<<area_vol(r1)<<endl;
return 0;
}

*/




/* 4.
#include<iostream>
#include<stdlib.h>
using namespace std;
float fun_area(float r)
{
	return(3.14*r*r);
}
float fun_area(float l,float b)
{
	return(l*b);
}
float fun_area(float l,float b,float h)
{
	return(l*b*h);
}
int main()
{
	float r,b,l,h;
	int ch;
do
{
	cout<<"\n \t MENU\n";
	cout<<"1. area of circle\n";
	cout<<"2. area of rectangle\n";
	cout<<"3. volume of box\n";
	cout<<"4. exit\n";	
cin>>ch;
switch(ch)
	{
		case 1:
		{
		cout<<"enter the radius\n";
		cin>>r;
		cout<<"area of circle is \t"<<fun_area(r);
		break;
		}
		case 2:
		{
		cout<<"enter the length and breadth\n";
		cin>>l>>b;
		cout<<"area of rectangle is \t"<<fun_area(l,b);
		break;
		}
		case 3:
		{
		cout<<"enter the length,breadth and height\n";
		cin>>l>>b>>h;
		cout<<"volume of box is \t"<<fun_area(l,b,h);
		break;
		}
		case 4:
		exit(0);
		default:
		cout<<"\ninvalid input\n";
	}
	
}while(ch!=4);
return 0;
}


*/




/* 5.


#include<iostream>
using namespace std;
void sum(int a,int b=10,int c=20);
void sum(int a,int b,int c)
{
	int add=a+b+c;
	cout <<"sum of a,b,c is : "<<add<<endl;
}
int main()
{
	int p,q,r;
cout<<"enter the values of p,q and r respectively\n";
cin>>p>>q>>r;
sum(p);
sum(p,q);
return 0;
}


*/	




Lab 3:


/* 1.

#include<iostream>
using namespace std;
class triangle
{
	int base,height;
	public:
		void getdata()
		{
			cout<<"\nenter value of base\t";
			cin>>base;
			cout<<"\nenter value of height\t";
			cin>>height;
		}
	areatrin()
	{ 
	cout<<"\narea is \t"<<0.5*base*height<<endl;
	}
};

int main()	
{
	triangle x1[10];
	for(int i=1;i<=10;i++)
	{
	x1[i].getdata();
	x1[i].areatrin();
	}
	return 0;
}


*/







/* 2.


#include<iostream>
#include<stdlib.h>
using namespace std;
class item
{
	int price,quantity,total;
	char name[20],code[20];
	public:
		void getdata()
		{
			cout<<"\nenter the code\t";
			cin>>code;
			cout<<"\nenter the name\t";
			cin>>name;
			cout<<"\nenter the price\t";
			cin>>price;
			cout<<"\nenter the quantity\t";
			cin>>quantity;
			total=quantity*price;
		}
		void display()
		{
		static int sr=1;
			cout<<"\t"<<sr<<"\t"<<code<<"\t"<<name<<"\t"<<price<<"\t"<<quantity<<"\t\t"<<total<<endl;
		sr++;
		}		
};



int main()	
{
	item x1[10],x2;
	for(int i=1;i<=2;i++)
	{
	x1[i].getdata();
	}
	cout<<"\tsr\tcode\tname\tprice\tquantity\ttotal\n";
	cout<<"................................................................................\n";
	for(int i=1;i<=2;i++)
	{
	x1[i].display();
	}
	x2.all();
	return 0;
}


*/





/* 3.

#include<iostream>
#include<stdlib.h>
using namespace std;
class complex
{
	float num1,num2,num3,num4;
	public:
		void getdata()
		{
			cout<<"\nenter the coefficients of 1st complex number in the form of a1+b1i\n";
			cin>>num1>>num2;
			cout<<"\nenter the coefficients of 2st complex number in the form of a2+b2i\n";
			cin>>num3>>num4;
		}
		void display(complex &a1)
		{
			float sum1=a1.num1+a1.num3;
			float sum2=a1.num2+a1.num4;
			cout<<"the sum of complex number is\t";
			cout<<sum1<<" + "<<sum2<<" i";
		}
		
};

int main()	
{
	complex x1,x2;
	x1.getdata();
	x2.display(x1);	
	return 0;
}



*/





/* 4.

#include<iostream>
#include<stdlib.h>
using namespace std;
class time
{
	public:
	
	float hour,minute,second;
	
		void getvalues(int h,int m,int s)
		{
			hour=h;
			minute=m;
			second=s;
		}
};
		time add(time t1,time t2)
		{
		time sum;
		sum.hour=t1.hour+t2.hour;
		sum.minute=t1.minute+t2.minute;
		sum.second=t1.second+t2.second;
		return sum;		
		}
int main()	
{
	int h,m,s;
	cout<<"enter hour,miunte and second for time 1\n";
	cin>>h>>m>>s;
	time t1;
	t1.getvalues(h,m,s);
	cout<<"enter hour,minute and seconds for time 2\n";
	cin>>h>>m>>s;
	time t2;
	t2.getvalues(h,m,s);
	time total=add(t1,t2);
	if(total.second>59)
	{
		int t=total.second;
		m=total.second/60;
		total.second=t%60;
		total.minute+=m;
	}
	if(total.minute>59)
	{
		int t=total.minute;
		h=total.minute/60;
		total.minute=t%60;
		total.hour+=h;
	}
	cout<<"total time is\t"<<total.hour<<" : "<<total.minute<<" : "<<total.second<<endl;
	return 0;
}



*/





/* 5.

#include<iostream>
#include<stdlib.h>
using namespace std;
class fraction
{
	public:
	
	float n,d;
	
		void getvalues(int numerator,int denominator)
		{
			n=numerator;
			d=denominator;	
		}
		void add(fraction f1,fraction f2)
		{
		fraction sum;
		sum.n=(f1.n*f2.d)+(f2.n*f1.d);
		sum.d=f1.d*f2.d;
		cout<<"result of addtion is :\t\t"<<sum.n<<"/"<<sum.d<<endl;	
		}
		void sub(fraction &f1,fraction &f2)
		{
		fraction sub;
		sub.n=(f1.n*f2.d)-(f2.n*f1.d);
		sub.d=f1.d*f2.d;
		if(sub.n==0)
		{
		cout<<"result of subtraction is :\t0";
		}
		else if(sub.d==0)
		{
		cout<<"result of subtraction is :\tinfinity";
		}
		else
		{
		cout<<"result of subtraction is :\t"<<sub.n<<"/"<<sub.d;	
		}
		}
		void multiply(fraction *f1,fraction *f2)
		{
		fraction mul;
		mul.n=f1->n*f2->n;
		mul.d=f1->d*f2->d;
		cout<<"\nresult of multiplication is :\t"<<mul.n<<"/"<<mul.d<<endl;	
		}
};
int main()	
{
	int n,d;
	cout<<"for fraction 1\n";
	cout<<"enter numerator for the 1st number\n";
	cin>>n;
	cout<<"enter denominator for the 1st number\n";
	cin>>d;
	fraction num1;
	num1.getvalues(n,d);
	cout<<"for fraction 2\n";
	cout<<"enter numerator for the 2nd number\n";
	cin>>n;
	cout<<"enter denominator for the 2nd number\n";
	cin>>d;
	fraction num2;
	num2.getvalues(n,d);
	fraction f3;
	f3.add(num1,num2);
	f3.sub(num1,num2);
	f3.multiply(&num1,&num2);
return 0;
}



*/





Lab 4:




/* 1.

#include<iostream>
using namespace std;
class rectangle
{
  float l, b;
public:
  void getdata()
  {
  	cout<<"enter the length \n";
  	cin>>l;
  	cout<<"enter the breadth\n";
  	cin>>b;
  }
  void display()
{
	cout<<"the area of rectangle through member fuction is-\t";
	cout<<l*b<<endl;
}
  friend void fun1(rectangle);
};
void fun1(rectangle a)
{
  cout << "The area of the rectangle through friend fuction is-\t ";
  cout<<a.l*a.b<<endl;
}
int main()
{
  rectangle a;
  a.getdata();
  a.display();
  fun1(a);
  return 0;
}

*/






/* 2.


#include<iostream>
using namespace std;
class rectangle
{
  
public:
	int l1, b;
  void getdata1()
  {
  	cout<<"enter the length of the rectangle \n";
  	cin>>l1;
  	cout<<"enter the breadth of the rectangle \n";
  	cin>>b;
  }
  friend void area(rectangle);
};

class square
{
public:
	int l2;
  void getdata2()
  {
  	cout<<"enter the length of the square\n";
  	cin>>l2;
  }
  friend void area(rectangle,square);
};

void area(rectangle r,square s)
{
  cout <<"The area of the rectangle is-\t ";
  cout<<r.l1*r.b<<endl;
  cout<<"the area of the square is-\t";
  cout<<s.l2*s.l2;
}
int main()
{
  rectangle r;
  square s;
  r.getdata1();
  s.getdata2();
  area(r,s);
  return 0;
}


*/






/* 3.


#include<iostream>
using namespace std;
class number1
{
  
public:
	int num1;
  void getdata1()
  {
  	cout<<"enter any number\n";
  	cin>>num1;
  }
  friend void greatest(number1);
};

class number2
{
public:
	int num2;
  void getdata2()
  {
  	cout<<"enter any number \n";
  	cin>>num2;
  }
  friend void greatest(number1,number2);
};

void greatest(number1 n1,number2 n2)
{
  cout <<"The greatest number of the two is-\t";
  if(n1.num1>n2.num2)
  cout<<n1.num1;
  else
  cout<<n2.num2;
}
int main()
{
  number1 n1;
  number2 n2;
  n1.getdata1();
  n2.getdata2();
  greatest(n1,n2);
  return 0;
}



*/






/* 4.

#include<iostream>
using namespace std;
class complex1
{
  
public:
	float a1,b1;
  void getdata1()
  {
  	cout<<"enter the coefficeint of the 1st complex number a+bi\n";
  	cin>>a1>>b1;
  }
  friend void add(complex1);
};

class complex2
{
public:
	float a2,b2;
  void getdata2()
  {
  	cout<<"enter the coefficeints of the 2nd complex number a+bi\n";
  	cin>>a2>>b2;
  }
  friend void add(complex1,complex2);
};

void add(complex1 c1,complex2 c2)
{
  cout <<"The summation of the two complex number is-\t";
  cout<<c1.a1+c2.a2<<" + "<<c1.b1+c2.b2<<" i"<<endl;
}
int main()
{
  complex1 c1;
  complex2 c2;
  c1.getdata1();
  c2.getdata2();
  add(c1,c2);
  return 0;
}


*/





/* 5.


#include<iostream>
using namespace std;
class DM
{
  
public:
	float m,cm;
  void getdata1()
  {
  	cout<<"enter the value to entered into meters\t";
  	cin>>m;
  	cout<<"enter the value to entered into centimeters\t";
  	cin>>cm;
  }
  void display()
  {
  	cout<<"the output is \t";
  	cout<<m<<"  meters  "<<cm<<"  centimeters\n";
  }
  friend void add(DM);
};

class DB
{
public:
	float ft,in;
  void getdata2()
  {
  	cout<<"enter the value to entered into feet\t";
  	cin>>ft;
  	cout<<"enter the value to entered into inches\t";
  	cin>>in;
  }
  void display()
  {
  	cout<<"the output is \t";
  	cout<<ft<<"  feet  "<<in<<"  inches\n";
  }
  friend void add(DM,DB);
};

void add(DM d1,DB d2)
{
int ch;
cout<<"\npress 1. for answer in meters and centimeters\n";
cout<<"press 2. for answer in feet and inches\n";
cin>>ch;
if(ch==1)
{
DM d;
int c=(d1.m*100+d1.cm+d2.ft*30.4+d2.in*2.54);
	if(c>100)
	{
		d.m=c/100;
		d.cm=c%100;
	}
	else
	{
		d.m=0;
		d.cm=c;
	}
d.display();
}
else
{
DB d;
int i=(d1.m*39.37+d1.cm*0.3937+d2.ft*12+d2.in);
	if(i>12)
	{
		d.ft=i/12;
		d.in=i%12;
	}
	else
	{
		d.ft=0;
		d.in=i;
	}
d.display();
}
}
int main()
{
  DM d1;
  DB d2;
  d1.getdata1();
  d2.getdata2();
  add(d1,d2);
  return 0;
}


*/




Lab 5:
	
	

/* 1.


#include<iostream>
using namespace std;
class complex
{
	int r,i;
public:
	complex ()
	{
		cout<<"enter rearl and imaginary part";
		cin>>r>>i;
	}
	void sum(complex b)
	{
		cout<<"the sum is "<<this->r+b.r<<"+i"<<this->i+b.i<<endl;
	}
};
int main()
{
	complex a,b;
	a.sum(b);
	return 0; 
}


*/



/* 2.


#include<bits/stdc++.h> 
using namespace std; 

class Complex

{

int real,imag;

public:

   Complex()                         //Default Constructor.

   {
      real=imag=0;
   }

   Complex(int r)                // Parameterised constructor for equal values.

   {

   real=r;

   imag=r;

   }

   Complex(int r,int i)       // Parameterised constructor for different values.

   {

   real=r;

   imag=i;

   }
   void print()

   {

   cout<<"\n The sum of two complex nos. is "<<real<<"+"<<imag<<"i.";

   }

   friend Complex sum(Complex,Complex);     //Declaration of friend function.

};

Complex sum(Complex obj1,Complex obj2)

{

Complex obj3;

 obj3.real=obj1.real+obj2.real;

 obj3.imag=obj1.imag+obj2.imag;

 return obj3;

}

int main()
{

 int a,b,c;

 Complex c1;                      //Calling default constructor.



 cout<<"\n\t\tPROGAM TO PERFORM ADDITION OF TWO COMPLEX NUMBERS USING CONSTRUCTOR OVERLOADING\t\t\n";



 cout<<"\n\t\tFor equal values :\t";

 cout<<"\n\tEnter the equal value of real and imaginary part of number 1:\n\t";

 cin>>a;

 Complex c2(a);                //Calling parameterised constructor for equal values.



 cout<<"\n\t\tFor different values :\t";

 cout<<"\n\tEnter the real and imaginary part of number 2:\n\t";

 cin>>b>>c;

 Complex c3(b,c);                         //Calling parameterised constructor for different values.



 Complex c4=sum(c2,c3);          //Calling copy constructor.

 c4.print();
 return 0;

 }


*/


/* 3.


#include <iostream>
using namespace std;
class Distance
{
        private:
                int feet;
                float inch;
        public:
        Distance();
        Distance(int a,float b);
        void setDistance();
        int getFeet();
        float getInch();
        void distanceSum(Distance d);
};
int main()
{
        Distance D1,D2;
        D1.setDistance();
        D2.setDistance();
        D1.distanceSum(D2);
        return 0;
}

//Function Definitions

Distance::Distance()
{
        inch=feet=0;
}
Distance::Distance(int a,float b)
{
        feet=a;
        inch=b; 
}
void Distance::setDistance()
{
        cout<<"Enter distance in feet";
        cin>>feet;
        cout<<endl<<"Enter inches:";
        cin>>inch;
}
int Distance::getFeet()
{
        return feet;
}
float Distance::getInch()
{
        return inch;
}
void Distance::distanceSum(Distance d)
{
        cout<<"feet="<<d.feet+feet<<endl;
        cout<<"inches="<<d.inch+inch<<endl;
}


*/



/* 4.


#include<iostream>
using namespace std;
class time
{
	int hr,min,sec;
	public:
		void get()
		{
			cin>>hr>>min>>sec;
		}
		void disp()
		{
			cout<<hr<<":"<<min<<":"<<sec;
			
		}
		void sum(time,time);
};
void time::sum(time t1,time t2)
{
	sec=t1.sec+t2.sec;
	min=sec/60;
	sec=sec%60;
	min=min+t1.min+t2.min;
	hr=min/60;
	min=min%60;
	hr=hr+t1.hr+t2.hr;
}
int main()
{
	time t1,t2,t3;
	cout<<"Enter 1st time:";
	t1.get();
	cout<<"Enter 2nd time:";
	t2.get();
	cout<<"The 1st time is";
	t1.disp();
	cout<<"\nThe 2nd time is";
	t2.disp();
	t3.sum(t1,t2);
	cout<<"\nThe resultant time is";
	t3.disp();
	
}

*/



/* 5.


#include <iostream>  
  
using namespace std;  
  
class Demo  
{  
    int a;  
    int b;  
    int *p;  
    public:  
    Demo()  
    {  
        p=new int;  
    }  
    void setdata(int x,int y,int z)  
    {  
        a=x;  
        b=y;  
        *p=z;  
    }  
    void showdata()  
    {  
        std::cout << "value of a is : " <<a<< std::endl;  
        std::cout << "value of b is : " <<b<< std::endl;  
        std::cout << "value of *p is : " <<*p<< std::endl;  
    }  
};  
int main()  
{  
  Demo d1;  
  d1.setdata(4,5,7);  
  Demo d2 = d1;  
  d2.showdata();  
    return 0;  
}

*/



/* 6.


// C++ Program to concatenate two string 
// using unary operator overloading 
#include <iostream> 
#include <string.h> 
  
using namespace std; 
  
// Class to implement operator overloading 
// function for concatenating the strings 
class AddString { 
  
public: 
    // Classes object of string 
    char s1[25], s2[25]; 
  
    // Parametrized Constructor 
    AddString(char str1[], char str2[]) 
    { 
        // Initialize the string to class object 
        strcpy(this->s1, str1); 
        strcpy(this->s2, str2); 
    } 
  
    // Overload Operator+ to concat the string 
    void operator+() 
    { 
        cout << "\nConcatenation: " << strcat(s1, s2); 
    } 
}; 
  
// Driver Code 
int main() 
{ 
    // Declaring two strings 
    char str1[] = "Manali"; 
    char str2[] = "Dasgupta"; 
  
    // Declaring and initializing the class 
    // with above two strings 
    AddString a1(str1, str2); 
  
    // Call operator function 
    +a1; 
    return 0; 
}

*/




