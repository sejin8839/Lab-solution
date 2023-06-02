// 2) Create Employee Class

// Part 1

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
class Employee
{
    private:
        string lastName;
        double hourlyPayRate;
        int hours_worked;
    public:
        Employee()
        {
            lastName = "";
            hourlyPayRate = 0.0;
            hours_worked = 0.0;
        }
        Employee(string empName, double payRate, int hrs)

        {
            lastName = empName;
            hourlyPayRate = payRate;
            hours_worked = hrs;
        }

        void setName(string empName)

        {
            lastName=empName;
        }
        void setHourlyPayRate(double payRate)

        {
            hourlyPayRate=payRate;
        }

        void setHours_worked(double hrs)

        {
            hours_worked=hrs;
        }

        string getName()

        {
            return lastName;

        }

        double getHours_Worked()

        {
            return hours_worked;

        }

        double gethourlyPayRate()

        {
            return hourlyPayRate;
        }
        double totalPay()
        {
            return hourlyPayRate*hours_worked;

        }

};
int main()
{
// class instance(object) creation
// option 1
// Employee emp[4]{{"Ackson",10,40},{"Rodriguez",13.5,35},{"Chang",12,37},{"Demos",19.5,45}};
// option 2
// Employee emp[4];
// string name;
// double pay, hrs;
// for (int i=0;i<4;++i)
// {
//     cout<<"Please enter payment info. for Employee #"<<i<<" : ";
//     cin>>name>>pay>>hrs;
//     emp[i].setName(name);
//     emp[i].setHourlyPayRate(pay);
//     emp[i].setHours_worked(hrs);
// }
// Option 3
    Employee emp[4]{
                Employee("Ackson",10,40),
                Employee("Rodriguez",13.5,35),
                Employee("Chang",12,37),
                Employee("Demos",19.5,45)
                };
    cout<<"-----------------------------------------------------"<<endl;
    cout<<setw(10)<<"Employee Name"<<setw(15)<<"Gross Pay"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    for (int i=0;i<4;i++)
    {
        cout<<left<<setw(10)<<emp[i].getName()<<setw(15)<<right<<"$"<<emp[i].totalPay()<<endl;
    }
}
