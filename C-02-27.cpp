//#include<iostream>
//using namespace std;
////ջ������ע������---��Ҫ���ؾֲ������ĵ�ַ��
//int* func()
//{
//	//int a = 10;//�ֲ������������ջ��,ջ���������ں���ִ������Զ��ͷ�
//	//return &a;
//	int* p = new int(10);//�ڶ�����������
//	return p;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	delete p;
//	int* arr = new int[10];
//	delete[] arr;
//	cout << *p << endl;//�ڴ��Ѿ����ͷ�
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
//	//����Ȩ��
//public:
//	//����
//	//�뾶
//	int m_r;
//	//��Ϊ
//	//��ȡԲ���ܳ�
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
		cout << "ѧ���������ǣ�" << m_name << "\t" << "id�ǣ�" <<m_id<< endl;
	}

};
int main()
{
	//ͨ��Բ�ഴ��һ�������Բ
	/*circle c1;
	c1.m_r = 10;
	cout << "Բ���ܳ��ǣ�" << c1.calculate() << endl;*/
	student stu;
	stu.m_id = 250;
	stu.m_name = "lucas";
	stu.show();
	system("pause");
	return 0;
}