// Vector <double> Example
// by Colby Laramore

#include <iostream>
#include <string>
#include <vector>
using namespace std;

double sum;

int main()
{
    double d1 = 100.50;
    double d2 = 284.58;
    double d3 = 500.14;
    double d4 = 99.47;
    double d5 = 673.00;
    double d6 = 900.01;
    double d7 = 444.50;
    double d8 = 88.00;
    double d9 = 310.42;
    double d10 = 410.10;
    
    
    vector<double> dailyProfitObject;
    
    dailyProfitObject.push_back(d1);
    dailyProfitObject.push_back(d2);
    dailyProfitObject.push_back(d3);
    dailyProfitObject.push_back(d4);
    dailyProfitObject.push_back(d5);
    dailyProfitObject.push_back(d6);
    dailyProfitObject.push_back(d7);
    dailyProfitObject.push_back(d8);
    dailyProfitObject.push_back(d9);
    dailyProfitObject.push_back(d10);
    
    cout << "Vector <double> Example" << endl;
    cout << "by Colby Laramore" << endl;
    cout << endl;
    
    for(int i = 0; i < dailyProfitObject.size(); i++)
    {
        cout << "The daily profit for day " << i + 1 << " is " << dailyProfitObject[i] << endl;
    }
    
    for(int i = 0; i < dailyProfitObject.size(); i++)
    {
        sum = sum + dailyProfitObject[i];
        
    }
    
    cout << endl;
    cout << "The sum of all the double vector objects in the array is " << sum << endl;

    
}
