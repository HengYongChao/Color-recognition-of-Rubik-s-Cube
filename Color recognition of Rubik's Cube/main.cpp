////*=====================================================================================
////*                          main.c--
////*	             Copyleft! 2018 William Yu
////*          Some rights reserved��CC(creativecommons.org)BY-NC-SA
////*              Copyleft! 2018 William Yu
////*      ��Ȩ�������У���ѭCC(creativecommons.org)BY-NC-SAЭ����Ȩ��ʽʹ��
////*
////* Filename                : main.cpp
////* Description             : (���뻷����win10 + OpenCV3.3.0 + VS2017)
////* Reference               :
////* Programmer(s)           : William Yu, windmillyucong@163.com
////* Company                 : HUST ThinkFly Studio
////* Modification History	  : ver1.0, 2018.01.20, William Yu
////*
////=====================================================================================*/
//
//#include"function_declare.h"
//
//int Current_color[54];//����ͷ��ȡ����color of current cube
//char Current_cube[49];//ת������color of current cube
//
///**
//* @function standardize_color
//ת��Ϊ��׼ħ������˳��
//*/
//char* standardize_color(int Current_color[54])
//{
//	cout << "I`m going to standardize the color data." << endl;
//	char Current_cube[20][4];
//	char standardize_cube[20][4];
//
//	///Current_cube��Current_colorת����
//
//	strcpy(standardize_cube, Current_cube);// do not use name = get_name  //because name will get get_name address it's in the stack //it is stupid idea.
//	return &standardize_cube;
//}
//
///**
//* @function main
//*/
//int main(int argc, const char** argv)
//{
//	VideoCapture cap;
//	cap.open(0);
//	if (!cap.isOpened())
//	{
//		cout << "Can`t open camera\n";
//	}
//	Mat srcImage;
//
//	//cap >> srcImage;
//	//if (srcImage.empty())
//	//	return -1;
//	//check_value(srcImage);
//
//	cap >> srcImage;
//	if (srcImage.empty())
//		return -1;
//	int *color_temp[9];
//	color_temp = get_color(srcImage);
//	for (int i = 0; i < 9; i++)
//	{
//		Current_color[i] = color_temp[i];
//	}
//	delete color_temp;
//	cout << "Please show me the Face_R" << endl;
//	//����գ����ڷ�����λ��ת������
//	//����գ����ڻش�OK
//	
//	cap >> srcImage;
//	if (srcImage.empty())
//		return -1;
//	int *color_temp;
//	color_temp = get_color(srcImage);
//	for (int i = 0; i < 9; i++)
//	{
//		Current_color[9+i] = color_temp[i];
//	}
//	delete color_temp;
//	cout << "Please show me the Face_B" << endl;
//	//����գ����ڷ�����λ��ת������
//	//����գ����ڻش�OK
//
//	cap >> srcImage;
//	if (srcImage.empty())
//		return -1;
//	int *color_temp;
//	color_temp = get_color(srcImage);
//	for (int i = 0; i < 9; i++)
//	{
//		Current_color[9 + i] = color_temp[i];
//	}
//	delete color_temp;
//	cout << "Please show me the Face_L" << endl;
//	//����գ����ڷ�����λ��ת������
//	//����գ����ڻش�OK
//
//	cap >> srcImage;
//	if (srcImage.empty())
//		return -1;
//	int *color_temp;
//	color_temp = get_color(srcImage);
//	for (int i = 0; i < 9; i++)
//	{
//		Current_color[9 + i] = color_temp[i];
//	}
//	delete color_temp;
//	cout << "Please show me the Face_U" << endl;
//	//����գ����ڷ�����λ��ת������
//	//����գ����ڻش�OK
//
//	cap >> srcImage;
//	if (srcImage.empty())
//		return -1;
//	int *color_temp;
//	color_temp = get_color(srcImage);
//	for (int i = 0; i < 9; i++)
//	{
//		Current_color[9 + i] = color_temp[i];
//	}
//	delete color_temp;
//	cout << "Please show me the Face_D" << endl;
//	//����գ����ڷ�����λ��ת������
//	//����գ����ڻش�OK
//
//	cap >> srcImage;
//	if (srcImage.empty())
//		return -1;
//	int *color_temp;
//	color_temp = get_color(srcImage);
//	for (int i = 0; i < 9; i++)
//	{
//		Current_color[9 + i] = color_temp[i];
//	}
//	delete color_temp;
//	cout << "Please show me the Face_F,and I`m going to solve it." << endl;
//	//����գ����ڷ�����λ��ת������
//	//����գ����ڻش�OK
//
//	char start_cube[20][4];
//	start_cube = standardize_color( Current_color );
//	
//	mySolveCube(start_cube,20);
//	
//	//move();
//	
//	return 0;
//
//}
//
