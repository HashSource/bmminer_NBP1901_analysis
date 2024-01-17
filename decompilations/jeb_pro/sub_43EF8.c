uint32_t* sub_43EF8(uint32_t* param0, uint32_t* param1) {
    uint32_t* result;
    uint32_t* result1 = *(param1 + SOCK_STREAM);
    if(param0 + SOCK_STREAM == result1) {
        result = *param0;
        for(uint32_t* i = *(result + SOCK_STREAM); i != param0 + SOCK_STREAM; i = *(result + SOCK_STREAM)) {
            result = i;
        }
        if(param1 == result) {
            return NULL;
        }
        result = *(param1 + 2);
        if(param0 + SOCK_STREAM == result) {
            return param0 + SOCK_STREAM;
        }
        if(*(result + SOCK_STREAM) != param1) {
            return result;
        }
        while(SOCK_STREAM) {
            result1 = *(result + 2);
            if(param0 + SOCK_STREAM != result1) {
                uint32_t* ptr0 = result;
                result = result1;
                if(*(result1 + SOCK_STREAM) != ptr0) {
                    return result1;
                }
                continue;
            }
            return result1;
        }
    }
    else {
        while(SOCK_STREAM) {
            result = *result1;
            if(param0 + SOCK_STREAM == result) {
                return result1;
            }
            result1 = result;
        }
    }
    return result1;
}
