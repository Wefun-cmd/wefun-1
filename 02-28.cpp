#include<iostream>
#include<string>
using namespace std;
//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��
class cube
{
public:
	void setm_l(int m_l)
	{
		m_l = 1;
	}
	int getm_l(int m_l)
	{
		return m_l;
	}
	void setm_h(int m_h)
	{
		m_h = 1;
	}
	int getm_h(int m_h)
	{
		return m_h;
	}
	void setm_w(int m_w)
	{
		m_w = 1;
	}
	int getm_w(int m_w)
	{
		return m_w;
	}
	int calculates(int m_l, int m_h, int m_w)
	{
		return 2 * (m_l * m_h + m_l * m_w + m_h * m_w);
	}
	int calcalutev()
	{
		return m_l * m_h * m_w;
	}
private:
	int m_l;
	int m_h;
	int m_w;

};
int main()
{
	cube c1;
	c1.setm_h(1);
	c1.setm_l(2);
	c1.setm_w(3);
	cout << c1.calcalutev() << endl;
	system("pause");
	return 0;
}