#include "cLine.h"
#include <iostream>

cLine::cLine(string text_in) : text(text_in), prev(textNull)
{
}

cLine::cLine(string text_in, cLine* prev_in) : text(text_in), prev(prev_in)
{
}

cLine* cLine::getPrev()
{
	if (prev != textNull)
		return prev;
	return nullptr;
}

void cLine::ausgabeZeile()
{
	if (prev != (cLine*)0) {
		prev->ausgabeZeile();
	}
	std::cout << text << std::endl;
}

void cLine::setText(string newText)
{
	text = newText;
}

string cLine::getText()
{
	return text;
}

cLine::~cLine()
{
	delete prev;
}
