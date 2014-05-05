#if !defined(_ALGORITHMFACTORY_H)
#define _ALGORITHMFACTORY_H

#include "string"

#include "IFactory.h"
#include "IAlgorithm.h"

class AlgorithmFactory : public IFactory {
public:
	IAlgorithm createAlgorithm(string type);
	
	static const string TYPE_OPEN_IMAGE;
	static const string TYPE_PRETREATMENT;
	static const string TYPE_ANALYSE;
};

#endif  //_ALGORITHMFACTORY_H
