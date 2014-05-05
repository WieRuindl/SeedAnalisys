#if !defined(_OPEN_IMAGE_ALGORITHM_H)
#define _OPEN_IMAGE_ALGORITHM_H

#include "string"

#include "IAlgorithm.h"

using namespace std;

class OpenImageAlgorithm : public IAlgorithm {
public:
	OpenImageAlgorithm();
	string getFilePath() const;
	Bitmap^ getBitmap() const;
	int setFilePath(string path);
	void start();
	~OpenImageAlgorithm();
private:
	string filePath;
	Bitmap^ bmp;
};
#endif  //_OPEN_IMAGE_ALGORITHM_H