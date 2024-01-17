// Stale decompilation - Refresh this view to re-decompile this code
void* sub_43358(int* param0) {
    int __ptr;
    if(param0 != 0) {
        void* __ptr1 = (void*)sub_43AE8(*param0);
        if(__ptr1 != 0) {
            sub_44000(*(uint32_t**)((int)__ptr1 + 16), &__ptr);
            free(__ptr);
            sub_44074(*(void**)((int)__ptr1 + 16));
            sub_44000(*(uint32_t**)((int)__ptr1 + 20), &__ptr);
            free(__ptr);
            sub_44074(*(void**)((int)__ptr1 + 20));
            free(__ptr1);
        }
        return NULL;
    }
    return &g1F5;
}
