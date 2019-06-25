// ��Ϊkernel��ͷ�ļ�֮�⣬ Ҳ��Ϊmain��ͷ�ļ�
#include "device_launch_parameters.h"

#include <stdio.h>
#include<stdlib.h>
#ifdef _WIN32
#define WINDOWS_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>
#endif // _WIN32

#ifdef  __APPPLE__
#include<GL/glut.h>
#else
#include<GL/glew.h>
#include<GL/freeglut.h>
#endif //  __APPPLE__

#include "cuda_runtime.h"
#include"cuda_gl_interop.h"



#ifndef KERNEL_H
#define KERNEL_H

struct uchar4;
struct int2;

void kernelLauncher(uchar4 *d_out, int w, int h, int2 pos);
// ��װcuda��kernel����

#endif // !KERNEL_H

