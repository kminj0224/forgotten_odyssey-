/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5234  Symbol: FUN_001a5234 */

void FUN_001a5234(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t __maxlen;
  bool bVar6;
  char *local_3c;
  int local_38;
  int local_34;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = DAT_001a534c + 0x1a5242;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (param_1 == 0) {
    local_38 = 0;
    iVar4 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x24);
    if (((iVar5 == 0) || (*(int *)(iVar5 + 4) != 0)) || (*(int *)(param_1 + 0x28) < 2)) {
      local_38 = 0;
      iVar4 = iVar5;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x30) + (*(int *)(param_1 + 0x28) + -2) * 4);
      local_38 = iVar5;
    }
    FUN_001a4880(iVar4);
  }
  (***(code ***)(iVar3 + DAT_001a5350))
            (**(undefined4 **)(iVar3 + DAT_001a5354),iVar3 + DAT_001a5358);
  local_3c = (char *)(***(code ***)(iVar3 + DAT_001a535c))(0x96);
  iVar5 = DAT_001a5360;
  if (local_3c == (char *)0x0) {
LAB_001a52f0:
    (***(code ***)(iVar3 + DAT_001a5350))
              (**(undefined4 **)(iVar3 + DAT_001a5354),iVar3 + DAT_001a5368,local_3c);
    if (local_3c != (char *)0x0) {
      (***(code ***)(iVar3 + DAT_001a536c))(local_3c);
    }
    if ((param_1 != 0) && (FUN_001a49a8(iVar4), local_38 != 0)) {
      FUN_001a4880(local_38);
      (***(code ***)(iVar3 + DAT_001a5350))
                (**(undefined4 **)(iVar3 + DAT_001a5354),iVar3 + DAT_001a5370);
      FUN_001a49a8(local_38);
    }
    return;
  }
  local_34 = -1;
  __maxlen = 0x96;
  do {
    iVar1 = vsnprintf(local_3c,__maxlen,param_2,&uStack_8);
    if (iVar1 < (int)__maxlen) {
      if (iVar1 < 0) goto LAB_001a52d6;
      bVar6 = local_34 == iVar1;
      local_34 = iVar1;
      if (bVar6) goto LAB_001a52f0;
LAB_001a52d0:
      __maxlen = iVar1 + __maxlen + 1;
    }
    else {
      if (-1 < iVar1) goto LAB_001a52d0;
LAB_001a52d6:
      __maxlen = __maxlen + 100;
    }
    pcVar2 = (char *)(***(code ***)(iVar3 + iVar5))(local_3c,__maxlen);
    if ((pcVar2 == (char *)0x0) || (local_3c = pcVar2, DAT_001a5364 < (int)__maxlen))
    goto LAB_001a52f0;
  } while( true );
}


