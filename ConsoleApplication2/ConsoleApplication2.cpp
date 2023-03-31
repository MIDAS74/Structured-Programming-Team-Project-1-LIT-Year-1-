
#include <iostream>
#include <iomanip>

int propertyTax(int value);
int NumDays(int days, int months);
int ListTotal(int list[], int size);
void ShowSquare(int size);

double GetAverage(const int list[], int size);
int GetSmallest(const int list[], int size);
void ScaleUp(int list[], int size);

int main()
{
    int num1[5], num2;

    std::cout << "Please enter 5 values for an array\n";
    std::cin >> num1[0] >> num1[1] >> num1[2] >> num1[3] >> num1[4];
    num2 = 5;
    ScaleUp(num1, num2);

    //std::cin >> num1;
    //ShowSquare(num1);

    /*std::cout << "please enter two numbers \n";
    std::cin >> num1 >> num2;
    std::cout << num1;
    std::cout << NumDays(num1, num2) << std::endl;*/

    //int list[5], size;
    //std::cout << "please enter 5 numbers \n";
    //std::cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4];
    //size = 5;
}

int propertyTax(double value) 
{
    double rate = 0; // 0 is only for the example, it'd be some decimal like 0.1 (10% rate) or 0.05 (5% rate)
    return value * rate;
}

int NumDays(int date1, int date2)
{
    //assuming input in the form of DDMM for each input
    int months1, months2;
    months1 = date1 % 100; // strip first two digits
    months1 *= 30; //assuming all months are 30 days long

    months2 = date2 % 100;
    months2 *= 30; 

    int days1, days2;
    days1 = date1 / 100; // strip second two digits
    days1 += months1;
    
    days2 = date1 / 100;
    days2 += months2;
    
    if (days1 > days2)
    {
        return days1 - days2;
    }
    else
    {
        return days2 - days1;
    }
}

int ListTotal(int list[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += list[i];
    }
    return total;
}

void ShowSquare(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout <<" #";
        }
        
        std::cout << std::endl;
    }
}

double GetAverage(const int list[], int size) 
{
    int total = 0;
    double average;
    for (int i = 0; i < size; i++)
    {
        total += list[i];
    }
    average = (double)total / size;
    return average;
}

int GetSmallest(const int list[], int size)
{
    int smallest = 999;
    for (int i = 0; i < size; i++)
    {
        if (list[i] < smallest)
        {
            smallest = list[i];
        }
    }
    return smallest;
}

void ScaleUp(int list[], int size)
{
    int scalar;
    std::cout << "\n\n please enter a scale up factor : \n\n";
    std::cin >> scalar;
    for (int i = 0; i < size; i++)
    {
        list[i] *= scalar;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << " " << list[i];
    }
}