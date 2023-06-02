//Lab12: Solutions
#include<iostream>
#include<vector> // to use vector class STL
#include<fstream> //  to open and read text file
#include<iomanip> // for output  formatting ---setw()
#include<string> //  to use  strings class STL and string to float type conversion --->stof()
#include<algorithm> // to use sort
#include<numeric> // to use accumulate --> sum()

using namespace std;

int main()
{
    string id, midExam,finalExam;
    float total, avg;
    vector<float>test;
    fstream result ("score.txt");
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<setw(13)<<"ID"<<setw(13)<<"Mid Exam"<<setw(13)<<"Final Exam"<<setw(13) <<"Total"<<setw(13)<<"Average"<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    while(!result.eof())
    {
        result>>id>>midExam>>finalExam;
        total=stof(midExam) + stof(finalExam);
        avg = (stof(midExam) + stof(finalExam))/2;
        test.push_back(avg);
        cout<<setw(13)<<id<<setw(13)<<midExam<<setw(13)<<finalExam<<setw(13)<<total<<setw(13)<<avg<<endl;
    }
    cout<<"================================================================================="<<endl;

    vector<float>::iterator it;
    float min_Score = *min_element(test.begin(),test.end()); // get min
    float max_Score = *max_element(test.begin(),test.end()); //get max
    float avg_Score = (accumulate(test.begin(),test.end(),0))/test.size(); //average score

    cout<<setw(65)<<"Average Score = " <<avg_Score<<endl;
    cout<<setw(65)<<"minimum Score = " <<min_Score<<endl;
    cout<<setw(65)<<"maximum Score = " <<max_Score<<endl;
   cout<<"================================================================================="<<endl;
    sort(test.begin(),test.end(),greater()); //sort average scores

    cout<<"Sorted Average Score of students in descending order:"<<endl;
    for(auto i : test)
    {
            cout <<i<<" ";
    }

}
