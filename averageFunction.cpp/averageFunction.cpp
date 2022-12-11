#include <iostream>
using namespace std;

int avg(int sum, int num)
{
int avg;
avg=sum/num;
return avg;
}

int main()
{
    int num,marks;
    float n[7], sum=0.0;

    cout<<"Enter the number of marks";
    cin>>num;

    while(num>7)
    {
        cout<<"There are 7 students' marks. Enter number of marks again. ";
        cin>>num;
    }

    for (int num =0; num<7; num++)
    {
    cout<<"Enter students marks: ";
    cin>>n[marks];
    sum+=n[marks];
    }

cout<<"The average of the marks is "<<avg<<endl;
}
