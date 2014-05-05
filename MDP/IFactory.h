#if !defined(_IFACTORY_H)
#define _IFACTORY_H

#include "string"
#include "IAlgorithm.h"

using namespace std;

class IFactory {
public:
	virtual IAlgorithm createAlgorithm(string type) = 0;
};

#endif  //_IFACTORY_H
