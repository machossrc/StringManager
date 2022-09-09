#pragma once

class CStringManager
{
private:
	char* m_pString;
public:
	CStringManager(const char * szString);
	CStringManager();
	~CStringManager();
};