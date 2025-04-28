#include <stdio.h>
#include <assert.h>

int divide(int a, int b) {
    // b'nin sýfýr olmasýna izin vermemeliyiz
    assert(b != 0); // Eðer b sýfýrsa, program burada duracak
    return a / b;
}

int main() {
    int result = divide(10, 0); // Burada hata olacak
    printf("Sonuc: %d\n", result);
    return 0;
}
