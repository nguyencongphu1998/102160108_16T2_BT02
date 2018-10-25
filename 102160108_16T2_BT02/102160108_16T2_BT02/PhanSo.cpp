#include "PhanSo.h"

void OperatorOR(const int &x, const int &y, int &z)
{
	if (x == 1 || y == 1)
	{
		z = 1;
	}
	else
	{
		z = 0;
	};
}

void OperatorAND(const int &x, const int &y, int &z)
{
	if (x == 0 || y == 0)
	{
		z = 0;
	}
	else
	{
		z = 1;
	};
}

void OperatorXOR(const int &x, const int &y, int &z)
{
	if (x == y)
	{
		z = 0;
	}
	else
	{
		z = 1;
	};
}

PhanSo::PhanSo(int x,int y)
{
	this->TuSo = x;
	this->MauSo = y;
}

//PhanSo::~PhanSo()
//{
//	delete this;
//}

void PhanSo::SetMauSo(const int &ms) 
{
	this->MauSo = ms;
}

int& PhanSo::GetMauSo()
{
	return this->MauSo;
}

void PhanSo::SetTuSo(const int &ts)
{
	this->TuSo = ts;
}

int& PhanSo::GetTuSo()
{
	return this->TuSo;
}

float PhanSo::GetValue()
{
	return (float)this->TuSo / (float)this->MauSo;
}

PhanSo PhanSo::operator+(const PhanSo& ps)
{
	PhanSo result(this->TuSo * ps.MauSo + this->MauSo * ps.TuSo, ps.MauSo*this->MauSo);
	return result.RutGon();
}

PhanSo PhanSo::operator-(const PhanSo& ps)
{
	PhanSo result(this->TuSo * ps.MauSo - this->MauSo * ps.TuSo, ps.MauSo*this->MauSo);
	return result.RutGon();
}

PhanSo PhanSo::operator/(const PhanSo& ps)
{
	PhanSo result(this->TuSo * ps.MauSo , this->MauSo * ps.TuSo);
	return result.RutGon();
}

PhanSo PhanSo::operator*(const PhanSo& ps)
{
	PhanSo result(this->TuSo * ps.TuSo, this->MauSo * ps.MauSo);
	return result.RutGon();
}

PhanSo PhanSo::operator%(const PhanSo& ps)
{
	PhanSo result((this->TuSo * ps.MauSo) % (ps.TuSo * this->MauSo), this->MauSo * ps.MauSo);
	return result.RutGon();
}

PhanSo& PhanSo::operator+=(const PhanSo& ps)
{
	*this = *this + ps;
	(*this).RutGon();
	return *this;
}

PhanSo& PhanSo::operator-=(const PhanSo& ps)
{
	*this = *this - ps;
	(*this).RutGon();
	return *this;
}

PhanSo& PhanSo::operator=(const PhanSo& ps)
{
	this->MauSo = ps.MauSo;
	this->TuSo = ps.TuSo;
	return *this;
}

PhanSo& PhanSo::operator/=(const PhanSo& ps)
{
	*this = *this / ps;
	(*this).RutGon();
	return *this;
}

PhanSo& PhanSo::operator%=(const PhanSo& ps)
{
	*this = *this % ps;
	(*this).RutGon();
	return *this;
}

bool PhanSo::operator==(const PhanSo& ps)
{
	return ((*this - ps).GetValue() == 0);
}

bool PhanSo::operator!=(const PhanSo& ps)
{
	return ((*this - ps).GetValue() != 0);
}

bool PhanSo::operator<(const PhanSo& ps)
{
	return ((*this - ps).GetValue() < 0);
}

bool PhanSo::operator<=(const PhanSo& ps)
{
	return ((*this - ps).GetValue() <= 0);
}

bool PhanSo::operator>(const PhanSo& ps)
{
	return ((*this - ps).GetValue() > 0);
}

bool PhanSo::operator>=(const PhanSo& ps)
{
	return ((*this - ps).GetValue() >= 0);
}

PhanSo& PhanSo::operator++() {
	this->TuSo += this->MauSo;
	return *this;
}

const PhanSo PhanSo::operator++(int) {
	PhanSo before(this->TuSo, this->MauSo);
	this->TuSo += this->MauSo;
	return before;
}

PhanSo& PhanSo::operator--() {
	this->TuSo -= this->MauSo;
	return *this;
}

const PhanSo PhanSo::operator--(int) {
	PhanSo before(this->TuSo, this->MauSo);
	this->TuSo -= this->MauSo;
	return before;
}

PhanSo& PhanSo::operator()(const int &tuSo,const int &mauSo)
{
	this->TuSo = tuSo;
	this->MauSo = mauSo;
	return *this;
}

bool PhanSo::operator&&(PhanSo &ps)
{
	return ( this->GetValue() > 0 && ps.GetValue() > 0);
}

bool PhanSo::operator||(PhanSo &ps)
{
	return ( this->GetValue() > 0 || ps.GetValue() > 0);
}

void * PhanSo::operator new(size_t size)
{
	return ::new unsigned char[size];
}

void PhanSo::operator delete(void *ps)
{
	delete ps;
}

PhanSo& PhanSo::operator->()
{
	return *this;
}

PhanSo PhanSo::operator<<(int x)
{
	return PhanSo(this->TuSo * 2 * x, this->MauSo);
}

PhanSo PhanSo::operator>>(int x)
{
	return PhanSo(this->TuSo / (2 * x), this->MauSo);
}

PhanSo& PhanSo::operator<<=(int x)
{
	this->TuSo = this->TuSo * 2 * x;
	return *this;
}

