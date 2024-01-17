uint32_t* sub_2D9D4(void* param0, int param1, int param2, int param3) {
    uint32_t* result = *(uint32_t*)((int)param0 + 12);
    if(result == 0) {
        if(*(char*)((int)param0 + 4) != 0) {
            return NULL;
        }
        sub_2D340(param0, param1, param2, param3);
        result = *(uint32_t*)((int)param0 + 12);
        if(result == 0) {
            return NULL;
        }
    }
    int* ptr0 = *(result + 2);
    *(uint32_t*)((int)param0 + 12) = *(result + 2);
    if(ptr0 != 0) {
        *(ptr0 + SOCK_STREAM) = 0;
    }
    else if(*(char*)((int)param0 + 44) != 0) {
        *(uint32_t*)((int)param0 + 16) = NULL;
    }
    *(result + 2) = NULL;
    *(result + SOCK_STREAM) = NULL;
    --*(int*)((int)param0 + 28);
    return result;
}
