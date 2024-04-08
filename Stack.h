#include "LinkedList.h"
#include <iostream>
using namespace std;

//1. ���ø� Ŭ������ Ȯ���ؾ���
//2. Stack�������� Delete �Լ� �������ؾ���
//����: first, current_size�� class�� ��� �����̱� ������ this �����͸� ����Ͽ� �����;���

//LinkedList class�� ��ӹ���
template <typename T>
class Stack : public LinkedList<T> {
public:
	bool Delete(T& element) {
		//first�� 0�̸� false��ȯ
		if (this->first == NULL) {
			return false;
		}
		// LinkedList�� �޸� Stack�� current�� ����Ű�� ���� ����
		Node<T>* temp=this->first;
		this->first = temp->link;
		element = temp->data;
		delete temp;
		this->current_size -= 1;
		return true;
	}
};