PhanSo& PhanSo::operator>>=(int x)
{
	this->TuSo = this->TuSo / (2 * x);
	return *this;
}

PhanSo* PhanSo::operator&()
{
	return this;
}

PhanSo& PhanSo::operator~()
{
	//Khong dao bit mau so vi co truong hop sau khi dao bit mau = 0
	//int = 32 bit
	int binarys[32];
	int temp = 0;
	
	ConverToBinary(this->TuSo, binarys, temp);
	for (int i = 0; i < temp; i++) 
	{
		binarys[i] == 0 ? binarys[i] = 1 : binarys[i] = 0;
	}

	this->TuSo = ConverToDecimal(binarys, temp);
	(*this).RutGon();
	return *this;
}

PhanSo PhanSo::operator|(PhanSo &ps)
{
	//int = 32 bit
	int binarys[32];
	int binarys1[32];
	int binarysResult[32];
	PhanSo result;
	int temp = 0;
	int temp1 = 0;

	Helper(this->GetTuSo(), ps.GetTuSo(), binarys, binarys1, binarysResult, temp, temp1, OperatorOR);
	result.SetTuSo(ConverToDecimal(binarysResult, temp));

	Helper(this->GetMauSo(), ps.GetMauSo(), binarys, binarys1, binarysResult, temp = 0, temp1 = 0, OperatorOR);
	result.SetMauSo(ConverToDecimal(binarysResult, temp));
	
	return result.RutGon();
}

PhanSo& PhanSo::operator|=(PhanSo &ps) 
{
	*this = *this | ps;
	(*this).RutGon();
	return *this;
}

PhanSo PhanSo::operator&(PhanSo &ps)
{
	//int = 32 bit
	int binarys[32];
	int binarys1[32];
	int binarysResult[32];
	PhanSo result;
	int temp = 0;
	int temp1 = 0;

	// Se ra truong hop tu va mau = 0 vi tinh chat cua phep AND
	Helper(this->GetTuSo(), ps.GetTuSo(), binarys, binarys1, binarysResult, temp, temp1, OperatorAND);
	result.SetTuSo(ConverToDecimal(binarysResult, temp));

	Helper(this->GetMauSo(), ps.GetMauSo(), binarys, binarys1, binarysResult, temp = 0, temp1 = 0, OperatorAND);
	result.SetMauSo(ConverToDecimal(binarysResult, temp));

	return result.RutGon();
}

PhanSo& PhanSo::operator^=(PhanSo &ps)
{
	*this = *this ^ ps;

	(*this).RutGon();
	return *this;
}

PhanSo PhanSo::operator^(PhanSo &ps)
{
	//int = 32 bit
	int binarys[32];
	int binarys1[32];
	int binarysResult[32];
	PhanSo result;
	int temp = 0;
	int temp1 = 0;

	// Se ra truong hop tu va mau = 0 vi tinh chat cua phep XOR
	Helper(this->GetTuSo(), ps.GetTuSo(), binarys, binarys1, binarysResult, temp, temp1, OperatorXOR);
	result.SetTuSo(ConverToDecimal(binarysResult, temp));

	Helper(this->GetMauSo(), ps.GetMauSo(), binarys, binarys1, binarysResult, temp = 0, temp1 = 0, OperatorXOR);
	result.SetMauSo(ConverToDecimal(binarysResult, temp));

	return result.RutGon();
}

PhanSo& PhanSo::operator&=(PhanSo &ps)
{
	*this = *this & ps;

	(*this).RutGon();
	return *this;
}

istream &operator>>(istream &i, PhanSo &ps)
{
	cout << "Tu so = ";
	i >> ps.TuSo;
	do 
	{	
		cout << "Mau so = ";
		i >> ps.MauSo;
		if(ps.GetMauSo() == 0)
		{
			cout << "Mau so khac 0" << endl;
		}
	} while (ps.GetMauSo() == 0);

	return cin;
}

ostream &operator<<(ostream &o, PhanSo &ps)
{
	o << "PhanSo : " << ps.GetTuSo() << "/" << ps.GetMauSo() << endl;
	return o;
}

int Ucln(int tuSo, int mauSo)
{
	tuSo = abs(tuSo);
	mauSo = abs(mauSo);
	if (tuSo*mauSo == 0) return 1;
	while (tuSo != mauSo) {
		if (tuSo > mauSo) tuSo -= mauSo;
		else mauSo -= tuSo;
	}
	return tuSo;
}

PhanSo PhanSo::RutGon()
{
	int u;
	u = Ucln(this->TuSo, this->MauSo);
	this->TuSo = this->TuSo / u;
	this->MauSo = this->MauSo / u;
	return *this;
}

void PhanSo::ConverToBinary(int a,int *binarys, int &temp)
{
	for(int j = 0 ; j < 32; j++)
	{
		binarys[j] = 0;
	}

	while (a != 0)
	{
		binarys[temp] = a % 2;
		a /= 2;
		temp++;
	}
}

int PhanSo::ConverToDecimal(int *binarys,int &temp)
{
	int result = 0;
	for (int j = 0; j < temp; j++)
	{
		result += (binarys[j] * pow(2, j));
	}

	return result;
}


void PhanSo::Helper(int x, int y, int *binarys, int *binarys1, int *binarysResult, int &temp, int &temp1, void(*compare)(const int &, const int &, int &))
{
	ConverToBinary(x, binarys, temp);
	ConverToBinary(y, binarys1, temp1);

	if (temp < temp1) temp = temp1;

	for (int i = 0; i < temp; i++)
	{
		compare(binarys[i], binarys1[i], binarysResult[i]);
	}
}

