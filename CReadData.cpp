#include "pch.h"
#include "CReadData.h"
#include<string.h>
#include<stdlib.h>
#include"stdafx.h"
#include "afxtempl.h"
#include <string>
#include<iostream>
CReadData::CReadData()
{

}
CReadData::~CReadData()
{

}

void CReadData::ReadSignal()
{
	//��ʼд����,�����Լ����ݿ��ʽ�����޸�һ��
	_variant_t RecordsAffected;	//������ɺ���Ӱ������� 
	int signal_count = 0;

	//����·�������Ϊ��λ	
	m_pRecordset = Control_Connection->Execute("SELECT *FROM �źŻ�", &RecordsAffected, adCmdText);
	m_pRecordset->MoveFirst();//��һ��

	while (!m_pRecordset->adoEOF)
	{
		_variant_t var;//����һ������
					   //������
		CString id;
		int ID;
		CString Name;
		CString attr;
		int Attr;
		CString x1;
		int X1;
		CString y1;
		int Y1;
		CString proBS;
		int ProBS;
		CString nextSig;
		int NextSig;
		CString formerSig;
		int FormerSig;
		CString color;
		int Color;
		//��ʼ����
		var = m_pRecordset->GetCollect("ID");
		id = var.bstrVal;
		ID = _ttoi(id);
		//ID = var.intVal; ;
		var = m_pRecordset->GetCollect("����");
		Name = var.bstrVal;
		/*name = atoi(Name);*/
		var = m_pRecordset->GetCollect("Attr");
		attr = var.bstrVal;
		Attr = atoi(attr);
		//Attr=  var.intVal;
		var = m_pRecordset->GetCollect("x1");
		x1 = var.bstrVal;
		X1 = atoi(x1);
		//X1 = var.intVal;
		var = m_pRecordset->GetCollect("y1");
		y1 = var.bstrVal;
		Y1 = atoi(y1);
		//Y1 = var.intVal;
		var = m_pRecordset->GetCollect("�����ı�������ID");
		proBS = var.bstrVal;
		ProBS = atoi(proBS);
		var = m_pRecordset->GetCollect("��һ���źŻ�");
		nextSig = var.bstrVal;
		NextSig = atoi(nextSig);
		var = m_pRecordset->GetCollect("��һ���źŻ�");
		formerSig = var.bstrVal;
		FormerSig = atoi(formerSig);
		var = m_pRecordset->GetCollect("��ɫ");
		color = var.bstrVal;
		Color = atoi(color);

		m_csignal[signal_count++].fuzhi(ID, Name, Attr, X1, Y1, ProBS, NextSig, FormerSig, Color);
		m_pRecordset->MoveNext();
	}
	m_pRecordset->MoveFirst();
	signal_count = 0;

}

void CReadData::ReadBS()
{
	//��ʼд����,�����Լ����ݿ��ʽ�����޸�һ��
	_variant_t RecordsAffected;	//������ɺ���Ӱ������� 
	int bs_count = 0;

	//����·�������Ϊ��λ	
	m_pRecordset = Control_Connection->Execute("SELECT *FROM ��������", &RecordsAffected, adCmdText);
	m_pRecordset->MoveFirst();//��һ��

	while (!m_pRecordset->adoEOF)
	{
		_variant_t var;//����һ������
					   //������
		CString id;
		int ID;
		CString attr;
		int Attr;
		CString x1;
		int X1;
		CString y1;
		int Y1;
		CString x2;
		int X2;
		CString y2;
		int Y2;
		CString proSignal;
		int ProSignal;
		CString state;
		int State;
		CString length;
		int Length;
		CString speed;
		int Speed;
		//��ʼ����
		var = m_pRecordset->GetCollect("ID");
		id = var.bstrVal;
		ID = atoi(id);
		var = m_pRecordset->GetCollect("Attr");
		attr = var.bstrVal;
		Attr = atoi(attr);
		var = m_pRecordset->GetCollect("X1");
		x1 = var.bstrVal;
		X1 = atoi(x1);
		var = m_pRecordset->GetCollect("Y1");
		y1 = var.bstrVal;
		Y1 = atoi(y1);
		var = m_pRecordset->GetCollect("X2");
		x2 = var.bstrVal;
		X2 = atoi(x2);
		var = m_pRecordset->GetCollect("Y2");
		y2 = var.bstrVal;
		Y2 = atoi(y2);
		var = m_pRecordset->GetCollect("�����źŻ�");
		proSignal = var.bstrVal;
		ProSignal = atoi(proSignal);
		var = m_pRecordset->GetCollect("״̬");
		state = var.bstrVal;
		State = atoi(state);
		var = m_pRecordset->GetCollect("����");
		length = var.bstrVal;
		Length = atoi(length);
		var = m_pRecordset->GetCollect("�ٶ�");
		speed = var.bstrVal;
		Speed = atoi(speed);

		m_cblocksec[bs_count++].fuzhi(ID, Attr, X1, Y1, X2, Y2, ProSignal, State, Length, Speed);
		m_pRecordset->MoveNext();
	}
	m_pRecordset->MoveFirst();
	bs_count = 0;
}
