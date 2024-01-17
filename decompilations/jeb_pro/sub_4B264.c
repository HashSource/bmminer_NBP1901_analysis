int sub_4B264(int* param0, char* __filename, int param2) {
    FILE* __stream = fopen64(__filename, "\n");
    if(__stream != 0) {
        int result = sub_4B130(param0, &sub_4A540, (int)__stream, param2);
        int v0 = fclose(__stream);
        if(v0 == 0) {
            return result;
        }
    }
    return -1;
}
