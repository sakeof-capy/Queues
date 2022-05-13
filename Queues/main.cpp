#include "ArrayDeque.h"
#include "ListDeque.h"
#include "UnboundedDeque.h"
#include "BoundedPQ.h"
#include "UnboundedPQ.h"
#include "PeekBackArrayDeque.h"
#include "PeekBackListDeque.h"
#include "PeekBackUnboundedDeque.h"
#include "PeekBackBoundedPQ.h"
#include "PeekBackUnboundedPQ.h"
#include <iostream>
using namespace exam;
using std::cout;
using std::endl;

//#############################################################################
//					��ᒺ����-��������� ��������������					   
//												
//		������������� �������� ��� �������� 2 ����� ���������� �����������
//		������������� ������������ �����-����������� ��������
//		�������� �������� 2021-22 ���������� ��
//
//	5.  ��������� ��������� ������������ ���� Deque.
//	6.	��������� ��������� ������������ ����� �� ��� ������.
//	7.	��������� ��������� �������� ������������ ����� �� ��� ������.
//	8.	��������� ��������� ���������� ������������ ����� �� ��� ������.
//	9.	������������� � ���������� ���������� ����� : 
//		���������� �� ������ � ���� �������, � ������� � �������� ����������.
//
//	10*.������������� � ���������� ������� ���� � �����������, 
//		������� �� ���� � �������� ����.
// 
// project : Queues, developed by Ruslan Zymovets (SE-1)
//#############################################################################

void testDeque(IDeque<int>& d)
{
	cout << typeid(d).name() << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << d << endl;
		d.put_front(i);
	}

	cout << d << endl;

	while (!d.empty())
	{
		d.pop_front();
		cout << d << endl;
	}

	cout << "----------------------------------------------------" << endl;
}

int main(void)
{
	ArrayDeque<5, int> ad;
	UnboundedDeque<int> d;
	/*testDeque(ad);
	testDeque(ud);*/

	
	cout << typeid(d).name() << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << d << endl;
		d.put_front(i);
		d.put_back(i);
	}

	cout << d << endl;

	while (!d.empty())
	{
		d.pop_front();
		cout << d << endl;
	}

	cout << "----------------------------------------------------" << endl;
	return 0;
}