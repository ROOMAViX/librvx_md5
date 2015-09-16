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
// librvx_md5.h
#ifndef LIBRVX_MD5_DLL_H
#define LIBRVX_MD5_DLL_H

#ifdef __cplusplus
extern "C" {
#endif

#define DLLImport __declspec( dllimport )

typedef unsigned long int UINT4;

typedef struct {
  UINT4 i[2];
  UINT4 buf[4];
  unsigned char in[64];
  unsigned char digest[16];
} MD5_CTX;

void MD5Init(MD5_CTX *mdContext);
void MD5Update(MD5_CTX *mdContext, unsigned char *inBuf, unsigned int inLen);
void MD5Final(MD5_CTX *mdContext);
void MDString (char *inString);

DLLImport void MDFile (char *filename);
DLLImport void MDPrint (MD5_CTX *mdContext);

#ifdef __cplusplus
}
#endif

#endif //LIBRVX_MD5_DLL_H
