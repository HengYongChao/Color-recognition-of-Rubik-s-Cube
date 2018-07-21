//*=====================================================================================
//*                          main.c--
//*				    Copyleft! 2018 William Yu
//*          Some rights reserved��CC(creativecommons.org)BY-NC-SA
//*				    Copyleft! 2018 William Yu
//*      ��Ȩ�������У���ѭCC(creativecommons.org)BY-NC-SAЭ����Ȩ��ʽʹ��
//*
//* Filename                : main.cpp
//* Description             : (���뻷����win10 + OpenCV3.3.0 + VS2017)
//* Reference               :
//* Programmer(s)           : William Yu, windmillyucong@163.com
//* Company                 : HUST ThinkFly Studio
//* Modification History	  : ver1.0, 2018.01.20, William Yu
//*
//=====================================================================================*/

#include"function_declare.h"

//----------------------------------------
//TODO:color_this_face�����ڲ�������˳��
//     ��ʵ�ϲ�������cubielet�������˳��,����ת��ʽ�йأ��Ȼ�е�ṹȷ��֮�󣬵���˳�򼴿ɣ�
//     ��Ҫ���ƺ���deviation;
//     �˴�standardize_color����������Ϊ��cubielet�������˳��
//----------------------------------------


/// Global Variables 
string colorlet = "WRGBOY";
string facelet = "URFDLB";   //position->|  U  |  R    |   F    |   D    |   L    |   B    |
int Start_color[54];         //          |0-4-8|9-13-17|18-22-26|27-31-35|36-40-44|45-49-53|
int color_this_face[9];      //          |0-4-9|0 -4- 9|0 -4-  9|0 -4-  9|0 -4-  9|0 -4-  9|	
char Start_cube[20][4];

/**
* @function main
*/

//int main(int argc, const char** argv)
//{
//	VideoCapture cap;
//	Mat srcImage;
//
//	#ifdef check_color_value
//		cap.open(0);
//		if (!cap.isOpened())
//		{
//			cout << "Can`t open camera\n";
//		}
//		cap >> srcImage;
//		cap.release();
//		if (srcImage.empty())
//			return -1;
//		srcImage=imread("Cube.jpg");
//		check_value(srcImage);
//		return -1;
//	#endif // !check_color_value
//
//	
//	for(int face = 0; face<6; face++)
//	{
//		cout << "Please show me the face" << " " << facelet[face] << endl;
//		//--TODO�����ڷ�����λ��ת������
//		//--TODO�����ڻش�ok
//		cap.open(0);
//		if (!cap.isOpened()) { cout << "Can`t open camera\n"; return -1; }
//		cap >> srcImage;
//		cap.release();
//		if (srcImage.empty()) return -1;
//		get_color(srcImage, color_this_face);
//		for (int i = 0; i < 9; i++)
//		{
//			Start_color[i + 9 * face] = color_this_face[i];
//		}
//	}
//
//	cout << "Please go back to the start position and I`m going to solve it." << endl;
//	//--TODO�����ڷ�����λ��ת������
//	//--TODO�����ڻش�ok
//
//	deviation(Start_color);
//	standardize_color(Start_color, Start_cube);
//	mySolveCube(Start_cube);
//	//move();
//	
//	return 0;
//
//}

