#pragma once

class CStringManager
{
private:
	char* m_pString;
public:
	bool operator==(const CStringManager& rhs);
public:
	CStringManager();
	CStringManager(const char * szString);
	CStringManager(const CStringManager& rhs);
	~CStringManager();
};