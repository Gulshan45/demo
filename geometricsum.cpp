#include<iostream>
using namespace std;
double gs(int k) {
     double sum=1.00;
     double p=1.0;
     if(k==0.00)
     {
     return 1.00;
     }
    double sa=gs(k-1);
    double r = 0.50;
    int i=0;
    while(i<k)
    {
      p = p * r;
      i++;
    }
    sum = p + sa;
     return sum;
}

int main()
{
    double n;
    cin>>n;
    double out = gs(n);
    cout<< out << endl;
}