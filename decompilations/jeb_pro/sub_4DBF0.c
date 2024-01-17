int sub_4DBF0(char* __s, size_t __maxlen) {
    void* __dest;
    int v0 = snprintf(__s, __maxlen, "%.*g");
    if((uint32_t)v0 < __maxlen) {
        int result = v0;
        lconv* ptr0 = localeconv();
        int __c = (int)ptr0->decimal_point[0];
        if(__c != 46) {
            char* ptr1 = strchr(__s, __c);
            if(ptr1 != 0) {
                ptr1[0] = '.';
            }
        }
        char* ptr2 = strchr(__s, 46);
        char* ptr3 = strchr(__s, 101);
        if(ptr2 == 0 && ptr3 != 0) {
            goto loc_4DC80;
        }
        else if(ptr2 == 0 && (uint32_t)(result + 3) >= __maxlen) {
            return -1;
        }
        else if(ptr2 == 0) {
            __s[result] = '.';
            char* ptr4 = &__s[result];
            result += 2;
            *(ptr4 + SOCK_STREAM) = 48;
            __s[result] = 0;
            ptr3 = strchr(__s, 101);
        }
        if(ptr3 != 0) {
        loc_4DC80:
            void* __src = ptr3 + 2;
            int v1 = (uint32_t)ptr3[2];
            if(ptr3[SOCK_STREAM] != 45) {
                __dest = ptr3 + SOCK_STREAM;
                if(v1 == 48) {
                    goto loc_4DC9C;
                }
                else {
                    goto loc_4DCAC;
                }
            }
            else if(v1 == 48) {
                __dest = __src;
            loc_4DC9C:
                do {
                    v1 = (uint32_t)*(char*)((int)__src + SOCK_STREAM);
                    __src = (int)__src + SOCK_STREAM;
                }
                while(v1 == 48);
            loc_4DCAC:
                if(__src != __dest) {
                    size_t __n = (size_t)(result - (int)(int*)((int)__src - (int)__s));
                    result -= (int*)((int)__src - (int)__dest);
                    memmove(__dest, __src, __n);
                }
            }
        }
        return result;
    }
    return -1;
}
