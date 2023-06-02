/*
----------------------------------------------------------------------------------------------
*** Problem : 2D Array
--------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;
const int ROW =3; // row size of the table
const int COL = 5; //column size of the table
//Function that displays the elements of 2D array on screen
void display2DArray(int data[][COL],int row_size)
{
    cout<<"2D Array elements:"<<endl;
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<COL;j++)
        {
            cout<<data[i][j]<<" ";
        }

        cout<<endl;
    }

}
// Average function to compute the average of 2D array elements
void Average(int data[][COL],int row_size)
{
    float sum {};
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<COL;j++)
        {
            sum+=data[i][j];
        }
    }
   // note that the total elements of the 2D array (table) = row size  *col size
    cout<<"Average = "<<sum/(ROW*COL)<<endl;

}

int main()
{
//initializing 2D Array table
    int table [][COL] = {
                         {12,24,32,21,42},
                         {14,67,87,65,90},
                         {19,1,24,12,8}
                       };
     //calling function Display2DArray                
    display2DArray(table,ROW);
    //calling function Average  
    Average(table,ROW);
}