
double pi() {
    int num_terms = 1000000;  // Number of terms to use in the series
    double pi_approx = 0.0;
    int sign = 1;  // To alternate between adding and subtracting terms
    double divisor = 1.0;

    for (int i = 0; i < num_terms; i++) {
        pi_approx += sign * (1.0 / divisor);
        sign = -sign;  // Change sign for the next term
        divisor += 2.0;  // Increment the divisor by 2 for the next term
    }

    // Multiply by 4 to get the value of π
    pi_approx *= 4.0;

    // printf("Approximation of π using %d terms: %lf\n", num_terms, pi_approx);

    return pi_approx;
}
