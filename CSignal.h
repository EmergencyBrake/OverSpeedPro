#pragma once
#include <cstring>
using namespace std;

class CSignal
{
public:
	int ID;//�źŻ���ID��Ψһ��ʶ��
	CString Name;//�źŻ�������
	int Attr;//�źŻ������ԡ�Ϊ1��ʾΪͨ���źŻ���Ϊ2��ʾ��վ�źŻ���Ϊ3��ʾ��վ�źŻ�
	int x1, y1;//�����źŻ��Ļ�������
	int ProBS;//���źŻ������ı���������ID
	int NextSig;//������һ���źŻ���ID
	int FormerSig;//����ǰһ���źŻ���ID
	int Color;//�źŻ�����ɫ��Ϊ1��ʾ��ɫ��2��ʾ�̻ƣ�3��ʾ��ɫ��4��ʾ��ɫ,5��ʾ��ɫ
public:
	CSignal();
	~CSignal();
	void CSignal::DrawSignal(CDC* pDC);	//����ͬ��ʾ���źŻ���
	void CSignal::fuzhi(int ID, CString  Name, int Attr, int x1, int y1,int ProBS, int NextSig, int FormerSig, int Color);

};

