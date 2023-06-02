// Lab7: Solutions
// 1) pointer to pointers

#include<iostream>
using  namespace std;
int main()
{

  char ch ='A';
  char *p=&ch;
  char **q=&p;
  char ***r =&q;
  cout<<"ch = "<<ch<<endl;
  cout<<"using p---> "<<*p<<endl;
  cout<<"using q---> "<<**q<<endl;
  cout<<"using r---> "<<***r<<endl;

}

// problem 2. Returning address of a local variable  local varible is wrong!
// // Possible use case
#include<iostream>
using  namespace std;

float * foo(float x, float y,float* z)
{
  *z =x+y; 
  return z;

}
int main()
{
  float x = 4;
  float y =6; 
  float z;
  cout<<*foo(x,y,&z);
  }


// 2) Smaller of two numbers
#include<iostream>
using  namespace std;
int *smaller(int*x ,int*y);
int main()
{

int a,b;
cout<<"Enter two numbers: ";
cin>>a>>b;
int* s=smaller(&a,&b);
cout<<"smaller = "<<*s<<endl;
}
int *smaller(int*x ,int*y)
{

    return (*x < *y ? x: y);
}

//3)Find Sum Using Dynamic Memory Allocation

#include<iostream>

using namespace std;
int main()
{
int sum=0, N;
  cout<<"Enter array size : ";
  cin>>N;
 
  int *a = new int[N]; // memory allocation
  cout<<"\nEnter "<<N<<" integer numbers"<<endl;
  for(int i=0; i<N; i++)
     cin>>*(a+i); //a[i]
 
  cout<<"Input array is.."<<endl;
  for(int i=0; i<N; i++)
   {
    cout<<a[i]<<endl;
    sum = sum + a[i]; // sum += a[i];
   }
   cout<<"Total Sum: "<<sum;
 
   delete [] a; //releases memory
    a =nullptr;
}
 
