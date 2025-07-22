#include<iostream>
using namespace std;
int main()
{
    int item;
    double cost_per_item;
    double total_cost;
    char currency = '$';
    cout << "Enter number of item:" << endl;
    cin >> item;
    cout << "Enter cost per item:" << endl;
    cin >> cost_per_item;
    total_cost = item * cost_per_item;
    cout << "Total cost:" <<  total_cost << currency << endl;
    return 0;
    
}