#include "ListPhanSo.h"

ListPhanSo::ListPhanSo(int size)
{
	this->size = size;
	this->data = new PhanSo[this->size];
}


ListPhanSo::~ListPhanSo()
{
}

PhanSo& ListPhanSo::operator[](const int &i)
{
	try{
		return *(this->data + i);
	}
	catch(exception ex)
	{
		cout << "Nhap sai vi tri roi";
	}
}

istream &operator>>(istream &i, ListPhanSo &list)
{
	cout << "Nhap so luong can nhap" << endl;
	cin >> list.size;
	PhanSo ps;
	list.data = new PhanSo[list.size];
	for (int i = 0; i < list.size; i++)
	{
		cout << "Nhap phan so " << (i + 1) << endl;
		cin >> ps;
		list.data[i] = ps;
	}
	return cin;
}

ostream &operator<<(ostream &o, ListPhanSo &list)
{
	if (list.size == 0)
	{
		cout << "Khong tim thay" << endl;
		return cout;
	}

	for (int i = 0; i < list.size; i++)
	{
		cout << list[i] << endl;
	}

	return cout;
}
