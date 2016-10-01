#include <opencv2/opencv.hpp>
#include <iostream>
#include <cstdlib>
using namespace cv:

int main (int argc, char *argv[])
{
	string arg = argv[1];
	std::string fileLoc = "insert image path here";
	Mat img = imread(fileLoc);

	if (arg == "picture")
	{
		imshow("picture", img);
		waitkey(0);
	}
}
