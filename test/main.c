/****************************************************************\
*								*
*	Public Domain (PD) 2015 ROOMAViX. All Rights Left.	*
*								*
*	Author	      : ROOMAViX				*
*	Contact author: roomavix@gmail.com			*
*								*
*	This file is part of The ROOMAViX Project.		*
*								*
*	Source version: librvx_md5-1.0				*
*								*
\****************************************************************/
// main.c
#include <stdio.h>
#include <stdlib.h>
#include "..\src\librvx_md5.h"

int main()
{
  //MD5 for a string
	MDString("Hello");
	//MD5 for a file
	MDFile("filename.txt");
	system("pause");
	return 0;
}
