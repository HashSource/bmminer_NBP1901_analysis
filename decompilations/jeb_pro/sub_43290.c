uint32_t* sub_43290(uint32_t* param0) {
    uint32_t* ptr0 = *(uint32_t**)(param0 + 5);
    uint32_t* ptr1 = **(uint32_t***)(param0 + 3);
    uint32_t* result = ptr0 == 0 ? sub_43EA4((int)ptr1, ptr1[0]): sub_43EF8(ptr1, ptr0);
    *(uint32_t**)(param0 + 5) = result;
    if(result != 0) {
        result = result[5];
    }
    return result;
}
