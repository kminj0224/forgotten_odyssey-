/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c334  Symbol: FUN_0019c334 */

undefined4 FUN_0019c334(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    if (param_2 != param_3) {
      if ((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) goto LAB_0019c390;
      iVar5 = 0;
      do {
        pcVar1 = param_3 + iVar5;
        if (*pcVar1 != param_2[iVar5]) goto LAB_0019c390;
        iVar5 = iVar5 + 1;
      } while (*pcVar1 != '\0');
    }
LAB_0019c394:
    uVar4 = 1;
  }
  else {
    if ((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) {
      do {
        cVar2 = *param_3;
        if (cVar2 != *param_1) goto LAB_0019c390;
        param_3 = param_3 + 1;
      } while ((cVar2 != '\0') && (param_1 = param_1 + 1, *param_1 != '\0'));
      if (*param_3 == ':') {
        iVar5 = 0;
        do {
          iVar3 = iVar5 + 1;
          if (param_3[iVar3] != param_2[iVar5]) goto LAB_0019c390;
          iVar5 = iVar5 + 1;
        } while (param_3[iVar3] != '\0');
        goto LAB_0019c394;
      }
    }
LAB_0019c390:
    uVar4 = 0;
  }
  return uVar4;
}


