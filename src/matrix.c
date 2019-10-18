#include <stdio.h>
#include <glib.h>
#include <gsl/gsl_matrix.h>

#define MATRIX_SIZE 3

static double matrix_1[MATRIX_SIZE][MATRIX_SIZE] = {
  {1., 4., 2.},
  {-1., -2., 1.},
  {3., 20., 19.},
};
static double vector_1[] = {8., 3., 71.};

static double matrix_2[MATRIX_SIZE][MATRIX_SIZE] = {
  {1.,    0.1,    0.225},
  {-0.15, 1.,     0.2},
  {-0.4,  -0.025, 1.}
};
static double vector_2[] = {0.1, 0.9, 0.8};

int main(void) {
  printf("Gauss.\n\n");

  // Alloc matrix`s
  gsl_matrix *matrix1 = gsl_matrix_alloc(MATRIX_SIZE, MATRIX_SIZE);
  // gsl_matrix *orig_matrix = gsl_matrix_alloc(MATRIX_SIZE, MATRIX_SIZE);

  gsl_vector *vector1 = gsl_vector_alloc(MATRIX_SIZE);
  // gsl_vector *orig_vector = gsl_vector_alloc(MATRIX_SIZE);

  gsl_vector *result1 = gsl_vector_alloc(MATRIX_SIZE);
  gsl_vector *result2 = gsl_vector_alloc(MATRIX_SIZE);

  // Init matrix
  for (size_t i = 0; i < MATRIX_SIZE; i++) {
    for (size_t j = 0; j < MATRIX_SIZE; j++) {
      gsl_matrix_set(matrix, i, j, d_matrix[i][j]);
      // gsl_matrix_set(orig_matrix, i, j, d_matrix[i][j]);
    }
  }

  // Init vector
  for (size_t j = 0; j < MATRIX_SIZE; j++) {
    gsl_vector_set(vector, j, d_vector[j]);
    // gsl_vector_set(orig_vector, j, d_vector[j]);
  }
}
