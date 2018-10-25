#include"PhanSo.h"

class ListPhanSo
{
private :
	PhanSo* data;
	int size;
public:
	ListPhanSo(int=0);
	~ListPhanSo();
	friend istream &operator>>(istream &, ListPhanSo &);
	friend ostream &operator<<(ostream &, ListPhanSo &);
	PhanSo& operator[](const int&);
	int getSize()
	{
		return this->size;
	};

	PhanSo* getData()
	{
		return this->data;
	}
};

