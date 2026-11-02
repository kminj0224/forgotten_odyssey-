/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb108  Symbol: FindScriptb */

/* FindScriptb(int, int, int) */

void FindScriptb(int param_1,int param_2,int param_3)

{
  do {
    if (*(int *)(*(int *)(DAT_000cb134 + 0xcb114) + 0x1580) <= param_1) {
      return;
    }
    if ((uint)*(byte *)(*(int *)(DAT_000cb134 + 0xcb114) + param_1 + DAT_000cb138) == param_2) {
      if (param_3 == 0) {
        return;
      }
      param_3 = param_3 + -1;
    }
    param_1 = param_1 + 1;
  } while( true );
}


