uint32_t* sub_4B838(int param0, uint32_t* param1, char* __s2, int* param3) {
    uint32_t* result = *param1;
    if(param0 + 12 != result || *(param1 + SOCK_STREAM) != result) {
        while(SOCK_STREAM) {
            if(*(result + 4) == param3) {
                int v0 = strcmp((char*)(result + 6), __s2);
                if(v0 == 0) {
                    return result;
                }
            }
            if(*(param1 + SOCK_STREAM) == result) {
                goto loc_4B8A8;
            }
            else {
                result = *(result + SOCK_STREAM);
            }
        }
    }
loc_4B8A8:
    return NULL;
}
