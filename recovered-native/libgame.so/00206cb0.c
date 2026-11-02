/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00206cb0  Symbol: FUN_00206cb0 */

wint_t * FUN_00206cb0(int param_1,wint_t *param_2,wint_t *param_3,undefined param_4,
                     undefined *param_5)

{
  undefined uVar1;
  int iVar2;
  wint_t __c;
  wint_t *pwVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (param_2 < param_3) {
      do {
        pwVar3 = param_2 + 1;
        iVar2 = wctob(*param_2);
        uVar1 = (char)iVar2;
        if (iVar2 == -1) {
          uVar1 = param_4;
        }
        *param_5 = uVar1;
        param_2 = pwVar3;
        param_5 = param_5 + 1;
      } while (pwVar3 < param_3);
    }
  }
  else if (param_2 < param_3) {
    do {
      pwVar3 = param_2 + 1;
      __c = *param_2;
      if (__c < 0x80) {
        *param_5 = *(undefined *)(param_1 + __c + 0xd);
      }
      else {
        iVar2 = wctob(__c);
        uVar1 = (char)iVar2;
        if (iVar2 == -1) {
          uVar1 = param_4;
        }
        *param_5 = uVar1;
      }
      param_2 = pwVar3;
      param_5 = param_5 + 1;
    } while (pwVar3 < param_3);
  }
  return param_3;
}


