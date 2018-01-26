#include"function_declare.h"

/**
* @function check_value
*/
int check_value(Mat & srcImage)
{
	namedWindow("Control", CV_WINDOW_AUTOSIZE); //create a window called "Control"
	int iLowH = 100;
	int iHighH = 140;
	int iLowS = 90;
	int iHighS = 255;
	int iLowV = 90;
	int iHighV = 255;
	cvCreateTrackbar("LowH", "Control", &iLowH, 179); //Hue (0 - 179)
	cvCreateTrackbar("HighH", "Control", &iHighH, 179);
	cvCreateTrackbar("LowS", "Control", &iLowS, 255); //Saturation (0 - 255)
	cvCreateTrackbar("HighS", "Control", &iHighS, 255);
	cvCreateTrackbar("LowV", "Control", &iLowV, 255); //Value (0 - 255)
	cvCreateTrackbar("HighV", "Control", &iHighV, 255);

	while (true)
	{
		Mat imgHSV;
		vector<Mat> hsvSplit;
		cvtColor(srcImage, imgHSV, COLOR_BGR2HSV); //Convert the captured frame from BGR to HSV

		//��HSV�ռ���ֱ��ͼ���⻯
		split(imgHSV, hsvSplit);
		equalizeHist(hsvSplit[2], hsvSplit[2]);
		merge(hsvSplit, imgHSV);

		Mat imgThresholded;
		inRange(imgHSV, Scalar(iLowH, iLowS, iLowV), Scalar(iHighH, iHighS, iHighV), imgThresholded); //Threshold the image

		//������ (ȥ��һЩ���)
		Mat element = getStructuringElement(MORPH_RECT, Size(5, 5));
		morphologyEx(imgThresholded, imgThresholded, MORPH_OPEN, element);

		//�ղ��� (����һЩ��ͨ��)
		morphologyEx(imgThresholded, imgThresholded, MORPH_CLOSE, element);

		namedWindow("[1]Cube", CV_WINDOW_AUTOSIZE);
		imshow("[1]Cube", srcImage);

		namedWindow("[2]Thresholded_Image", CV_WINDOW_AUTOSIZE);
		imshow("[2]Thresholded_Image", imgThresholded);


		char key = (char)waitKey(300);
		if (key == 27)
			break;
	}

	return 0;

}