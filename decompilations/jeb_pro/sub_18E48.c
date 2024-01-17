int sub_18E48(int param0, int param1, int param2) {
    if((param1 & 0x3) != 0) {
        if(gvar_7EB9C <= 3) {
            return param0;
        }
        int __ptr1 = 0x52504545;
        int v0 = 1998605647;
        int v1 = 1702127986;
        int v2 = 0x74616420;
        int v3 = 1936269409;
        int v4 = 1953459744;
        int v5 = 0x2d323320;
        int v6 = 544500066;
        int v7 = 0x67696c61;
        int v8 = 744777070;
        int v9 = 1229014560;
        int v10 = 1313153100;
        int v11 = 0x45442f43;
        int v12 = 663875;
        return sub_2E584(3, &__ptr1, 0);
    }
    if(param2 == 0) {
        return sub_18D98(param0, param1, SOCK_STREAM);
    }
    return sub_18CE8(param0, param1, SOCK_STREAM);
}
