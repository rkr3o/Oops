#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee {
	// going to serve a contract
	virtual void askForPromotion() = 0;
};

class Employee : AbstractEmployee {

private:
	string Name;
	string Company;
	int Age;
public :

	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return  Name;
	}

	void setComapny(string companyName)
	{
		Company = companyName;
	}
	string getCompany()
	{
		return Company;
	}

	void setAge(int empAge)
	{
		Age = empAge;
	}
	int getAge()
	{
		return Age;
	}

	Employee(string name , string company , int age)
	{
		Name = name ;
		Company = company;
		Age = age;
	}

	void IntroduceYourself()
	{
		cout << "Name - " << Name << endl;
		cout << "Company - " << Company << endl;
		cout << "Age - " << Age << endl;
	}

	void askForPromotion()
	{
		if (Age > 30)
		{
			cout << Name << " got promoted" << endl;
		}
		else
		{
			cout << Name << " Sorry no promotion for you" << endl;
		}
	}
};
class Developer: Employee {
public:
	string FavProgrammingLanguage;
	Developer(string name , string company , int age, string language) {}
};
int main()
{
	Employee emp1 = Employee("RAVI", "YT", 25);
	Employee emp2 = Employee("Vikash", "YT", 35);
	Employee emp3 = Employee("Manish", "YT", 55);

	Developer d;



}
