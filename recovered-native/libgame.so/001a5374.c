/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5374  Symbol: FUN_001a5374 */

void FUN_001a5374(code *param_1,code *param_2,int param_3,int *param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,uint param_10,int param_11,int param_12,
                 int param_13,int param_14,int param_15,char *param_16)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  size_t __maxlen;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  code *local_44;
  code *local_40;
  int local_3c;
  char *local_38;
  int local_34;
  
  iVar7 = DAT_001a562c + 0x1a538a;
  if ((param_8 == 1) && (**(int **)(iVar7 + DAT_001a5630) == 0)) {
    return;
  }
  local_40 = param_1;
  local_34 = param_3;
  if ((((((param_6 == 5) || (param_6 == 1)) || (param_6 == 3)) ||
       ((param_6 == 4 || (param_6 == 0x17)))) || (piVar9 = (int *)0x0, param_6 == 8)) &&
     (piVar9 = param_4, param_4 != (int *)0x0)) {
    if (param_1 == (code *)0x0) {
      iVar5 = *param_4;
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x6c) == DAT_001a5634)) {
        local_40 = *(code **)(iVar5 + 0x7c);
        goto LAB_001a53d8;
      }
      goto LAB_001a53de;
    }
  }
  else {
LAB_001a53d8:
    if (local_40 == (code *)0x0) {
LAB_001a53de:
      local_40 = **(code ***)(iVar7 + DAT_001a5638);
      if (local_40 != (code *)0x0) {
        local_34 = **(int **)(iVar7 + DAT_001a563c);
      }
    }
  }
  if (((param_6 == 0x17) &&
      (((param_2 == (code *)(iVar7 + DAT_001a5640) || (param_2 == (code *)(iVar7 + DAT_001a5644)))
       && (piVar9 = param_4, local_40 == (code *)0x0)))) &&
     (((param_4 != (int *)0x0 && (iVar5 = *param_4, iVar5 != 0)) &&
      (*(int *)(iVar5 + 0x6c) == DAT_001a5634)))) {
    local_40 = *(code **)(iVar5 + 0x7c);
  }
  if (param_7 == 0) {
    return;
  }
  if (param_16 == (char *)0x0) {
    local_38 = (char *)FUN_0019c904(iVar7 + DAT_001a5648);
  }
  else {
    local_38 = (char *)(***(code ***)(iVar7 + DAT_001a564c))(0x96);
    iVar5 = DAT_001a5650;
    if (local_38 != (char *)0x0) {
      iVar8 = -1;
      __maxlen = 0x96;
      do {
        iVar2 = vsnprintf(local_38,__maxlen,param_16,&stack0x00000030);
        if (iVar2 < (int)__maxlen) {
          if (-1 < iVar2) {
            bVar10 = iVar8 != iVar2;
            iVar8 = iVar2;
            if (bVar10) goto LAB_001a548a;
            break;
          }
LAB_001a5490:
          __maxlen = __maxlen + 100;
        }
        else {
          if (iVar2 < 0) goto LAB_001a5490;
LAB_001a548a:
          __maxlen = iVar2 + __maxlen + 1;
        }
        pcVar3 = (char *)(***(code ***)(iVar7 + iVar5))(local_38,__maxlen);
        if ((pcVar3 == (char *)0x0) || (local_38 = pcVar3, DAT_001a5654 < (int)__maxlen)) break;
      } while( true );
    }
  }
  if (piVar9 == (int *)0x0) {
    if ((param_9 == 0) && (param_5 != 0)) {
      if ((*(int *)(param_5 + 0x20) == 0) || (*(int *)(*(int *)(param_5 + 0x20) + 0x48) == 0)) {
        local_3c = 0;
      }
      else {
        local_3c = param_5;
      }
      for (iVar5 = 0; (param_5 != 0 && (iVar5 < 10)); iVar5 = iVar5 + 1) {
        if (*(int *)(param_5 + 4) == 1) goto LAB_001a5532;
        param_5 = *(int *)(param_5 + 0x14);
      }
      if (param_5 != 0) {
LAB_001a5532:
        if (((local_3c == 0) && (*(int *)(param_5 + 0x20) != 0)) &&
           (*(int *)(*(int *)(param_5 + 0x20) + 0x48) != 0)) {
          local_3c = param_5;
        }
      }
      if ((param_5 != 0) && (*(int *)(param_5 + 4) == 1)) {
        param_10 = (uint)*(ushort *)(param_5 + 0x38);
      }
    }
    else {
      local_3c = 0;
    }
    piVar6 = *(int **)(iVar7 + DAT_001a5658);
  }
  else {
    if (((param_9 == 0) && (iVar5 = piVar9[9], iVar5 != 0)) &&
       ((*(int *)(iVar5 + 4) != 0 ||
        ((piVar9[10] < 2 || (iVar5 = *(int *)((piVar9[10] + -2) * 4 + piVar9[0xc]), iVar5 != 0))))))
    {
      param_9 = *(int *)(iVar5 + 4);
      param_10 = *(uint *)(iVar5 + 0x1c);
      param_15 = *(int *)(iVar5 + 0x20);
    }
    piVar6 = piVar9 + 0x60;
    local_3c = 0;
  }
  FUN_001a4acc(piVar6);
  *piVar6 = param_6;
  piVar6[1] = param_7;
  piVar6[2] = (int)local_38;
  piVar6[3] = param_8;
  if (param_9 == 0) {
    if (local_3c != 0) {
      iVar5 = FUN_0019c904(*(undefined4 *)(*(int *)(local_3c + 0x20) + 0x48));
      piVar6[4] = iVar5;
      if (((iVar5 == 0) && (param_5 != 0)) && (*(int *)(param_5 + 0x20) != 0)) {
        param_9 = *(int *)(*(int *)(param_5 + 0x20) + 0x48);
        goto LAB_001a559a;
      }
    }
  }
  else {
LAB_001a559a:
    iVar5 = FUN_0019c904(param_9);
    piVar6[4] = iVar5;
  }
  piVar6[5] = param_10;
  if (param_11 != 0) {
    iVar5 = FUN_0019c904(param_11);
    piVar6[6] = iVar5;
  }
  if (param_12 != 0) {
    iVar5 = FUN_0019c904(param_12);
    piVar6[7] = iVar5;
  }
  if (param_13 != 0) {
    iVar5 = FUN_0019c904(param_13);
    piVar6[8] = iVar5;
  }
  piVar6[9] = param_14;
  piVar6[0xc] = param_5;
  iVar5 = DAT_001a5658;
  piVar6[10] = param_15;
  piVar4 = *(int **)(iVar7 + iVar5);
  piVar6[0xb] = (int)param_4;
  if (piVar6 != piVar4) {
    FUN_001a4a00(piVar6);
  }
  local_44 = param_2;
  if (piVar9 == (int *)0x0) {
    if (param_2 != (code *)0x0) goto LAB_001a5672;
  }
  else {
    if (param_2 != (code *)0x0) goto LAB_001a5672;
    if ((**(int **)(iVar7 + DAT_001a5638) == 0) && (iVar5 = *piVar9, iVar5 != 0)) {
      if (param_8 == 1) {
        local_44 = *(code **)(iVar5 + 0x54);
      }
      else {
        local_44 = *(code **)(iVar5 + 0x58);
      }
      local_34 = piVar9[1];
      goto LAB_001a5672;
    }
  }
  pcVar1 = **(code ***)(iVar7 + DAT_001a5638);
  if (**(code ***)(iVar7 + DAT_001a5638) == (code *)0x0) {
    local_44 = **(code ***)(iVar7 + DAT_001a56e8);
    pcVar1 = local_40;
  }
  local_40 = pcVar1;
  if (local_34 == 0) {
    local_34 = **(int **)(iVar7 + DAT_001a56ec);
  }
LAB_001a5672:
  if (local_40 == (code *)0x0) {
    if (local_44 != (code *)0x0) {
      if (((local_44 == (code *)(iVar7 + DAT_001a56f0)) ||
          (local_44 == (code *)(iVar7 + DAT_001a56f4))) ||
         ((local_44 == (code *)(iVar7 + DAT_001a56f8) ||
          (local_44 == (code *)(iVar7 + DAT_001a56fc))))) {
        local_44 = (code *)0x0;
        local_34 = 0;
      }
      else if ((local_44 != *(code **)(iVar7 + DAT_001a5700)) &&
              (local_44 != (code *)(iVar7 + DAT_001a5704))) {
        (*local_44)(local_34,iVar7 + DAT_001a5708,local_38);
        return;
      }
      FUN_001a4b74(piVar6,piVar9,local_38,local_44,local_34);
    }
  }
  else {
    (*local_40)(local_34,piVar6);
  }
  return;
}


