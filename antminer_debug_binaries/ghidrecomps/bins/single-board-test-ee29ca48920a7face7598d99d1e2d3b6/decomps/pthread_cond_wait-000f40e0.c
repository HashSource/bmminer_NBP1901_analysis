
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* pthread_cond_wait@@GLIBC_2.4 */
  halt_baddata();
}

