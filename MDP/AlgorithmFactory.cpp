#include "string"#include "AlgorithmFactory.h"#include "IAlgorithm.h"const string AlgorithmFactory::TYPE_OPEN_IMAGE = "openImage";const string AlgorithmFactory::TYPE_PRETREATMENT = "pretreatment";const string AlgorithmFactory::TYPE_ANALYSE = "analyse";IAlgorithm AlgorithmFactory::createAlgorithm(string type) {	if (TYPE_OPEN_IMAGE == type) {	// 1 stage		return new OpenImageAlgorithm();	}	if (TYPE_PRETREATMENT == type) {	// 2 stage		return new pretreatmentAlgorithm();	}	if (TYPE_ANALYSE == type) {	// 3 stage		return new analyseAlgorithm();	}	return;}