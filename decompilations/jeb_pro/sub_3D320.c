void* sub_3D320(char* __s1, char* param1) {
    int v0 = strcasecmp(__s1, &g689E4);
    if(v0 != 0) {
        int v1 = strcasecmp(__s1, "true");
        if(v1 != 0) {
            int v2 = strcasecmp(__s1, "no");
            if(v2 != 0) {
                int v3 = strcasecmp(__s1, "false");
                if(v3 != 0) {
                    return sub_3DE58(__s1);
                }
            }
            *param1 = 0;
            return NULL;
        }
    }
    *param1 = SOCK_STREAM;
    return NULL;
}
