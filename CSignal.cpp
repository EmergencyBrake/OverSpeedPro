#include "pch.h"
#include "CSignal.h"
CSignal::CSignal()
{
}
CSignal::~CSignal()
{
}
void CSignal::DrawSignal(CDC* pDC)//����ͬ��ʾ���źŻ���
{
	CPen pen1;
	pen1.CreatePen(PS_SOLID, 1, RGB(0, 0, 0));//heiɫ����
	pDC->SelectObject(&pen1);
	CPen pen2;
	pen2.CreatePen(PS_SOLID, 2, RGB(255, 255, 255));//��ɫ����
	pDC->SelectObject(&pen2);
	CPen pen3;
	pen3.CreatePen(PS_SOLID, 4, RGB(255, 0, 0));//��ɫ����
	pDC->SelectObject(&pen3);


	CBrush brushred;//��ɫ��ˢ
	brushred.CreateSolidBrush(RGB(255, 0, 0));
	CBrush* pOldBrush = pDC->SelectObject(&brushred);
	CBrush brushyellow;//��ɫ��ˢ
	brushyellow.CreateSolidBrush(RGB(255, 255, 0));
	CBrush brushblue;//��ɫ��ˢ
	brushblue.CreateSolidBrush(RGB(0, 0, 255));
	CBrush brushgreen;//��ɫ��ˢ
	brushgreen.CreateSolidBrush(RGB(0, 255, 0));
	CBrush brushwhite;//��ɫ��ˢ
	brushwhite.CreateSolidBrush(RGB(255, 255, 255));

	/*CFont font120;
	font120.CreatePointFont(90, _T("΢���ź�"));
	pDC->SetTextColor(RGB(255, 255, 255));
	pDC->SetBkColor(RGB(0, 0, 0));*/
	switch (Attr)
	{
	case 1://ͨ���źŻ�
		//�źŻ���
		pDC->SelectObject(&pen2);
		pDC->MoveTo(x1, y1);
		pDC->LineTo(x1, y1 + 15);
		if(Color==1)//�źŻ����̵�
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushgreen);
			pDC->Ellipse(x1, y1, x1 + 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1 + 15, y1, x1 + 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		else if (Color == 2)//�źŻ����̻Ƶ�
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushgreen);
			pDC->Ellipse(x1, y1, x1 + 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushyellow);
			pDC->Ellipse(x1 + 15, y1, x1 + 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		else if (Color == 3)//�źŻ���Ƶ�
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushyellow);
			pDC->Ellipse(x1, y1, x1 + 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1 + 15, y1, x1 + 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		else if (Color == 4)//�źŻ�����
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushred);
			pDC->Ellipse(x1, y1, x1 + 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1 + 15, y1, x1 + 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		else if (Color == 5)//�źŻ�ƽʱ״̬�����
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1, y1, x1 + 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1 + 15, y1, x1 + 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		break;
	case 2://��վ���н�վ�źŻ�
		//�źŻ���
		pDC->SelectObject(&pen2);
		pDC->MoveTo(x1, y1);
		pDC->LineTo(x1, y1 + 15);
		if (Color == 1)//�źŻ����̵�
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushgreen);
			pDC->Ellipse(x1, y1, x1 - 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1 - 15, y1, x1 - 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		else if (Color == 2)//�źŻ����̻Ƶ�
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushgreen);
			pDC->Ellipse(x1, y1, x1 - 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1 - 15, y1, x1 - 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		else if (Color == 3)//�źŻ���Ƶ�
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushyellow);
			pDC->Ellipse(x1, y1, x1 - 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1 - 15, y1, x1 - 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		else if (Color == 4)//�źŻ�����
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushred);
			pDC->Ellipse(x1, y1, x1 - 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1 - 15, y1, x1 - 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		else if (Color == 5)//�źŻ�ƽʱ״̬�����
		{
			//�źŻ���λ
			pDC->SelectObject(&pen1);
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1, y1, x1 - 15, y1 + 15);//��һ����λ��ɫ	
			pDC->SelectObject(&brushwhite);
			pDC->Ellipse(x1 - 15, y1, x1 - 30, y1 + 15);//�ڶ�����λ��ɫ
		}
		break;

	}
}
void CSignal::fuzhi(int ID, CString  Name, int Attr, int x1, int y1, int ProBS, int NextSig, int FormerSig, int Color)
{
	this->ID = ID;
	this->Name = Name;
	this->Attr = Attr;
	this->x1 = x1;
	this->y1 = y1;
	this->ProBS = ProBS;
	this->NextSig = NextSig;
	this->FormerSig = FormerSig;
	this->Color = Color;
}

