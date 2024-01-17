// Stale decompilation - Refresh this view to re-decompile this code
int sub_48ABC() {
    int v0 = &loc_20000;
    int v1 = 0;
    pthread_mutex_lock(&g505164);
    int result = sub_493D0(&v1);
    int v2 = pthread_mutex_unlock(&g505164);
    if(result >= 0) {
        gvar_50517C = (uint32_t)result;
        gvar_505180 = 1;
        result = sub_48910(v2);
        if(result >= 0) {
            gvar_505184 = (uint32_t)result;
            result = 0;
        }
        else if(gvar_50517C == 0 || gvar_505180 == 0) {
            sub_488A4();
            return result;
        }
    }
    return result;
}
