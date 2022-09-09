#include "stdafx.h"
#include "StringManager.h"

CStringManager::CStringManager()
{

}

CStringManager::~CStringManager()
{

}

CStringManager::CStringManager(const char* szString)
{
	strcpy(m_pString, szString); //즉시 변수에 저장
}