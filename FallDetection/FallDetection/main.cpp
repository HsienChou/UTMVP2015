#include <iostream>
#include <string>
#include <opencv\highgui.h>
#include <opencv2\videoio.hpp>
#include <opencv\cv.hpp>

const std::string FILE_PATH="C:\\Users\\Michael\\SkyDrive\\Project\\¶^­Ë¿ý¼v\\¶^­Ë¼v¤ù\\WP_20150324_16_55_56_Pro.mp4";
int main(int argc,char* argv[])
{
	cv::Mat frame;
	cv::VideoCapture video(FILE_PATH);
	if(!video.isOpened())
	{
		std::cerr << "Cannot open video file" <<std::endl;
	}
	
	while(video.read(frame))
	{
		cv::imshow("C++ Api Image",frame);

		cv::waitKey(33);
	}

	return 0;
}