#include<iostream>
using namespace std;

class PhanSo
{
private:
	int TuSo;
	int MauSo;
public:
	PhanSo(int=0,int=0);
	//~PhanSo();
	void SetTuSo(const int&);
	int& GetTuSo();
	void SetMauSo(const int&);
	int& GetMauSo();
	float GetValue();
	PhanSo operator+(const PhanSo&);
	PhanSo operator-(const PhanSo&);
	PhanSo operator*(const PhanSo&);
	PhanSo operator/(const PhanSo&);
	PhanSo operator%(const PhanSo&);
	PhanSo& operator+=(const PhanSo&);
	PhanSo& operator-=(const PhanSo&);
	PhanSo& operator=(const PhanSo&);
	PhanSo& operator/=(const PhanSo&);
	PhanSo& operator%=(const PhanSo&);
	bool operator==(const PhanSo&);
	bool operator!=(const PhanSo&);
	bool operator<(const PhanSo&);
	bool operator<=(const PhanSo&);
	bool operator>(const PhanSo&);
	bool operator>=(const PhanSo&);
	PhanSo& operator++(); 
	const PhanSo operator++(int);
	PhanSo& operator--(); 
	const PhanSo operator--(int);
	//Gán giá trị mới cho tử và mẫu
	PhanSo& operator()(const int &, const int &);
	//Trả về true khi 1 trong 2 phân số  > 0
	bool operator||(PhanSo &);
	//Trả về true khi cả 2 phân số  > 0
	bool operator&&(PhanSo &);
	PhanSo& operator->();
	void * operator new(size_t  size);
	void operator delete(void *ps);
	PhanSo operator<<(int);
	PhanSo operator>>(int);
	PhanSo& operator<<=(int);
	PhanSo& operator>>=(int);
	PhanSo* operator&();
	PhanSo& operator~();
	PhanSo operator&(PhanSo &);
	PhanSo& operator&=(PhanSo &);
	PhanSo operator|(PhanSo &);
	PhanSo& operator|=(PhanSo &);
	PhanSo operator^(PhanSo &);
	PhanSo& operator^=(PhanSo &);

	PhanSo RutGon();
	void ConverToBinary(int, int *, int &);
	int ConverToDecimal(int *, int &);
	void Helper(int, int, int *, int *, int *, int& , int&, void(*compare)(const int &, const int &, int &));
	friend ostream &operator<<(ostream &, PhanSo &);
	friend istream &operator>>(istream &, PhanSo &);
};

