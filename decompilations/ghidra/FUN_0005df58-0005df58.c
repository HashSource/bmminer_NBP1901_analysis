
void FUN_0005df58(char *param_1)

{
  time_t tStack_38;
  tm tStack_34;
  
  time(&tStack_38);
  localtime_r(&tStack_38,&tStack_34);
  strftime(param_1,0x15,"%m-%d %T",&tStack_34);
  return;
}

