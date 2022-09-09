#pragma once

class CStringManager
{
private:
	char* m_pString;
public:
	bool operator==(const CStringManager& rhs) const
	{
		if (m_pString != rhs.m_pString)
		{
			return false;
		}
		if (strcmp(m_pString, rhs.m_pString) != 0)
		{
			return false;
		}
		return true;
	}
public:
	CStringManager(const char * szString);
	CStringManager();
	~CStringManager();
};