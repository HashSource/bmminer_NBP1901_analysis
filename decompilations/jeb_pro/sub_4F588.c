size_t sub_4F588(int* param0) {
    if(param0 != 0 && (uint32_t)param0[0] <= 7) {
        jump *(void**)(param0[0] * 4 + (int)&gvar_4F5A4);
        if(param0[0] == 0) {
            int v0 = sub_4BE20(param0 + 2);
            if(v0 == 0) {
                return result;
            }
        loc_4F650:
            char* __src = (char*)sub_4BEB0(v0);
            while(__src != 0) {
                int v1 = sub_4BEB8((int*)(__src - 16));
                if(v1 == 0) {
                    return result;
                }
                if(*(int*)(v1 + 4) != -1) {
                    ++*(int*)(v1 + 4);
                    DMB();
                }
                sub_4EE2C((int*)result, __src, (uint32_t)v1);
                if(param0[0] == 0) {
                    v0 = sub_4BE98((int)(param0 + 2), (int*)(__src - 16));
                    if(v0 == 0) {
                        goto loc_4F5CC;
                    }
                    else {
                        goto loc_4F650;
                    }
                }
                else {
                    goto loc_4F5CC;
                }
            }
        }
    loc_4F5CC:
        return result;
    }
    return 0;
}
