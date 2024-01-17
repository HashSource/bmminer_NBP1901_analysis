int sub_324A8() {
    int __dest;
    sub_3FE98(&__dest);
    int result = sub_31720((int)&__dest);
    int v0 = __dest;
    if(v0 != 0) {
        void* ptr0 = &__dest;
        int v1 = 0;
        do {
            if(*(int*)((int)ptr0 + 8) != 0) {
                int* ptr1 = (int*)((int)ptr0 + 8);
                int v2 = 0;
                do {
                    int v3 = *(ptr1 + SOCK_STREAM);
                    ++ptr1;
                    result = sub_1E200(v3, SOCK_STREAM);
                    ++v2;
                }
                while(*(int*)((int)ptr0 + 8) > v2);
                v0 = __dest;
            }
            ++v1;
            ptr0 = (int)ptr0 + 72;
        }
        while(v0 > v1);
    }
    return result;
}
