/* Start Header -------------------------------------------------------
Copyright (C) 2013 DigiPen Institute of Technology. Reproduction or disclosure of this file or its contents without the prior written consent of DigiPen Institute of Technology is prohibited.
File Name: Matrix2D.h
Purpose: Header File for a 2D 3x3 Matrix Library
Language: C
Author: Spencer Tracy, s.tracy, 60002313
Creation date: 09/15/2013
- End Header -----------------------------------------------------*/
/*
#ifndef MATRIX2D_H
#define MATRIX2D_H
*/
#pragma once

#include "Vector2D.h"

typedef struct Matrix2D
{
	float m[3][3];
}Matrix2D;

/*
This function sets a matrix to all zeros
*/
void Matrix2DZero(Matrix2D *pResult);

/*
This function sets the matrix Result to the identity matrix
*/
void Matrix2DIdentity(Matrix2D *pResult);

/*
This functions calculated the transpose matrix of Mtx and saves it in Result
*/
void Matrix2DTranspose(Matrix2D *pResult, Matrix2D *pMtx);

/*
This function multiplies Mtx0 with Mtx1 and saves the result in Result
Result = Mtx0*Mtx1
*/
void Matrix2DConcat(Matrix2D *pResult, Matrix2D *pMtx0, Matrix2D *pMtx1);

/*
This function creates a translation matrix from x *p y and saves it in Result
*/
void Matrix2DTranslate(Matrix2D *pResult, float x, float y);

/*
This function creates a scaling matrix from x *p y and saves it in Result
*/
void Matrix2DScale(Matrix2D *pResult, float x, float y);

/*
This matrix creates a rotation matrix from "Angle" whose value is in degree.
Save the resultant matrix in Result
*/
void Matrix2DRotDeg(Matrix2D *pResult, float Angle);

/*
This matrix creates a rotation matrix from "Angle" whose value is in radian.
Save the resultant matrix in Result
*/
void Matrix2DRotRad(Matrix2D *pResult, float Angle);

/*
This function multiplies the matrix Mtx with the vector Vec and saves the result in Result
Result = Mtx * Vec
*/
void Matrix2DMultVec(Vector2D *pResult, Matrix2D *pMtx, Vector2D *pVec);