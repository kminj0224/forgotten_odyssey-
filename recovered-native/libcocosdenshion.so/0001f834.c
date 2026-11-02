/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001f834  Symbol: __cxa_demangle */

undefined4 * __cxa_demangle(int param_1,undefined4 *param_2,char **param_3,undefined4 *param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *__src;
  undefined4 *puVar4;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  if (param_1 == 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0xfffffffd;
      param_4 = (undefined4 *)0x0;
    }
  }
  else {
    local_28 = (undefined4 *)(1 - (int)param_3);
    if ((char **)0x1 < param_3) {
      local_28 = (undefined4 *)0x0;
    }
    if (param_2 == (undefined4 *)0x0) {
      local_28 = (undefined4 *)0x0;
    }
    if (local_28 == (undefined4 *)0x0) {
      local_24 = local_28;
      local_20 = local_28;
      local_1c = local_28;
      iVar1 = FUN_0001f5b0(param_1,DAT_0001f970 + 0x1f898,&local_28);
      __src = local_28;
      if (iVar1 == 0) {
        free(local_28);
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = local_20;
        if (local_1c != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x1;
        }
        if (local_28 != (undefined4 *)0x0) {
          if (param_2 == (undefined4 *)0x0) {
            if (param_3 != (char **)0x0) {
              *param_3 = (char *)puVar4;
            }
          }
          else {
            pcVar2 = (char *)strlen((char *)local_28);
            if (pcVar2 < *param_3) {
              strcpy((char *)param_2,(char *)__src);
              free(__src);
              __src = param_2;
            }
            else {
              free(param_2);
              *param_3 = (char *)puVar4;
            }
          }
          if (param_4 == (undefined4 *)0x0) {
            return __src;
          }
          *param_4 = 0;
          return __src;
        }
      }
      if (param_4 != (undefined4 *)0x0) {
        if (puVar4 == (undefined4 *)0x1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = 0xfffffffe;
        }
        *param_4 = uVar3;
        param_4 = (undefined4 *)0x0;
      }
    }
    else if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0xfffffffd;
      param_4 = (undefined4 *)0x0;
    }
  }
  return param_4;
}


