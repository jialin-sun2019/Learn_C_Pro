#include<iostream>
#include<string>
using namespace std;

class Person;  //声明
Person* person1 = 0; //空指针
Person* person2 = 0;
Person* person3 = 0;

class Person {
public:
	Person(int i)
	{
		this->short_name = i;

		if (this->short_name == 1)
		{
			person1 = this;
		}
		if (this->short_name == 2)
		{
			person2 = this;
		}
		if (this->short_name == 3)
		{
			person3 = this;
		}
	}
	void show()
	{
		cout << "当前的函数是 ：" << this->short_name << endl;
	}
	void show_other()
	{
		cout << "可以通过类空指针直接访问该函数" << endl;
	}
protected:
	int short_name;
};
void ALL_Test()
{
	Person p1(1);
	Person p2(2);
	Person p3(3);
	
	p1.show();
	person1->show();

	p2.show();
	person2->show();

	p3.show();
	person3->show();

	person1->show_other();
	person2->show_other();
	person3->show_other();
}

int main()
{
	ALL_Test();
	system("pause");
	return 0;
}
