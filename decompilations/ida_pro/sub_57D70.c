int __fastcall sub_57D70(int *a1, int arg)
{
  int v4; // r3
  bool v5; // cc
  int v6; // r3

  if ( a1[1] > arg && *(_DWORD *)(*a1 + 4 * arg) )
    return *(_DWORD *)(*a1 + 4 * arg);
  sub_5DF98(
    2,
    "src/level_list.c",
    119,
    "l[%d] not in (0,254), or has no level defined,see configure file define, set to UNKOWN",
    arg);
  v4 = a1[1];
  v5 = v4 <= 254;
  if ( v4 <= 254 )
    v6 = 0;
  else
    v6 = *a1;
  if ( !v5 )
    return *(_DWORD *)(v6 + 1016);
  return v6;
}
