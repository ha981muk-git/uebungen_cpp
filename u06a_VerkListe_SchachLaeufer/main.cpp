#include "cSchachfeld.h"
#define schachNull (cSchachfeld*)0

int main() {

	cSchachfeld *start = new cSchachfeld('e', 7);
	cSchachfeld *ziel = new cSchachfeld('c', 1);
	cSchachfeld *aktPos = new cSchachfeld(*start);

	while (true) {
		if (comparePos(*aktPos, *ziel)) {
			break;
		}
		if (aktPos->laeferzug()) {
			aktPos = aktPos->getNext();
		}
	}

	delete start;

	return 0;
}