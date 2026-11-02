/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb158  Symbol: FindScript */

/* FindScript(int, int) */

void FindScript(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(DAT_000cb188 + 0xcb164) + 0x1580) <= iVar1) {
      return;
    }
    if ((uint)*(byte *)(*(int *)(DAT_000cb188 + 0xcb164) + iVar1 + DAT_000cb18c) == param_1) {
      if (param_2 == 0) {
        return;
      }
      param_2 = param_2 + -1;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}


