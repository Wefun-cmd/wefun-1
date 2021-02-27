//#include<iostream>
//using namespace std;
////栈区数据注意事项---不要返回局部变量的地址。
//int* func()
//{
//	//int a = 10;//局部变量，存放在栈区,栈区的数据在函数执行完后自动释放
//	//return &a;
//	int* p = new int(10);//在堆区开辟数据
//	return p;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	delete p;
//	int* arr = new int[10];
//	delete[] arr;
//	cout << *p << endl;//内存已经被释放
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int &b = a;
//	int c = 10;
//	//int &b = c;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	b = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	system("pause");
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
//const double PI = 3.14;
//class circle
//{
//	//访问权限
//public:
//	//属性
//	//半径
//	int m_r;
//	//行为
//	//获取圆的周长
//	double calculate()
//	{
//		return 2 * PI * m_r;
//	}
//};
class student
{
public:
	string m_name;
	int m_id;

public:
	void rename(string name)
	{
		m_name = name;
	}
	void resetid(int id)
	{
		m_id = id;
	}
	void show()
	{
		cout << "学生的姓名是：" << m_name << "\t" << "id是：" <<m_id<< endl;
	}

};
int main()
{
	//通过圆类创建一个具体的圆
	/*circle c1;
	c1.m_r = 10;
	cout << "圆的周长是：" << c1.calculate() << endl;*/
	student stu;
	stu.m_id = 250;
	stu.m_name = "lucas";
	stu.show();
	system("pause");
	return 0;
}