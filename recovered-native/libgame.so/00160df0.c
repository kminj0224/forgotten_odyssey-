/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160df0  Symbol: initPremultipliedATextureWithImage */

/* cocos2d::CCTexture2D::initPremultipliedATextureWithImage(cocos2d::CCImage*, unsigned int,
   unsigned int) */

undefined4 __thiscall
cocos2d::CCTexture2D::initPremultipliedATextureWithImage
          (CCTexture2D *this,CCImage *param_1,uint param_2,uint param_3)

{
  CCImage CVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint *__s;
  undefined8 uVar12;
  uint *local_48;
  uint local_3c;
  void *local_38;
  CCSize local_28;
  undefined4 local_24;
  CCSize local_20;
  undefined4 local_1c;
  
  CCSize::CCSize((CCSize *)&local_28);
  CVar1 = param_1[0x10];
  uVar3 = (**(code **)(*(int *)param_1 + 8))(param_1);
  if (CVar1 == (CCImage)0x0) {
    local_3c = (uVar3 < 8) + 2;
  }
  else {
    local_3c = *(uint *)(DAT_001610f4 + 0x160e16);
  }
  uVar4 = (***(code ***)param_1)(param_1);
  uVar5 = (**(code **)(*(int *)param_1 + 4))(param_1);
  __floatsisf(uVar4);
  uVar12 = __floatsisf(uVar5);
  CCSize::CCSize((CCSize *)&local_20,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  local_28 = local_20;
  local_24 = local_1c;
  if (local_3c < 9) {
    uVar3 = 1 << (local_3c & 0xff);
    if ((uVar3 & 0x19a) == 0) {
      if (-1 < (int)(uVar3 << 0x1d)) goto LAB_00160f52;
      local_38 = *(void **)(param_1 + 0xc);
      iVar10 = (***(code ***)param_1)(param_1);
      if ((iVar10 == (short)param_2) &&
         (iVar10 = (**(code **)(*(int *)param_1 + 4))(param_1), iVar10 == (short)param_3)) {
        iVar10 = param_2 * 3;
LAB_00160f02:
        __s = (uint *)operator_new__(param_3 * iVar10);
        memcpy(__s,local_38,param_3 * iVar10);
      }
      else {
        uVar3 = param_2 * 3 * param_3;
        __s = (uint *)operator_new__(uVar3);
        memset(__s,0,uVar3);
        iVar10 = (**(code **)(*(int *)param_1 + 4))(param_1);
        local_48 = __s;
        for (iVar11 = 0; iVar11 < iVar10; iVar11 = iVar11 + 1) {
          iVar6 = (***(code ***)param_1)(param_1);
          iVar7 = (***(code ***)param_1)(param_1);
          memcpy(local_48,(void *)((int)local_38 + iVar11 * iVar6 * 3),iVar7 * 3);
          local_48 = (uint *)((int)local_48 + param_2 * 3);
        }
      }
    }
    else {
      local_38 = *(void **)(param_1 + 0xc);
      iVar10 = (***(code ***)param_1)(param_1);
      if (iVar10 == (short)param_2) {
        iVar11 = (**(code **)(*(int *)param_1 + 4))(param_1);
        iVar10 = param_2 << 2;
        if (iVar11 == (short)param_3) goto LAB_00160f02;
      }
      uVar3 = param_2 * 4 * param_3;
      __s = (uint *)operator_new__(uVar3);
      memset(__s,0,uVar3);
      iVar10 = (**(code **)(*(int *)param_1 + 4))(param_1);
      local_48 = __s;
      for (iVar11 = 0; iVar11 < iVar10; iVar11 = iVar11 + 1) {
        iVar6 = (***(code ***)param_1)(param_1);
        iVar7 = (***(code ***)param_1)(param_1);
        memcpy(local_48,(void *)((int)local_38 + iVar11 * iVar6 * 4),iVar7 << 2);
        local_48 = local_48 + param_2;
      }
    }
  }
  else {
LAB_00160f52:
    __s = (uint *)0x0;
  }
  if (local_3c == 3) {
    local_48 = (uint *)operator_new__(param_3 * param_2 * 2);
    puVar8 = local_48;
    puVar9 = __s;
    for (iVar10 = 0; iVar10 != param_3 * param_2; iVar10 = iVar10 + 1) {
      uVar3 = *puVar9;
      puVar9 = puVar9 + 1;
      *(ushort *)puVar8 =
           (ushort)(((uVar3 & 0xff) >> 3) << 0xb) | (ushort)((uVar3 >> 0x10 & 0xff) >> 3) |
           (ushort)(((uVar3 >> 8 & 0xff) >> 2) << 5);
      puVar8 = (uint *)((int)puVar8 + 2);
    }
  }
  else if (local_3c == 7) {
    local_48 = (uint *)operator_new__(param_3 * param_2 * 2);
    puVar8 = __s;
    puVar9 = local_48;
    for (iVar10 = 0; iVar10 != param_3 * param_2; iVar10 = iVar10 + 1) {
      uVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      uVar2 = (ushort)(uVar3 >> 0x10);
      *(ushort *)puVar9 =
           (ushort)(((uVar3 & 0xff) >> 4) << 0xc) | uVar2 & 0xf0 | uVar2 >> 0xc |
           (ushort)(((uVar3 >> 8 & 0xff) >> 4) << 8);
      puVar9 = (uint *)((int)puVar9 + 2);
    }
  }
  else {
    if (local_3c != 8) {
      local_48 = __s;
      if (local_3c == 4) {
        local_3c = 1;
      }
      goto LAB_0016106e;
    }
    local_48 = (uint *)operator_new__(param_3 * param_2 * 2);
    puVar8 = __s;
    puVar9 = local_48;
    for (iVar10 = 0; iVar10 != param_3 * param_2; iVar10 = iVar10 + 1) {
      uVar3 = *puVar8;
      puVar8 = puVar8 + 1;
      *(ushort *)puVar9 =
           (ushort)(((uVar3 >> 8 & 0xff) >> 3) << 6) |
           (ushort)(((uVar3 & 0xff) >> 3) << 0xb) | (ushort)(uVar3 >> 0x1f) |
           (ushort)(((uVar3 >> 0x10 & 0xff) >> 3) << 1);
      puVar9 = (uint *)((int)puVar9 + 2);
    }
  }
  if (__s != (uint *)0x0) {
    operator_delete__(__s);
  }
LAB_0016106e:
  if (local_48 != (uint *)0x0) {
    initWithData(this,local_48,local_3c,param_2,param_3,&local_28);
    this[0x34] = *(CCTexture2D *)(param_1 + 0x11);
    operator_delete__(local_48);
  }
  return 1;
}


