uint32_t* sub_4BC44(int param0, char* __s2) {
    size_t v0 = strlen(__s2);
    int v1 = sub_4B2F4(__s2, (int)v0, gvar_5051C0);
    int v2 = *(int*)(param0 + 8);
    uint32_t* result = sub_4B838(param0, (uint32_t*)(((v2 < 32 ? ~(-1 << v2): -1) & v1) * 8 + *(int*)(param0 + 4)), __s2, (int*)v1);
    if(result != 0) {
        result = result[5];
    }
    return result;
}
