void* sub_55BA0(int* param0) {
    if(param0 != 0) {
        int v0 = *(param0 + 0x113);
        if(v0 != 0) {
            void* __ptr1 = *(void**)(param0 + 0x112);
            if(__ptr1 == 0) {
                *(param0 + 0x112) = v0;
                *(void**)(param0 + 0x113) = NULL;
            }
            else {
                sub_5D580(__ptr1);
                int v1 = *(param0 + 0x113);
                *(param0 + 0x113) = 0;
                *(param0 + 0x112) = v1;
            }
            int v2 = *(param0 + 267);
            int v3 = *(param0 + 268);
            int v4 = *(param0 + 269);
            *(param0 + 258) = *(int*)(param0 + 266);
            *(param0 + 259) = v2;
            *(param0 + 260) = v3;
            *(param0 + 261) = v4;
            int v5 = *(param0 + 271);
            int v6 = *(param0 + 0x110);
            int v7 = *(param0 + 0x111);
            *(param0 + 262) = *(param0 + 270);
            *(param0 + 263) = v5;
            *(param0 + 264) = v6;
            *(param0 + 265) = v7;
            return memset((void*)(param0 + 266), 0, 32);
        }
        return sub_5DF98(&g1, "src/category.c", 196, "a_category->fit_rules_backup in NULL, never update before");
    }
    return sub_5DF98(&g2, "src/category.c", 194, "a_category is null or 0");
}
