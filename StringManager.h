#pragma once

class CStringManager
{
private:
	char* m_pString;
public:
	bool operator==(const CStringManager& rhs);
	bool operator!=(const CStringManager& rhs);
	bool operator==(const char* szString);
	bool operator!=(const char* szString);
public:
	CStringManager();
	CStringManager(const char * szString);
	CStringManager(const CStringManager& rhs);
	~CStringManager();
};