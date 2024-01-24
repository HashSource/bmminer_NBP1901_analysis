int sub_25284()
{
  int result; // r0
  pthread_t v1; // [sp+0h] [bp-830h] BYREF
  pthread_attr_t attr; // [sp+4h] [bp-82Ch] BYREF
  char s[2056]; // [sp+28h] [bp-808h] BYREF

  if ( loggingDebug || loggingVerbose || loggingThreshold > 4 )
  {
    strcpy(s, "start the http log.\n");
    logMessage(5, s, 0);
  }
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  result = pthread_create(&v1, &attr, (void *(*)(void *))sub_24F04, 0);
  if ( loggingDebug || loggingVerbose || loggingThreshold > 4 )
  {
    snprintf(s, 0x800u, "httpListenThread start ret=%d", result);
    return logMessage(5, s, 0);
  }
  return result;
}
