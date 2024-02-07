#include <stdio.h>
#include <stdlib.h>
// #include <sys/mman.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/uio.h>
#include <sys/ptrace.h>
#include <sys/user.h>
#include <asm/ptrace.h>
int main(int argc, char *argv[])
{
    pid_t pid = atoi(argv[1]);   // Put value of pid in this
    void *voltagePtr = 0x482A8C; // voltage address
    void *frequencyPtr = 0x482A6C;
    size_t bufferLength = 4; // Put size of buffer in this, aka size to read

    // Build iovec structs
    /*int freq[2] = { 0x21 ,0x02 } ;

        struct iovec local[1];
        local[0].iov_base = &freq;
        local[0].iov_len = 2;

        struct iovec remote[1];
        remote[0].iov_base = remotePtr;
        remote[0].iov_len = bufferLength;

    /*Nread will contain amount of bytes of data read

    //process_vm_readv(pid, local, 2, remote, 1, 0);
    process_vm_writev(pid, local, 1, remote, 1, 0);
    process_vm_readv(pid, local, 2, remote, 1, 0);
    struct user_regs_struct regs;
    ptrace(PTRACE_ATTACH,pid, NULL, NULL));
    regs.pc =
    /* To print the read data
    printf("%s", local[0].iov_base);)*/

    /* patch frequency and voltage*/

    int voltage = 1250;  // atoi(argv[2])
    int frequency = 500; // atoi(argv[3])

    long status = ptrace(PTRACE_ATTACH, pid, NULL, NULL);
    status = ptrace(PTRACE_PEEKDATA, pid, voltagePtr, NULL);
    printf("old voltage%d\n", status);

    status = ptrace(PTRACE_POKEDATA, pid, voltagePtr, voltage);
    status = ptrace(PTRACE_PEEKDATA, pid, voltagePtr, NULL);
    printf("new voltage%d\n", status);

    status = ptrace(PTRACE_ATTACH, pid, NULL, NULL);
    status = ptrace(PTRACE_PEEKDATA, pid, frequencyPtr, NULL);
    printf("old frequency%d\n", status);
    status = ptrace(PTRACE_POKEDATA, pid, frequencyPtr, frequency);
    status = ptrace(PTRACE_PEEKDATA, pid, frequencyPtr, NULL);
    printf("new frequency%d\n", status);

    status = ptrace(PTRACE_DETACH, pid, NULL, NULL);

    // struct pt_regs regs;
    // ptrace (PTRACE_ATTACH,pid,0,0);
    //  ptrace (PTRACE_GETREGS,pid,NULL,&regs);
    //   printf ("0x%x",regs.ARM_pc);
}
