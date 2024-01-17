char* sub_57A8C(int* param0, char* param1) {
    char* result;
    if(param0 != 0) {
        int* ptr0 = param0;
        result = sub_5DF98(param1, "src/level_list.c", 26, "--level_list[%p]--");
        int v0 = *(param0 + SOCK_STREAM);
        if(v0 > 0) {
            int v1 = 0;
            do {
                result = *(char**)(v1 * 4 + *param0);
                if(result != 0) {
                    result = sub_5F3F8((int*)result, param1);
                    v0 = *(param0 + SOCK_STREAM);
                }
                ++v1;
            }
            while(v0 > v1);
        }
        return result;
    }
    return sub_5DF98(&g2, "src/level_list.c", 25, "levels is null or 0");
}
