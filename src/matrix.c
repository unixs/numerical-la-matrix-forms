#include <stdio.h>
#include <gsl/gsl_matrix.h>

#define MATRIX_SIZE 3

static const double matrix_1[MATRIX_SIZE][MATRIX_SIZE] = {
  {1., 4., 2.},
  {-1., -2., 1.},
  {3., 20., 19.},
};
static const double vector_1[] = {8., 3., 71.};

static const double matrix_2[MATRIX_SIZE][MATRIX_SIZE] = {
  {1.,    0.1,    0.225},
  {-0.15, 1.,     0.2},
  {-0.4,  -0.025, 1.}
};
static double const vector_2[] = {0.1, 0.9, 0.8};


void ulDecomposition(const gsl_matrix *A, const gsl_vector *b) {
  gsl_matrix *L = gsl_matrix_calloc(MATRIX_SIZE, MATRIX_SIZE);
  gsl_matrix *U = gsl_matrix_calloc(MATRIX_SIZE, MATRIX_SIZE);

  for (size_t i = 0; i < MATRIX_SIZE; i++) {
    gsl_matrix_set(L, i, i, 1.);
  }

  
}

int main(void) {
  printf("Gauss.\n\n");

  // Alloc matrix`s
  gsl_matrix_const_view matrix_1v = gsl_matrix_const_view_array((const double *) matrix_1, MATRIX_SIZE, MATRIX_SIZE);
  gsl_vector_const_view vector_1v = gsl_vector_const_view_array(vector_1, MATRIX_SIZE);

  const gsl_matrix *matrix1 = &matrix_1v.matrix;
  const gsl_vector *vector1 = &vector_1v.vector;

  ulDecomposition(matrix1, vector1);
  // gsl_matrix *orig_matrix = gsl_matrix_alloc(MATRIX_SIZE, MATRIX_SIZE);

  // gsl_vector *vector1 = gsl_vector_alloc(MATRIX_SIZE);
  // gsl_vector *orig_vector = gsl_vector_alloc(MATRIX_SIZE);

  // gsl_vector *result1 = gsl_vector_alloc(MATRIX_SIZE);
  // gsl_vector *result2 = gsl_vector_alloc(MATRIX_SIZE);

  // Init matrix


  // Init vector
}

void gaussSeidelSolve() {

}
