#pragma once
#ifndef MYHEADER_H
#define MYHEADER_H

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <math.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

void hw4_3_1();
void hw4_3_2();
void hw4_3_3();
void hw4_3_4();

void neighbor4(unsigned char*, unsigned char*, int, int);
void neighbor8(unsigned char*, unsigned char*, int, int);
void sobel_0(unsigned char*, unsigned char*, int, int);
void sobel_90(unsigned char*, unsigned char*, int, int);

#endif  // MYHEADER_H

#pragma once
