#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    ifstream score;
    score.open("score.txt");
    string a;
    double b=0,c=0;
    int i=0;
    while(getline(score,a))
    {
        b+=stod(a);
        i++;
    }
    score.close();
    score.open("score.txt");
    while(getline(score,a))
    {
        c+=pow(stod(a)-(b/i),2);
    }
    score.close();
    cout<<"Number of data = "<<i<<endl;
    cout<<setprecision(3);
    cout<<"Mean = "<<b/i<<endl;
    cout<<setprecision(3);
    cout<<"Standard deviation = "<<sqrt(c/i);
    return 0;
}