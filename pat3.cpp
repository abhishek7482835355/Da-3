#include<iostream>
using namespace std;

class car
{
    int year;
    string name;
    int mileage;
    
public:
    car(int a, int b, string c)
    {
        year = a;
        name = c;
        mileage = b;
    }
    
    string getName()
    {
        return name;
    }
};

int main(void)
{
    car c1(1996, 25, "Ford");
    car c2(1997, 30, "Hyundai");
    car c3(1998, 29, "Ferrari");
    car c4(1998, 34, "Coolcar");
    car c5(2013, 70, "Tesla");
    
    int n;
    cout << "Enter the number of models to print out: ";
    cin >> n;
    
    car cars[] = {c1, c2, c3, c4, c5};
    
    if (n >= 1 && n <= 5)
    {
        cout << "Printing " << n << " models:\n";
        
        for (int i = 0; i < n; i++)
        {
            cout << "Name: " << cars[i].getName() << endl;
            cout << "Model: " << cars[i].getName() << endl;
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid input! Please enter a number between 1 and 5." << endl;
    }
    
    return 0;
}
