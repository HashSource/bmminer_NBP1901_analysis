void __fastcall sub_2BC2C(int a1, const char **a2)
{
  int v3; // [sp+Ch] [bp-80Ch] BYREF
  char s[2056]; // [sp+10h] [bp-808h] BYREF

  v3 = a1;
  sub_3DC80((int)&off_7E618, (int)"Options for both config file and command line");
  sub_3DC80((int)&off_7EAC0, (int)"Options for command line only");
  sub_3DD54(&v3, a2, (void (*)(const char *, ...))sub_282E4);
  if ( v3 != 1 )
  {
    strcpy(s, "Unexpected extra commandline arguments");
    logMessage(3, s, 1);
  }
  sub_29458();
  if ( dword_80970 )
    sub_2A688();
  if ( dword_80968 )
  {
    byte_482130 = 1;
    strcpy(byte_482158, (const char *)dword_80968);
    if ( dword_8096C )
      strcpy((char *)&word_482138, (const char *)dword_8096C);
    else
      strcpy((char *)&word_482138, "a+");
    if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
    {
      snprintf(s, 0x800u, "Log file path: %s Open flag: %s", byte_482158, (const char *)&word_482138);
      logMessage(3, s, 0);
    }
  }
}
