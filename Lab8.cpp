// Lab 8 Solutions
// 2) 3D distance between two points

#include<iostream>
#include<cmath>
#include<iomanip>
struct Point
{
float x,y, z;
};

float Distance(Point p,Point q)
{
    return sqrt(pow(p.x - q.x,2)+pow(p.y - q.y,2) + pow(p.z - q.z,2));

}
int main()
{
Point p1,p2;

std::cout<< "Enter the first point coordinates: ";
std::cin>>p1.x>>p1.y>>p1.z;
std::cout<< "Enter the second point coordinates: ";
std::cin>>p2.x>>p2.y>>p2.z;

std::cout<<std::fixed<<std::setprecision(2);
std::cout<<Distance(p1,p2)<<std::endl;
}

// 3) Employee Structure ...

#include<iostream>
using namespace std;
struct Employee
{
    string name;
    char gender;
    float salary;
};

int main()
{
Employee emp[50];
Employee temp;//
int  count_male=0,count_female=0;
int n;
float female_ratio;
cout<<"Enter the total number Employees: ";
cin>>n;

for(int i=0;i<=n-1;i++)
{
cout<<"Enter the name, gender and salary of Employee "<<i+1<<"/"<<n<<endl;
cin>>emp[i].name>>emp[i].gender>>emp[i].salary;
}
for(int i=0;i<=n-2;i++)
{
    for(int j=i+1;j<=n-1;j++)
    {
        if(emp[i].salary<emp[j].salary)
        {
            temp=emp[i];
            emp[i] =emp[j];
            emp[j]=temp;
        }
    }
}
cout<<"List of Male Employees: \n";
for(int i=0;i<=n-1;i++)
{
    if(emp[i].gender=='M')
    {
        cout<<emp[i].name<<"\t"<<emp[i].gender<<"\t"<<emp[i].salary<<endl;
        count_male++;
    }
}

cout<<"List of Female Employees:\n";
for(int i=0;i<=n-1;i++)
{
    if(emp[i].gender=='F')
    {
        cout<<emp[i].name<<"\t"<<emp[i].gender<<"\t"<<emp[i].salary<<endl;
        count_female++;
    }
}

female_ratio = (float)count_female/(count_male+count_female);
cout<<"The percentage of female employees is "<<female_ratio*100<<endl;
}
