size_t sub_4E540() {
    size_t result = sub_4D880(20);
    if(result != 0) {
        *(int*)result = SOCK_STREAM;
        *(int*)(result + 4) = SOCK_STREAM;
        *(int*)(result + 12) = 0;
        *(int*)(result + 8) = 8;
        size_t v0 = sub_4D880(32);
        *(size_t*)(result + 16) = v0;
        if(v0 == 0) {
            sub_4D898((void*)result);
            return 0;
        }
    }
    return result;
}
