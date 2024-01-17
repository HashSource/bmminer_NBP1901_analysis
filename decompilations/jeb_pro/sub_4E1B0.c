size_t sub_4E1B0() {
    size_t result = sub_4D880(36);
    if(result != 0) {
        if(gvar_5051C0 == 0) {
            sub_4BF2C(0);
        }
        *(int*)(result + 4) = SOCK_STREAM;
        *(int*)result = 0;
        int v0 = sub_4B91C((uint32_t*)(result + 8));
        if(v0 != 0) {
            sub_4D898((void*)result);
            return 0;
        }
    }
    return result;
}
