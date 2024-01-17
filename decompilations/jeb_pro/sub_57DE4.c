int sub_57DE4(int* param0, char* __s1) {
    char* ptr0;
    char* ptr0;
    int result;
    if(__s1 != 0 && __s1[0] != 0) {
        int v0 = *param0;
        int v1 = *(param0 + SOCK_STREAM);
        if(v1 > 0) {
            int* ptr1 = (int*)(v0 - 4);
            result = 0;
            while(SOCK_STREAM) {
                int v2 = *(ptr1 + SOCK_STREAM);
                ++ptr1;
                if(v2 != 0) {
                    int v3 = strcasecmp(__s1, (char*)(v2 + 4));
                    if(v3 == 0) {
                        return result;
                    }
                }
                ++result;
                if(result != v1) {
                    continue;
                }
                ptr0 = __s1;
                result = -1;
                sub_5DF98(&g2, "src/level_list.c", 142, "str[%s] can\'t found in level list");
                return result;
            }
        }
        else {
            ptr0 = __s1;
            result = -1;
            sub_5DF98(&g2, "src/level_list.c", 142, "str[%s] can\'t found in level list");
        }
        return result;
    }
    ptr0 = __s1;
    sub_5DF98(&g2, "src/level_list.c", 132, "str is [%s], can\'t find level");
    return -1;
}
