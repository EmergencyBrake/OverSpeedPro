#pragma once
#include <cstring>
#include <atlstr.h>
using namespace std;
class CBlockSec
{
public:
	int ID;
	int Attr;//1��ʾ����������2��ʾվ�ڹ����·
	int x1, y1, x2, y2;
	int ProSignal;
	int State;
	int Length;
	int Speed;
public:
	CBlockSec();
	~CBlockSec();
	void CBlockSec::DrawBS(CDC* pDC);
	void fuzhi(int ID, int Attr, int x1, int y1, int x2, int y2, int ProSignal, int State, int Length, int Speed);


};

