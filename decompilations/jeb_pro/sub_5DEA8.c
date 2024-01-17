int sub_5DEA8(uint32_t* param0, int* param1) {
    int result1;
    int v0;
    int result = *(param1 + 4);
    if(result == 0) {
        int v1 = *(int*)(param0 + 2);
        sub_5FADC(*param1, v1);
        param1 = v0 + SOCK_STREAM;
        if((uint32_t)param1 < (uint32_t)v1) {
            int* ptr0 = *(param0 + SOCK_STREAM);
            result = *(int*)((int)(int*)((int)param1 * 4) + (int)ptr0);
            int* ptr1 = (int*)((int)(int*)((int)param1 * 4) + (int)ptr0);
            if(result == 0) {
                do {
                    param1 = (char*)param1 + SOCK_STREAM;
                    if((uint32_t)param1 >= (uint32_t)v1) {
                        return result;
                    }
                    result1 = *(ptr1 + SOCK_STREAM);
                    ++ptr1;
                }
                while(result1 == 0);
                return result1;
            }
        }
    }
    return result;
}
