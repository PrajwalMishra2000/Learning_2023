#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void readComplex(struct Complex* complex) {
    printf("Enter the real part: ");
    scanf("%f", &(complex->real));

    printf("Enter the imaginary part: ");
    scanf("%f", &(complex->imaginary));
}

void writeComplex(struct Complex complex) {
    printf("Complex number: %.2f + %.2fi\n", complex.real, complex.imaginary);
}

struct Complex addComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex sum;

    sum.real = complex1.real + complex2.real;
    sum.imaginary = complex1.imaginary + complex2.imaginary;

    return sum;
}

struct Complex multiplyComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex product;

    product.real = complex1.real * complex2.real - complex1.imaginary * complex2.imaginary;
    product.imaginary = complex1.real * complex2.imaginary + complex1.imaginary * complex2.real;

    return product;
}

int main() {
    struct Complex complex1, complex2;

    printf("Reading the first complex number:\n");
    readComplex(&complex1);

    printf("Reading the second complex number:\n");
    readComplex(&complex2);

    printf("\nComplex numbers entered:\n");
    writeComplex(complex1);
    writeComplex(complex2);

    struct Complex sum = addComplex(complex1, complex2);
    printf("\nSum of the two complex numbers:\n");
    writeComplex(sum);

    struct Complex product = multiplyComplex(complex1, complex2);
    printf("\nProduct of the two complex numbers:\n");
    writeComplex(product);

    return 0;
}
