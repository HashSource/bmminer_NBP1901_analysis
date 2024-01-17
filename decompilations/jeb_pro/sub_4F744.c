size_t sub_4F744(int* param0) {
    if(param0 != 0 && (uint32_t)param0[0] <= 7) {
        jump *(void**)(param0[0] * 4 + (int)&gvar_4F760);
        if(param0[0] == 0) {
            int v0 = sub_4BE20(param0 + 2);
            if(v0 == 0) {
                return result;
            }
        loc_4F7CC:
            do {
                int __src = sub_4BEB0(v0);
                int v1 = sub_4BEB8((int*)v0);
                uint32_t v2 = (uint32_t)sub_4F744(v1);
                sub_4EE2C((int*)result, (char*)__src, v2);
                if(param0[0] == 0) {
                    v0 = sub_4BE98((int)(param0 + 2), (int*)v0);
                    if(v0 == 0) {
                        goto loc_4F788;
                    }
                    else {
                        goto loc_4F7CC;
                    }
                }
                return result;
            loc_4F854:
                do {
                    int v3 = sub_4F744((uint32_t)v5 > v4 ? *(int*)(v4 * 4 + param0[4]): 0);
                    sub_4F494((int*)result, v3);
                    if(param0[0] == SOCK_STREAM) {
                        v5 = param0[3];
                        ++v4;
                        if((uint32_t)v5 <= v4) {
                            goto loc_4F788;
                        }
                        goto loc_4F854;
                    }
                    return result;
                }
                while(SOCK_STREAM);
            }
            while(SOCK_STREAM);
        loc_4F788:
        }
        return result;
    }
    return 0;
}
