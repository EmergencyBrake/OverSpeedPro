#pragma once
#include"stdafx.h"
#include "CSignal.h"
#include "CBlockSec.h"
#include<iostream>
class CReadData
{
public:
	//���ݿ����
	_ConnectionPtr m_pConnection;			//ָ��Connection��ָ��(�����ݿ����ӵı���)
	_RecordsetPtr m_pRecordset;

	_ConnectionPtr Write_Connection;			//ָ��Connection��ָ��(�����ݿ����ӵı���)
	_ConnectionPtr Control_Connection;			//ָ��Connection��ָ��(�����ݿ����ӵı���)

	int dubiaojishu = 0;

	CSignal m_csignal[15];
	CBlockSec m_cblocksec[15];
	void ReadSignal();
	void ReadBS();
	
	//void CReadData::operator=(const CReadData& b);
public:
	CReadData();
	~CReadData();
};

