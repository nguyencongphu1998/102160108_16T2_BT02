#include"ListPhanSo.h"
#include<iostream>
#include<iomanip>

using namespace std;

void Input(int& k, int& j, int& size)
{
	do {
		cout << "Phan so thu nhat:" << endl;
		cin >> k;
		cout << "Phan so thu hai:" << endl;
		cin >> j;
	} while ((size < k || k < 0) || (size < j || j < 0));
}

void Input(int& k, int& size)
{
	do {
		cout << "Phan so can thuc hien:" << endl;
		cin >> k;
	} while (size < k || k < 0);
}

void Input1(int& k, int& j, int& size)
{
	do {
		cout << "Phan so can thuc hien:" << endl;
		cin >> k;
		cout << "So bit can dich:" << endl;
		cin >> j;
	} while (size < k || k < 0);
}

int main() {
	////PhanSo a(10, 2);
	//PhanSo *a = new PhanSo(10, 2);
	////delete a;
	//cout << (*a).GetTuSo();
	ListPhanSo list;
	PhanSo result;
	bool isResult;
	int i;
	int j;
	int k;
	int size;
	cout << "Nhap 1 mang phan so" << endl;
	cin >> list;
	size = list.getSize();
	do
	{
		cout << endl << "-------------------------" << endl;
		cout << "Chuong trinh quan ly CTKH" << endl;
		cout << "-------------------------" << endl;
		cout << "1. Nhap 1 mang phan so   ";
		cout << "2. Hien thi danh sach   ";
		cout << "3. + 2 phan so   ";
		cout << "4. - 2 phan so   ";
		cout << "5. * 2 phan so   " << endl;
		cout << "6. / 2 phan so   ";
		cout << "7. % 2 phan so   ";
		cout << "8. += 2 phan so   ";
		cout << "9. -= 2 phan soi   ";
		cout << "10. = 2 phan so   " << endl;
		cout << "11. /= 2 phan so   ";
		cout << "12. %= 2 phan so   ";
		cout << "13. == 2 phan so   ";
		cout << "14. != 2 phan so   ";
		cout << "15. < 2 phan so   " << endl;
		cout << "16. <= 2 phan so   ";
		cout << "17. > 2 phan so   ";
		cout << "18. >= 2 phan so   ";
		cout << "19. phan so++   ";
		cout << "20. ++phan so   " << endl;
		cout << "21. phan so--   ";
		cout << "22. --phan so   ";
		cout << "23. Gan gia 1/2 cho phan so bang toan tu (1,2)   ";
		cout << "24. && phan so   ";
		cout << "25. || phan so   " << endl;
		cout << "26. -> phan so   ";
		cout << "27. new phan so = 1/2   ";
		cout << "28. delete phan so   ";
		cout << "29. ~ phan so   ";
		cout << "30. | 2 phan so   " << endl;
		cout << "31. |= 2 phan so   ";	
		cout << "32. & 2 phan so   " ;
		cout << "33. &= 2 phan so   ";
		cout << "34. ^ 2 phan so   " ;
		cout << "35. ^= 2 phan so   ";
		cout << "36. <<= 2 phan so   " << endl;
		cout << "37. << 2 phan so   ";
		cout << "38. >>= 2 phan so   ";
		cout << "39. >> 2 phan so   ";
		cout << "-------------------------" << endl;
		cout << "Nhap lenh:" << endl;
		cin >> i;
		switch (i)
		{
		case 1:
			cin >> list;
			break;
		case 2:
			cout << list;
			break;
		case 3:
			Input(k, j, size);
			result = list[k - 1] + list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 4:
			Input(k, j, size);
			result = list[k - 1] - list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 5:
			Input(k, j, size);
			result = list[k - 1] * list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 6:
			Input(k, j, size);
			result = list[k - 1] / list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 7:
			Input(k, j, size);
			result = list[k - 1] % list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 8:
			Input(k, j, size);
			result = list[k - 1] += list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 9:
			Input(k, j, size);
			result = list[k - 1] -= list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 10:
			Input(k, j, size);
			result = list[k - 1] = list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 11:
			Input(k, j, size);
			result = list[k - 1] /= list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 12:
			Input(k, j, size);
			result = list[k - 1] %= list[j - 1];
			cout << "Ket qua :" << result;
			break;
		case 13:
			Input(k, j, size);
			isResult = list[k - 1] == list[j - 1];
			cout << "Ket qua :" << isResult;
			break;
		case 14:
			Input(k, j, size);
			isResult = list[k - 1] != list[j - 1];
			cout << "Ket qua :" << isResult;
			break;	
		case 15:
			Input(k, j, size);
			isResult = list[k - 1] < list[j - 1];
			cout << "Ket qua :" << isResult;
			break;		
		case 16:
			Input(k, j, size);
			isResult = list[k - 1] <= list[j - 1];
			cout << "Ket qua :" << isResult;
			break;		
		case 17:
			Input(k, j, size);
			isResult = list[k - 1] > list[j - 1];
			cout << "Ket qua :" << isResult;
			break;		
		case 18:
			Input(k, j, size);
			isResult = list[k - 1] >= list[j - 1];
			cout << "Ket qua :" << isResult;
			break;
		case 19:
			Input(k, size);
			result = PhanSo(0, 10) + list[k - 1]++;
			cout << "Ket qua before :" << result;
			cout << "Ket qua after :" << list[k - 1];
			break;	
		case 20:
			Input(k, size);
			cout << "Ket qua before :" << ++list[k - 1];
			cout << "Ket qua after :" << list[k - 1];
			break;
		case 21:
			Input(k, size);
			result = PhanSo(0, 10) + list[k - 1]--;
			cout << "Ket qua before :" << result;
			cout << "Ket qua after :" << list[k - 1];
			break;	
		case 22:
			Input(k, size);
			cout << "Ket qua before :" << --list[k - 1];
			cout << "Ket qua after :" << list[k - 1];
			break;
		case 23:
			Input(k,size);
			result = list[k - 1](1,2);
			cout << "Ket qua :" << result;
			break;
		case 24:
			Input(k, j, size);
			isResult = list[k - 1] &&  list[j - 1];
			cout << "Ket qua :" << isResult;
			break;
		case 25:
			Input(k, j, size);
			isResult = list[k - 1] || list[j - 1];
			cout << "Ket qua :" << isResult;
			break;
		case 26:
			Input(k, size);
			cout << "Ket qua :" << (list.getData() + k - 1)->GetValue();
			break;
		case 27:
			result = *(new PhanSo(1,2));
			cout << "Ket qua :" << result;
			break;
		case 28:
			Input(k, size);
			cout << "Truoc khi xoa :" << *(list.getData() + k - 1);
			delete (list.getData() + k - 1);
			cout << "Sau khi xoa chỉ còn 1 số ngẫu nhiên:" << *(list.getData() + k - 1);
			break;
		case 29:
			Input(k, size);
			cout << "Ket qua :" << ~*(list.getData() + k - 1);
			break;
		case 30:
			Input(k, j, size);
			result = *(list.getData() + k - 1)|*(list.getData() + j - 1);
			cout << "Ket qua :" << result;	
			break;
		case 31:
			Input(k, j, size);
			*(list.getData() + k - 1)|=*(list.getData() + j - 1);
			cout << "Ket qua :" << *(list.getData() + k - 1);
			break;
		case 32:
			Input(k, j, size);
			result = *(list.getData() + k - 1)&*(list.getData() + j - 1);
			cout << "Ket qua :" << result;	
			break;
		case 33:
			Input(k, j, size);
			*(list.getData() + k - 1)&=*(list.getData() + j - 1);
			cout << "Ket qua :" << *(list.getData() + k - 1);
			break;
		case 34:
			Input(k, j, size);
			result = *(list.getData() + k - 1)^*(list.getData() + j - 1);
			cout << "Ket qua :" << result;	
			break;
		case 35:
			Input(k, j, size);
			*(list.getData() + k - 1)^=*(list.getData() + j - 1);
			cout << "Ket qua :" << *(list.getData() + k - 1);
			break;
		case 36:
			Input1(k, j, size);
			*(list.getData() + k - 1) <<= j;
			cout << "Ket qua :" << *(list.getData() + k - 1);
			break;
		case 37:
			Input1(k, j, size);
			result = *(list.getData() + k - 1) << j;
			cout << "Ket qua :" << result;
			break;
		case 38:
			Input1(k, j, size);
			*(list.getData() + k - 1) >>= j;
			cout << "Ket qua :" << *(list.getData() + k - 1);
			break;
		case 39:
			Input1(k, j, size);
			result = *(list.getData() + k - 1) >> j;
			cout << "Ket qua :" << result;
			break;
		default:
			cout << "Vui long nhap dung lenh" << endl;
			break;
		}
	} while (i != 0);

	system("pause");
	return 0;
}

