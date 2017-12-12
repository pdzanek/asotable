#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
class Employee{
private:
	string name;
	string position;
	unsigned int age;
public:
	Employee(string, string, unsigned int);
	~Employee();
};

Employee::Employee (string m_name, string m_position, unsigned int m_age)
{
	name=m_name;
	position=m_position;
	age=m_age;
};
Employee::~Employee(){};

/*cout<<name<<endl;
	cout<<position<<endl;
	cout<<age<<endl;*/

#endif
