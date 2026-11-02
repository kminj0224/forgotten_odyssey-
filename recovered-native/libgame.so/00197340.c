/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00197340  Symbol: FUN_00197340 */

undefined4 FUN_00197340(void **param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  code **ppcVar5;
  void **ppvVar6;
  int iVar7;
  
  iVar7 = DAT_001974b0 + 0x19734c;
  if (param_1 != (void **)0x0) {
    memset(param_1,0,0x1c0);
    pvVar3 = (void *)FUN_0019d720();
    param_1[0x4a] = pvVar3;
    if (pvVar3 != (void *)0x0) {
      ppcVar5 = *(code ***)(iVar7 + DAT_001974b8);
      pvVar3 = (void *)(**ppcVar5)(0x80);
      if (pvVar3 != (void *)0x0) {
        memset(pvVar3,0,0x80);
        pvVar4 = (void *)(**ppcVar5)(0x14);
        param_1[0xc] = pvVar4;
        if (pvVar4 == (void *)0x0) {
          FUN_00195c00(0,iVar7 + DAT_001974b4);
          param_1[10] = (void *)0x0;
          param_1[0xb] = (void *)0x0;
          param_1[9] = (void *)0x0;
          return 0xffffffff;
        }
        param_1[10] = (void *)0x0;
        param_1[0xb] = (void *)0x5;
        param_1[9] = (void *)0x0;
        param_1[5] = (void *)0x0;
        param_1[6] = (void *)0x0;
        param_1[0x2b] = (void *)0x0;
        param_1[7] = (void *)0xffffffff;
        pvVar4 = (void *)(**ppcVar5)(0x28);
        param_1[0x10] = pvVar4;
        if (pvVar4 != (void *)0x0) {
          param_1[0xf] = (void *)0xa;
          param_1[0xe] = (void *)0x0;
          param_1[0xd] = (void *)0x0;
          pvVar4 = (void *)(**ppcVar5)(0x28);
          param_1[0x31] = pvVar4;
          if (pvVar4 != (void *)0x0) {
            param_1[0x2f] = (void *)0x0;
            iVar1 = DAT_001974bc;
            param_1[0x30] = (void *)0xa;
            param_1[0x2e] = (void *)0x0;
            pvVar4 = *(void **)(iVar7 + iVar1);
            *param_1 = pvVar3;
            memcpy(pvVar3,pvVar4,0x70);
            iVar1 = DAT_001974c0;
            param_1[3] = (void *)0x1;
            ppvVar6 = *(void ***)(iVar7 + iVar1);
            param_1[1] = param_1;
            param_1[2] = (void *)0x0;
            param_1[4] = (void *)0x0;
            pvVar3 = *ppvVar6;
            param_1[0x22] = DAT_001974c4;
            param_1[0x46] = pvVar3;
            iVar2 = DAT_001974cc;
            iVar1 = DAT_001974c8;
            param_1[8] = (void *)0x1;
            pvVar3 = *(void **)(iVar7 + iVar2);
            param_1[0x1d] = *(void **)(iVar7 + iVar1);
            param_1[0x1b] = param_1;
            param_1[0x1c] = pvVar3;
            param_1[0x11] = (void *)0x0;
            param_1[0x1a] = (void *)0x0;
            param_1[0x32] = (void *)0x0;
            param_1[0x33] = (void *)0x0;
            param_1[0x47] = (void *)0x0;
            FUN_00179218(param_1 + 0x12);
            return 0;
          }
          FUN_00195c00(0,iVar7 + DAT_001974b4);
          param_1[0x2f] = (void *)0x0;
          param_1[0x30] = (void *)0xa;
          param_1[0xe] = (void *)0x0;
          param_1[0xf] = (void *)0x0;
          param_1[0x2e] = (void *)0x0;
          param_1[0xd] = (void *)0x0;
          param_1[10] = (void *)0x0;
          param_1[0xb] = (void *)0x0;
          param_1[9] = (void *)0x0;
          return 0xffffffff;
        }
        FUN_00195c00(0,iVar7 + DAT_001974b4);
        param_1[0xe] = (void *)0x0;
        param_1[0xf] = (void *)0x0;
        param_1[0xd] = (void *)0x0;
        param_1[10] = (void *)0x0;
        param_1[0xb] = (void *)0x0;
        param_1[9] = (void *)0x0;
        return 0xffffffff;
      }
    }
    FUN_00195c00(pvVar3,iVar7 + DAT_001974b4);
  }
  return 0xffffffff;
}


