#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int count = 0 ;
    double X = 0 ;
    double X2 = 0;
    string textline ;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        X += atof(textline.c_str());
        X2 += pow(atof(textline.c_str()),2) ;
        count++;
    }
    cout << setprecision(3);
    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << X/count << "\n";
    double G1 = (X2/count);
    double G2 = pow(X/count,2);
    double sum = sqrt(G1-G2);
    cout << "Standard deviation = " << sum ;
}
