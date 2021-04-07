// Copyright 2021 Shagov Maksim
#ifndef MODULES_TASK_2_SHAGOV_M_FOX_FOX_H_
#define MODULES_TASK_2_SHAGOV_M_FOX_FOX_H_
#include <omp.h>
#include <vector>
#include <iostream>
#include <ctime>
#include <random>
#include <cmath>
#include <limits>

typedef  std::vector<double> Matrix;

bool isEqual(double x, double y);
bool isEqualMatrix(Matrix A, Matrix B);

Matrix createRandomMatrix(size_t size);
Matrix sequentialMatrixMultiplication(std::vector<double> A, std::vector<double> B, size_t BlockSize);
Matrix sequentialBlockMatrixMultiplication(std::vector<double> A, std::vector<double> B, size_t Size);
Matrix parallelBlockMatrixMultiplication(std::vector<double> A, std::vector<double> B, size_t Size);
#endif  // MODULES_TASK_2_SHAGOV_M_FOX_FOX_H_
