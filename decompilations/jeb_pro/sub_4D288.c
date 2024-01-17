// Stale decompilation - Refresh this view to re-decompile this code
void* sub_4D288(int param0, int param1, int i) {
    *(int*)(param0 + 56) = 0;
    sub_4C5CC(param0, i);
    if((param1 & 0x4) != 0 || (*(int*)(param0 + 60) & 0xffffffdf) == 91) {
        void* result = (void*)sub_4CDE4(param0, param1, i);
        if(result != 0) {
            if((param1 & 0x2) == 0) {
                sub_4C5CC(param0, i);
                if(*(int*)(param0 + 60) != 0) {
                    sub_4C0CC(i, param0, 7, "end of file expected");
                    if(*(int*)((int)result + 4) != -1) {
                        DMB();
                        i = *(int*)((int)result + 4) - SOCK_STREAM;
                        --*(int*)((int)result + 4);
                        if(i == 0) {
                            sub_4EB6C(result);
                            return NULL;
                        }
                    }
                    return NULL;
                }
            }
            if(i != 0) {
                *(int*)(i + 8) = *(int*)(param0 + 36);
            }
            return result;
        }
        return NULL;
    }
    sub_4C0CC(i, param0, 8, "\'[\' or \'{\' expected");
    return (void*)(param1 & 0x4);
}
