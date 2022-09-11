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
	m_pString = new char[32];
	strcpy(m_pString, szString); //즉시 변수에 저장
}

CStringManager::CStringManager(const CStringManager& rhs)
{
	m_pString = new char[32];
	strcpy(m_pString, rhs.m_pString);
}

bool CStringManager::operator==(const CStringManager& rhs)
{
	if (strcmp(m_pString, rhs.m_pString) != 0)
	{
		return false;
	}
	return true;
}

bool CStringManager::operator!=(const CStringManager& rhs)
{
	if (strcmp(m_pString, rhs.m_pString) == 0)
	{
		return false;
	}
	return true;
}

bool CStringManager::operator==(const char* szString)
{
	if (strcmp(m_pString, szString) != 0)
	{
		return false;
	}
	return true;
}

bool CStringManager::operator!=(const char* szString)
{
	if (strcmp(m_pString, szString) == 0)
	{
		return false;
	}
	return true;
}