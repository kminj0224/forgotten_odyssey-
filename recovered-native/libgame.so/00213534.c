/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00213534  Symbol: __gcc_personality_v0 */

undefined4 __gcc_personality_v0(uint param_1,uint param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c [2];
  char *local_24;
  char *local_20;
  char local_1c;
  char local_1b;
  
  if ((param_1 & 3) == 1) {
    local_34 = param_2;
    _Unwind_VRS_Set(param_3,0,0xc,0,&local_34);
    pcVar2 = (char *)_Unwind_GetLanguageSpecificData(param_3);
    if (pcVar2 != (char *)0x0) {
      local_30 = param_3;
      if (param_3 != 0) {
        local_30 = _Unwind_GetRegionStart();
      }
      pcVar6 = pcVar2 + 1;
      iVar4 = local_30;
      if (*pcVar2 != -1) {
        pcVar6 = (char *)FUN_00213348(param_3,*pcVar2,pcVar6,local_2c);
        iVar4 = local_2c[0];
      }
      local_2c[0] = iVar4;
      pcVar2 = pcVar6 + 1;
      local_1c = *pcVar6;
      local_24 = (char *)0x0;
      if (local_1c != -1) {
        uVar3 = 0;
        do {
          pcVar2 = pcVar6;
          local_24 = (char *)((uint)local_24 | ((byte)pcVar2[1] & 0x7f) << (uVar3 & 0xff));
          uVar3 = uVar3 + 7;
          pcVar6 = pcVar2 + 1;
        } while ((pcVar2[1] & 0x80U) != 0);
        pcVar2 = pcVar2 + 2;
        local_24 = pcVar2 + (int)local_24;
      }
      local_1b = *pcVar2;
      uVar7 = 0;
      uVar3 = 0;
      do {
        pcVar6 = pcVar2;
        uVar7 = uVar7 | ((byte)pcVar6[1] & 0x7f) << (uVar3 & 0xff);
        uVar3 = uVar3 + 7;
        pcVar2 = pcVar6 + 1;
      } while ((pcVar6[1] & 0x80U) != 0);
      local_20 = pcVar6 + 2 + uVar7;
      _Unwind_VRS_Get(param_3,0,0xf,0,&local_34);
      uVar3 = (local_34 & 0xfffffffe) - 1;
      pcVar2 = pcVar6 + 2;
      do {
        if (local_20 <= pcVar2) goto LAB_0021370c;
        uVar5 = FUN_00213348(0,local_1b,pcVar2,&local_3c);
        uVar5 = FUN_00213348(0,local_1b,uVar5,&local_38);
        pcVar6 = (char *)FUN_00213348(0,local_1b,uVar5,&local_34);
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 < '\0');
        pcVar2 = local_20;
      } while ((uVar3 < (uint)(local_3c + local_30)) ||
              (pcVar2 = pcVar6, (uint)(local_3c + local_30 + local_38) <= uVar3));
      if ((local_34 != 0) && (uVar3 = local_34 + local_2c[0], uVar3 != 0)) {
        local_34 = param_2;
        _Unwind_VRS_Set(param_3,0,0,0,&local_34);
        local_34 = 0;
        _Unwind_VRS_Set(param_3,0,1,0,&local_34);
        _Unwind_VRS_Get(param_3,0,0xf,0,&local_34);
        local_34 = local_34 & 1 | uVar3;
        _Unwind_VRS_Set(param_3,0,0xf,0,&local_34);
        return 7;
      }
    }
  }
LAB_0021370c:
  iVar4 = __gnu_unwind_frame(param_2,param_3);
  if (iVar4 == 0) {
    uVar5 = 8;
  }
  else {
    uVar5 = 9;
  }
  return uVar5;
}


