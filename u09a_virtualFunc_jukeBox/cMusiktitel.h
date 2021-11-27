#pragma once
class cMusiktitel
{
protected:
	int gewichtung;
public:
	cMusiktitel(int gewichtung_in);
	virtual int punkten(int) = 0;
};

