#include <stdio.h>

void oddeven(void *arr, int size, int n, int (*comp)(const void *, const void *));

int
main()
{
        int arr[5] = {0, 1, 2, 3, 4};

}

#include <stdint.h>
static void swap(void *f_object, void *s_object, size_t size)
{
        char *f_ptr = (char *) f_object;
        char *s_ptr = (char *) s_object;

        while (size >= 8) { 
                       uint64_t temp = *((uint64_t *)f_ptr);
                *((uint64_t *)f_ptr) = *((uint64_t *)s_ptr);
                *((uint64_t *)s_ptr) = temp;

                f_ptr += 8;
                s_ptr += 8;
                size -= 8;
        }

        if (size >= 4) {
                       uint32_t temp = *((uint32_t *)f_ptr);
                *((uint32_t *)f_ptr) = *((uint32_t *)s_ptr);
                *((uint32_t *)s_ptr) = temp;

                f_ptr += 4;
                s_ptr += 4;
                size -= 4;
        }

        if (size >= 2) {
                       uint16_t temp = *((uint16_t *)f_ptr);
                *((uint16_t *)f_ptr) = *((uint16_t *)s_ptr);
                *((uint16_t *)s_ptr) = temp;

                f_ptr += 2;
                s_ptr += 2;
                size -= 2;
        }

        if (size == 1) {
                       uint16_t temp = *((uint16_t *)f_ptr);
                *((uint16_t *)f_ptr) = *((uint16_t *)s_ptr);
                *((uint16_t *)s_ptr) = temp;

                f_ptr += 1;
                s_ptr += 1;
                size -= 1;
        }
}

void oddeven(void *arr, int size, int n, int (*comp)(const void *, const void *)) {
        char *tmp = (char *) arr;
        for (int i = 0; i < n - 1; i += 2) {
                if (comp(tmp + size*(i), tmp + size*(i+1)) < 0) {
                        swap(tmp + size*(i), tmp + size*(i+1), size);
                }
        }
}
