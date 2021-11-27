#pragma once
#include <string>
#define textNull (cLine*)0

using namespace std;
class cLine
{
	string text;
	cLine* prev;

public:
	cLine(string text_in);
	cLine(string text_in, cLine* prev_in);
	cLine* getPrev();
	void ausgabeZeile();
	void setText(string newText);
	string getText();

	~cLine();
};

