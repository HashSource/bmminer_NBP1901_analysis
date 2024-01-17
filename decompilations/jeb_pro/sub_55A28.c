int sub_55A28(char* __s2, int* param1) {
    if(__s2 != 0) {
        if(param1 != 0) {
            void* __ptr1 = (void*)*(int*)&__s2[1100];
            if(__ptr1 != 0) {
                sub_5D580(__ptr1);
            }
            char v0 = *(int*)&__s2[1036];
            char v1 = *(int*)&__s2[1040];
            char v2 = *(int*)&__s2[0x414];
            char v3 = *(int*)&__s2[0x448];
            *(int*)&__s2[1064] = *(int*)&__s2[1032];
            *(int*)&__s2[1068] = v0;
            char v4 = *(int*)&__s2[1048];
            *(int*)&__s2[1072] = v1;
            *(int*)&__s2[0x434] = v2;
            char v5 = *(int*)&__s2[1052];
            char v6 = *(int*)&__s2[1056];
            char v7 = *(int*)&__s2[0x424];
            *(int*)&__s2[1100] = v3;
            *(int*)&__s2[1080] = v4;
            *(int*)&__s2[0x448] = 0;
            *(int*)&__s2[1084] = v5;
            *(int*)&__s2[0x440] = v6;
            *(int*)&__s2[0x444] = v7;
            int v8 = sub_555B0(__s2, param1, (uint32_t*)(param1 + SOCK_STREAM));
            if(v8 == 0) {
                return 0;
            }
            sub_5DF98(&g2, "src/category.c", 163, "zlog_category_obtain_rules fail");
            *(int*)&__s2[0x448] = 0;
            return -1;
        }
        sub_5DF98(&g2, "src/category.c", 151, "new_rules is null or 0");
        return -1;
    }
    sub_5DF98(&g2, "src/category.c", 150, "a_category is null or 0");
    return -1;
}
