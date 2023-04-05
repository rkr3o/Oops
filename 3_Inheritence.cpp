#include <bits/stdc++.h>
using namespace std;

class AbstartForCars
{
    virtual void carService() = 0;
};

class Cars : AbstartForCars
{
private:
    int Price, Milage;
    string Name;

public:
    Cars(int price, int milage, string name)
    {
        Name = name;
        Milage = milage;
        Price = price;
    }

    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setPrice(int price)
    {
        Price = price;
    }
    int getPrice()
    {
        return Price;
    }
    void setMilage(int milage)
    {
        Milage = milage;
    }
    int getMilage()
    {
        return Milage;
    }

    void getDetails()
    {
        cout << Name << " " << Milage << " " << Price << endl;
    }
    void carService()
    {
        if (Milage < 16)
        {
            cout << "Servicing is required";
        }
        else
        {
            cout << "Servicing is not required";
        }
    }
    virtual void work()
    {
        cout << getName() << " "
             << "gives milage of " << getMilage() << endl;
    }
};

class Developer : public Cars
{
public:
    string FavouriteCar;

    Developer(int price, int milage, string name, string favcar)
        : Cars(price, milage, name)
    {
        FavouriteCar = favcar;
    }

    void racing()
    {
        cout << getName() << " "
             << "is going to buy his " << FavouriteCar << " at price of " << getPrice() << " Whose milage is " << getMilage() << endl;
    }
    void work()
    {
        cout << getName() << " "
             << "favoutite car is  " << FavouriteCar << endl;
    }
};
class Teacher : public Cars
{
public:
    string FavouriteColor;

    Teacher(int price, int milage, string name, string col) : Cars(price, milage, name)
    {
        FavouriteColor = col;
    }
    void favcol()
    {
        cout << getName() << " "
             << " favourite color is " << FavouriteColor << endl;
    }
    void work()
    {
        cout << getName() << " "
             << "favoutite color is  " << FavouriteColor << endl;
    }
};
int main()
{
    Developer d = Developer(45354, 11, "Ravi", "BMW");
    d.racing();
    d.carService();
    cout << endl;
    Teacher t = Teacher(84893, 18, "Jack", "Yellow");
    t.favcol();
    t.carService();
    cout << endl;cout << endl;cout << endl;
    Cars *c1 = &d;
    Cars *c2 = &t;

    c1->work();
    c2->work();
}