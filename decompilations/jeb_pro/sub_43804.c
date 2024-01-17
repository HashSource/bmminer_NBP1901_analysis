uint32_t* sub_43804(uint32_t* param0, int param1) {
    int __ptr;
    uint32_t* result = *param0;
    if(param0 + SOCK_STREAM != result) {
    loc_43840:
        do {
            sub_44000(*(uint32_t**)(result + 4), &__ptr);
            int v0 = *(param0 + 9)(param1, (int)__ptr);
            free(__ptr);
            if(v0 != 0) {
                uint32_t* ptr0 = *result;
                result = *(result + SOCK_STREAM);
                if(v0 < 0) {
                    result = ptr0;
                }
                if(param0 + SOCK_STREAM == result) {
                    goto loc_43880;
                }
                else {
                    goto loc_43840;
                }
            }
            return result;
        }
        while(SOCK_STREAM);
    }
loc_43880:
    return NULL;
}
