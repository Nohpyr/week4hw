#include <opencv2/opencv.hpp>
#include <iostream>
#include <cstdlib>
using namespace cv;

int main (int argc, char *argv[])
{
	string arg = argv[1];
	std::string fileLoc = "THE_GAME_Album.jpg";
	Mat img = imread(fileLoc);
	
	if (arg == "picture")
	{
		imshow("picture", img);
		waitKey(0);
	}
}
