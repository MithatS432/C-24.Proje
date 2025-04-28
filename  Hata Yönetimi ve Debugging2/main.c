#include <stdio.h>
#include <assert.h>

int divide(int a, int b) {
    // b'nin s�f�r olmas�na izin vermemeliyiz
    assert(b != 0); // E�er b s�f�rsa, program burada duracak
    return a / b;
}

int main() {
    int result = divide(10, 0); // Burada hata olacak
    printf("Sonuc: %d\n", result);
    return 0;
}
