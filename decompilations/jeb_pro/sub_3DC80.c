int sub_3DC80(int param0, int param1) {
    int v0;
    int* ptr0 = (int*)param0;
    uint32_t v1 = gvar_99EE24;
    if(param1 == 0) {
        v0 = *(int*)(param0 + 4);
        if(v0 == 16) {
            return param0;
        }
    loc_3DCE0:
        do {
            if(v0 == 8) {
                param0 = sub_3DC80(ptr0[0], ptr0[6]);
            }
            else {
                sub_3D8F4((uint32_t*)ptr0);
                param0 = sub_3DA68(ptr0);
            }
            ptr0 += 7;
            v0 = ptr0[SOCK_STREAM];
        }
        while(v0 != 16);
        if(param1 != 0) {
        loc_3DD0C:
            param0 = v1 * 7;
            *(uint32_t*)(param0 * 4 + gvar_99EE1C + 20) = gvar_99EE24 - v1;
        }
    }
    else {
        int v2 = 0;
        int v3 = 0;
        int v4 = 0;
        int v5 = 0;
        int v6 = 0;
        int v7 = param1;
        int v8 = 8;
        sub_3DA68(&v2);
        v0 = ptr0[SOCK_STREAM];
        if(v0 == 16) {
            goto loc_3DD0C;
        }
        else {
            goto loc_3DCE0;
        }
    }
    return param0;
}
